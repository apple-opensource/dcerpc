/*
 * Copyright (c) 2010 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of Apple Inc. ("Apple") nor the names of its
 *     contributors may be used to endorse or promote products derived from
 *     this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Portions of this software have been released under the following terms:
 *
 * (c) Copyright 1989-1993 OPEN SOFTWARE FOUNDATION, INC.
 * (c) Copyright 1989-1993 HEWLETT-PACKARD COMPANY
 * (c) Copyright 1989-1993 DIGITAL EQUIPMENT CORPORATION
 *
 * To anyone who acknowledges that this file is provided "AS IS"
 * without any express or implied warranty:
 * permission to use, copy, modify, and distribute this file for any
 * purpose is hereby granted without fee, provided that the above
 * copyright notices and this notice appears in all source code copies,
 * and that none of the names of Open Software Foundation, Inc., Hewlett-
 * Packard Company or Digital Equipment Corporation be used
 * in advertising or publicity pertaining to distribution of the software
 * without specific, written prior permission.  Neither Open Software
 * Foundation, Inc., Hewlett-Packard Company nor Digital
 * Equipment Corporation makes any representations about the suitability
 * of this software for any purpose.
 *
 * Copyright (c) 2007, Novell, Inc. All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of Novell Inc. nor the names of its contributors
 *     may be used to endorse or promote products derived from this
 *     this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * @APPLE_LICENSE_HEADER_END@
 */

/*
**
**  NAME
**
**      cnbind.h
**
**  FACILITY:
**
**      Remote Procedure Call (RPC)
**
**  ABSTRACT:
**
**  Interface to the NCA Connection Protocol Service's Binding Service.
**
**
*/

#ifndef _CNBIND_H
#define _CNBIND_H	1

/*
 * R P C _ _ C N _ B I N D I N G _ A L L O C
 */

PRIVATE rpc_binding_rep_t *rpc__cn_binding_alloc (
    boolean32            /* is_server */,
    unsigned32          * /* st */);

/*
 * R P C _ _ C N _ B I N D I N G _ I N I T
 */

PRIVATE void rpc__cn_binding_init (
    rpc_binding_rep_p_t  /* binding_r */,
    unsigned32          * /* st */);

/*
 * R P C _ _ C N _ B I N D I N G _ R E S E T
 */

PRIVATE void rpc__cn_binding_reset (
    rpc_binding_rep_p_t  /* binding_r */,
    unsigned32          * /* st */);

/*
 * R P C _ _ C N _ B I N D I N G _ C H A N G E D
 */

PRIVATE void rpc__cn_binding_changed (
    rpc_binding_rep_p_t  /* binding_r */,
    unsigned32          * /* st */);

/*
 * R P C _ _ C N _ B I N D I N G _ F R E E
 */

PRIVATE void rpc__cn_binding_free (
    rpc_binding_rep_p_t * /* binding_r */,
    unsigned32          * /* st */);

/*
 * R P C _ _ C N _ B I N D I N G _ I N Q _ A D D R
 */

PRIVATE void rpc__cn_binding_inq_addr (
    rpc_binding_rep_p_t  /* binding_r */,
    rpc_addr_p_t        * /* rpc_addr */,
    unsigned32          * /* st */);

/*
 * R P C _ _ C N _ B I N D I N G _ I N Q _ C L I E N T
 */

PRIVATE void rpc__cn_binding_inq_client (
    rpc_binding_rep_p_t  /* binding_r */,
    rpc_client_handle_t * /* client_h */,
    unsigned32          * /* st */);

/*
 * R P C _ _ C N _ B I N D I N G _ C O P Y
 */

PRIVATE void rpc__cn_binding_copy (
    rpc_binding_rep_p_t  /* src_binding_r */,
    rpc_binding_rep_p_t  /* dst_binding_r */,
    unsigned32          * /* st */);

/*
 * R P C _ _ C N _ B I N D I N G _ C R O S S _ F O R K
 */

PRIVATE void rpc__cn_binding_cross_fork (
    rpc_binding_rep_p_t  /* binding_r */,
    unsigned32          * /* st */);

#endif /* _CNBIND_H */
