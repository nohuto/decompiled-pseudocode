/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C01F53F4
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0006CCC (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C01F53F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01F53F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01F53F4: mov     r11, rsp
 * 00000001C01F53F7: mov     [r11+8], rbx
 * 00000001C01F53FB: push    rsi
 * 00000001C01F53FC: sub     rsp, 40h
 * 00000001C01F5400: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01F5407: mov     esi, 0Ch
 * 00000001C01F540C: mov     rbx, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C01F5413: test    dword ptr [rcx+2Ch], 200h
 * 00000001C01F541A: jz      short loc_1C01F5456
 * 00000001C01F541C: cmp     byte ptr [rcx+29h], 4
 * 00000001C01F5420: jb      short loc_1C01F5456
 * 00000001C01F5422: and     qword ptr [r11-18h], 0
 * 00000001C01F5427: lea     rdx, [r11+30h]
 * 00000001C01F542B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01F5432: lea     r8, WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids
 * 00000001C01F5439: mov     rcx, [rcx+18h]
 * 00000001C01F543D: mov     qword ptr [r11-20h], 8
 * 00000001C01F5445: mov     [r11-28h], rdx
 * 00000001C01F5449: lea     edx, [rsi+1Fh]
 * 00000001C01F544C: movzx   r9d, si
 * 00000001C01F5450: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01F5456: and     [rsp+48h+var_10], 0
 * 00000001C01F545C: lea     rax, [rsp+48h+arg_28]
 * 00000001C01F5461: mov     edx, 4
 * 00000001C01F5466: mov     [rsp+48h+var_18], 8
 * 00000001C01F546F: mov     [rsp+48h+var_20], rax
 * 00000001C01F5474: lea     r9, WPP_28bedf5f3f5f37f9cc6016b85e7e96ea_Traceguids
 * 00000001C01F547B: mov     rcx, rbx
 * 00000001C01F547E: mov     [rsp+48h+var_28], si
 * 00000001C01F5483: lea     r8d, [rdx+6]
 * 00000001C01F5487: call    cs:__imp_WppAutoLogTrace
 * 00000001C01F548E: nop     dword ptr [rax+rax+00h]
 * 00000001C01F5493: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01F5498: add     rsp, 40h
 * 00000001C01F549C: pop     rsi
 * 00000001C01F549D: retn
 */
