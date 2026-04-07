/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x180042F48
 * Callers:
 *     DllMain @ 0x1800571C4 (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x180042F48
 * Reason: Hex-Rays returned no pseudocode for 0x180042F48
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180042F48: sub     rsp, 28h
 * 0000000180042F4C: xor     eax, eax
 * 0000000180042F4E: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 0000000180042F55: jnz     short loc_180042F7B
 * 0000000180042F57: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 0000000180042F5E: mov     r9, r8
 * 0000000180042F61: lea     rdx, McGenControlCallbackV2
 * 0000000180042F68: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 0000000180042F6F: call    cs:__imp_EtwEventRegister
 * 0000000180042F76: nop     dword ptr [rax+rax+00h]
 * 0000000180042F7B: add     rsp, 28h
 * 0000000180042F7F: retn
 */
