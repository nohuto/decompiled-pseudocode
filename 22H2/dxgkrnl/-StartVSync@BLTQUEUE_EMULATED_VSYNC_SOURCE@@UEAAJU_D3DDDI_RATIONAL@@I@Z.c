/*
 * XREFs of ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00DFDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C00DFDB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00DFDB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00DFDB0: sub     rsp, 28h
 * 00000001C00DFDB4: xor     r10d, r10d
 * 00000001C00DFDB7: mov     r8, rdx
 * 00000001C00DFDBA: mov     r11, rcx
 * 00000001C00DFDBD: cmp     [rcx+8], r10b
 * 00000001C00DFDC1: jnz     short loc_1C00DFDD8
 * 00000001C00DFDC3: mov     rax, rdx
 * 00000001C00DFDC6: xor     edx, edx
 * 00000001C00DFDC8: shr     rax, 20h
 * 00000001C00DFDCC: imul    eax, 989680h
 * 00000001C00DFDD2: div     r8d
 * 00000001C00DFDD5: mov     r10d, eax
 * 00000001C00DFDD8: mov     ecx, r8d
 * 00000001C00DFDDB: mov     rax, r8
 * 00000001C00DFDDE: shr     rax, 20h
 * 00000001C00DFDE2: xor     r9d, r9d
 * 00000001C00DFDE5: imul    rax, 0FFFFFFFFFF676980h
 * 00000001C00DFDEC: mov     r8, r10
 * 00000001C00DFDEF: cqo
 * 00000001C00DFDF1: idiv    rcx
 * 00000001C00DFDF4: mov     rcx, [r11+10h]
 * 00000001C00DFDF8: mov     rdx, rax
 * 00000001C00DFDFB: call    cs:__imp_ExSetTimer
 * 00000001C00DFE02: nop     dword ptr [rax+rax+00h]
 * 00000001C00DFE07: xor     eax, eax
 * 00000001C00DFE09: add     rsp, 28h
 * 00000001C00DFE0D: retn
 */
