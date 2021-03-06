/*
 * Copyright 2012 Guillermo A. Amaral B. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN
 * NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 */

#ifndef COMMON_H
#define COMMON_H 1

#define DELAY(milliseconds) \
	_delay_ms(milliseconds)

#define HIGH(PORT, BIT) \
	PORT |= _BV(BIT)
#define OUT(PORT, BIT) HIGH(PORT, BIT)
#define ON(PORT, BIT) HIGH(PORT, BIT)

#define LOW(PORT, BIT) \
	PORT &= ~_BV(BIT)
#define IN(PORT, BIT) LOW(PORT, BIT)
#define OFF(PORT, BIT) LOW(PORT, BIT)

#define TOGGLE(PORT, BIT) \
	PORT ^= _BV(BIT)

#define ISSET(PORT, BIT) \
	(0 != (PORT & _BV(BIT)))
#define ISCLEAR(PORT, BIT) \
	(0 == (PORT & _BV(BIT)))

#endif
