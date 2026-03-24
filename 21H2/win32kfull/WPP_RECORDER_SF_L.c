/*
 * XREFs of WPP_RECORDER_SF_L @ 0x1C01EFEC4
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01EF694 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_L @ 0x1C01EFEC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01EFEC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01EFEC4: mov     r11, rsp
 * 00000001C01EFEC7: mov     [r11+8], rbx
 * 00000001C01EFECB: push    rsi
 * 00000001C01EFECC: sub     rsp, 40h
 * 00000001C01EFED0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01EFED7: mov     esi, 0Eh
 * 00000001C01EFEDC: mov     rbx, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C01EFEE3: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C01EFEEA: jz      short loc_1C01EFF26
 * 00000001C01EFEEC: cmp     byte ptr [rcx+29h], 4
 * 00000001C01EFEF0: jb      short loc_1C01EFF26
 * 00000001C01EFEF2: and     qword ptr [r11-18h], 0
 * 00000001C01EFEF7: lea     rdx, [r11+30h]
 * 00000001C01EFEFB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01EFF02: lea     r8, WPP_b43beeb5a22232e36856aa8311da4939_Traceguids
 * 00000001C01EFF09: mov     rcx, [rcx+18h]
 * 00000001C01EFF0D: mov     qword ptr [r11-20h], 4
 * 00000001C01EFF15: mov     [r11-28h], rdx
 * 00000001C01EFF19: lea     edx, [rsi+1Dh]
 * 00000001C01EFF1C: movzx   r9d, si
 * 00000001C01EFF20: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01EFF26: and     [rsp+48h+var_10], 0
 * 00000001C01EFF2C: lea     rax, [rsp+48h+arg_28]
 * 00000001C01EFF31: mov     edx, 4
 * 00000001C01EFF36: mov     [rsp+48h+var_18], 4
 * 00000001C01EFF3F: mov     [rsp+48h+var_20], rax
 * 00000001C01EFF44: lea     r9, WPP_b43beeb5a22232e36856aa8311da4939_Traceguids
 * 00000001C01EFF4B: mov     rcx, rbx
 * 00000001C01EFF4E: mov     [rsp+48h+var_28], si
 * 00000001C01EFF53: lea     r8d, [rdx+0Fh]
 * 00000001C01EFF57: call    cs:__imp_WppAutoLogTrace
 * 00000001C01EFF5E: nop     dword ptr [rax+rax+00h]
 * 00000001C01EFF63: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01EFF68: add     rsp, 40h
 * 00000001C01EFF6C: pop     rsi
 * 00000001C01EFF6D: retn
 */
