/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C0158410
 * Callers:
 *     RIMGetLastInvertedPenTime @ 0x1C01568A0 (RIMGetLastInvertedPenTime.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0169EE0 (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C016A12C (RIMIDEValidateMouseInputStruct.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01795E8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C0158410
 * Reason: Hex-Rays returned no pseudocode for 0x1C0158410
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0158410: mov     r11, rsp
 * 00000001C0158413: mov     [r11+8], rbx
 * 00000001C0158417: mov     [r11+10h], rsi
 * 00000001C015841B: push    rdi
 * 00000001C015841C: sub     rsp, 40h
 * 00000001C0158420: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0158427: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C015842E: movzx   edi, r9w
 * 00000001C0158432: movzx   ebx, dl
 * 00000001C0158435: mov     eax, [rcx+2Ch]
 * 00000001C0158438: test    al, 1
 * 00000001C015843A: jz      short loc_1C0158474
 * 00000001C015843C: cmp     [rcx+29h], bl
 * 00000001C015843F: jb      short loc_1C0158474
 * 00000001C0158441: and     qword ptr [r11-18h], 0
 * 00000001C0158446: lea     rdx, [r11+30h]
 * 00000001C015844A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0158451: mov     r9d, edi
 * 00000001C0158454: mov     r8, [rsp+48h+arg_20]
 * 00000001C0158459: mov     rcx, [rcx+18h]
 * 00000001C015845D: mov     qword ptr [r11-20h], 8
 * 00000001C0158465: mov     [r11-28h], rdx
 * 00000001C0158469: mov     edx, 2Bh ; '+'
 * 00000001C015846E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0158474: and     [rsp+48h+var_10], 0
 * 00000001C015847A: lea     rax, [rsp+48h+arg_28]
 * 00000001C015847F: mov     r9, [rsp+48h+arg_20]
 * 00000001C0158484: mov     r8d, 1
 * 00000001C015848A: mov     [rsp+48h+var_18], 8
 * 00000001C0158493: mov     edx, ebx
 * 00000001C0158495: mov     [rsp+48h+var_20], rax
 * 00000001C015849A: mov     rcx, rsi
 * 00000001C015849D: mov     [rsp+48h+var_28], di
 * 00000001C01584A2: call    cs:__imp_WppAutoLogTrace
 * 00000001C01584A9: nop     dword ptr [rax+rax+00h]
 * 00000001C01584AE: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01584B3: mov     rsi, [rsp+48h+arg_8]
 * 00000001C01584B8: add     rsp, 40h
 * 00000001C01584BC: pop     rdi
 * 00000001C01584BD: retn
 */
