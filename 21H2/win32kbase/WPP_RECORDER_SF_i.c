/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C01584E0
 * Callers:
 *     RIMGetLastInvertedPenTime @ 0x1C0156970 (RIMGetLastInvertedPenTime.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0169FB0 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C016A1FC (RIMIDEValidateMouseInputStruct.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01796B8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C01584E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01584E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01584E0: mov     r11, rsp
 * 00000001C01584E3: mov     [r11+8], rbx
 * 00000001C01584E7: mov     [r11+10h], rsi
 * 00000001C01584EB: push    rdi
 * 00000001C01584EC: sub     rsp, 40h
 * 00000001C01584F0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C01584F7: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C01584FE: movzx   edi, r9w
 * 00000001C0158502: movzx   ebx, dl
 * 00000001C0158505: mov     eax, [rcx+2Ch]
 * 00000001C0158508: test    al, 1
 * 00000001C015850A: jz      short loc_1C0158544
 * 00000001C015850C: cmp     [rcx+29h], bl
 * 00000001C015850F: jb      short loc_1C0158544
 * 00000001C0158511: and     qword ptr [r11-18h], 0
 * 00000001C0158516: lea     rdx, [r11+30h]
 * 00000001C015851A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0158521: mov     r9d, edi
 * 00000001C0158524: mov     r8, [rsp+48h+arg_20]
 * 00000001C0158529: mov     rcx, [rcx+18h]
 * 00000001C015852D: mov     qword ptr [r11-20h], 8
 * 00000001C0158535: mov     [r11-28h], rdx
 * 00000001C0158539: mov     edx, 2Bh ; '+'
 * 00000001C015853E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0158544: and     [rsp+48h+var_10], 0
 * 00000001C015854A: lea     rax, [rsp+48h+arg_28]
 * 00000001C015854F: mov     r9, [rsp+48h+arg_20]
 * 00000001C0158554: mov     r8d, 1
 * 00000001C015855A: mov     [rsp+48h+var_18], 8
 * 00000001C0158563: mov     edx, ebx
 * 00000001C0158565: mov     [rsp+48h+var_20], rax
 * 00000001C015856A: mov     rcx, rsi
 * 00000001C015856D: mov     [rsp+48h+var_28], di
 * 00000001C0158572: call    cs:__imp_WppAutoLogTrace
 * 00000001C0158579: nop     dword ptr [rax+rax+00h]
 * 00000001C015857E: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0158583: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0158588: add     rsp, 40h
 * 00000001C015858C: pop     rdi
 * 00000001C015858D: retn
 */
