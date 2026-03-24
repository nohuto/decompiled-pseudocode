/*
 * XREFs of ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C0084678
 * Callers:
 *     GreDrawStream @ 0x1C00839D0 (GreDrawStream.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x1C016B030 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@.c)
 * Callees:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C027BF58 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 */

/*
 * Hex-Rays decompilation failed for ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C0084678
 * Reason: Hex-Rays returned no pseudocode for 0x1C0084678
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0084678: push    rbx
 * 00000001C008467A: sub     rsp, 20h
 * 00000001C008467E: mov     rbx, rcx
 * 00000001C0084681: mov     rcx, [rcx+20h]
 * 00000001C0084685: test    rcx, rcx
 * 00000001C0084688: jnz     loc_1C019425A
 * 00000001C008468E: add     rsp, 20h
 * 00000001C0084692: pop     rbx
 * 00000001C0084693: retn
 * 00000001C019425A: mov     rax, cs:__imp_?pdibDefault@SURFACE@@2PEAV1@EA; SURFACE * SURFACE::pdibDefault
 * 00000001C0194261: cmp     rcx, [rax]
 * 00000001C0194264: jz      short loc_1C0194289
 * 00000001C0194266: call    cs:__imp_GreAcquireHmgrSemaphore
 * 00000001C019426D: nop     dword ptr [rax+rax+00h]
 * 00000001C0194272: mov     rcx, [rbx+20h]; this
 * 00000001C0194276: call    ?vDec_cRef@SURFACE@@QEAAXXZ; SURFACE::vDec_cRef(void)
 * 00000001C019427B: call    cs:__imp_GreReleaseHmgrSemaphore
 * 00000001C0194282: nop     dword ptr [rax+rax+00h]
 * 00000001C0194287: jmp     short loc_1C0194295
 * 00000001C0194289: call    cs:__imp_DEC_SHARE_REF_CNT
 * 00000001C0194290: nop     dword ptr [rax+rax+00h]
 * 00000001C0194295: and     qword ptr [rbx+20h], 0
 * 00000001C019429A: jmp     loc_1C008468E
 */
