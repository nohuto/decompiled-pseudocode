/*
 * XREFs of ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C0084708
 * Callers:
 *     GreDrawStream @ 0x1C0083A60 (GreDrawStream.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x1C016B940 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C027C588 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

/*
 * Hex-Rays decompilation failed for ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C0084708
 * Reason: Hex-Rays returned no pseudocode for 0x1C0084708
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0084708: push    rbx
 * 00000001C008470A: sub     rsp, 20h
 * 00000001C008470E: mov     rbx, rcx
 * 00000001C0084711: mov     rcx, [rcx+20h]
 * 00000001C0084715: test    rcx, rcx
 * 00000001C0084718: jnz     loc_1C0194BDA
 * 00000001C008471E: add     rsp, 20h
 * 00000001C0084722: pop     rbx
 * 00000001C0084723: retn
 * 00000001C0194BDA: mov     rax, cs:__imp_?pdibDefault@SURFACE@@2PEAV1@EA; SURFACE * SURFACE::pdibDefault
 * 00000001C0194BE1: cmp     rcx, [rax]
 * 00000001C0194BE4: jz      short loc_1C0194C09
 * 00000001C0194BE6: call    cs:__imp_GreAcquireHmgrSemaphore
 * 00000001C0194BED: nop     dword ptr [rax+rax+00h]
 * 00000001C0194BF2: mov     rcx, [rbx+20h]; this
 * 00000001C0194BF6: call    ?vDec_cRef@SURFACE@@QEAAXXZ; SURFACE::vDec_cRef(void)
 * 00000001C0194BFB: call    cs:__imp_GreReleaseHmgrSemaphore
 * 00000001C0194C02: nop     dword ptr [rax+rax+00h]
 * 00000001C0194C07: jmp     short loc_1C0194C15
 * 00000001C0194C09: call    cs:__imp_DEC_SHARE_REF_CNT
 * 00000001C0194C10: nop     dword ptr [rax+rax+00h]
 * 00000001C0194C15: and     qword ptr [rbx+20h], 0
 * 00000001C0194C1A: jmp     loc_1C008471E
 */
