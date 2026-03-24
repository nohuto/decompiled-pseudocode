/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C01F59B4
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0006CCC (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C01F59B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01F59B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01F59B4: mov     r11, rsp
 * 00000001C01F59B7: mov     [r11+8], rbx
 * 00000001C01F59BB: push    rsi
 * 00000001C01F59BC: sub     rsp, 40h
 * 00000001C01F59C0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01F59C7: mov     esi, 0Ch
 * 00000001C01F59CC: mov     rbx, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C01F59D3: test    dword ptr [rcx+2Ch], 200h
 * 00000001C01F59DA: jz      short loc_1C01F5A16
 * 00000001C01F59DC: cmp     byte ptr [rcx+29h], 4
 * 00000001C01F59E0: jb      short loc_1C01F5A16
 * 00000001C01F59E2: and     qword ptr [r11-18h], 0
 * 00000001C01F59E7: lea     rdx, [r11+30h]
 * 00000001C01F59EB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01F59F2: lea     r8, WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids
 * 00000001C01F59F9: mov     rcx, [rcx+18h]
 * 00000001C01F59FD: mov     qword ptr [r11-20h], 8
 * 00000001C01F5A05: mov     [r11-28h], rdx
 * 00000001C01F5A09: lea     edx, [rsi+1Fh]
 * 00000001C01F5A0C: movzx   r9d, si
 * 00000001C01F5A10: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01F5A16: and     [rsp+48h+var_10], 0
 * 00000001C01F5A1C: lea     rax, [rsp+48h+arg_28]
 * 00000001C01F5A21: mov     edx, 4
 * 00000001C01F5A26: mov     [rsp+48h+var_18], 8
 * 00000001C01F5A2F: mov     [rsp+48h+var_20], rax
 * 00000001C01F5A34: lea     r9, WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids
 * 00000001C01F5A3B: mov     rcx, rbx
 * 00000001C01F5A3E: mov     [rsp+48h+var_28], si
 * 00000001C01F5A43: lea     r8d, [rdx+6]
 * 00000001C01F5A47: call    cs:__imp_WppAutoLogTrace
 * 00000001C01F5A4E: nop     dword ptr [rax+rax+00h]
 * 00000001C01F5A53: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01F5A58: add     rsp, 40h
 * 00000001C01F5A5C: pop     rsi
 * 00000001C01F5A5D: retn
 */
