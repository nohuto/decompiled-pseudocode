/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x180042FF8
 * Callers:
 *     DllMain @ 0x180057274 (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x180042FF8
 * Reason: Hex-Rays returned no pseudocode for 0x180042FF8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180042FF8: sub     rsp, 28h
 * 0000000180042FFC: xor     eax, eax
 * 0000000180042FFE: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 0000000180043005: jnz     short loc_18004302B
 * 0000000180043007: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 000000018004300E: mov     r9, r8
 * 0000000180043011: lea     rdx, McGenControlCallbackV2
 * 0000000180043018: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 000000018004301F: call    cs:__imp_EtwEventRegister
 * 0000000180043026: nop     dword ptr [rax+rax+00h]
 * 000000018004302B: add     rsp, 28h
 * 000000018004302F: retn
 */
