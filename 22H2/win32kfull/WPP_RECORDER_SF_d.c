/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C01D95D0
 * Callers:
 *     NtUserSetCursorPos @ 0x1C00131C0 (NtUserSetCursorPos.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0066248 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C010316C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DB8F8 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     xxxInjectTouchInput @ 0x1C01DC7EC (xxxInjectTouchInput.c)
 *     NtUserInjectTouchInput @ 0x1C01FD7E0 (NtUserInjectTouchInput.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021AF18 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C01D95D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01D95D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01D95D0: mov     [rsp+arg_0], rbx
 * 00000001C01D95D5: mov     [rsp+arg_8], rbp
 * 00000001C01D95DA: mov     [rsp+arg_10], rsi
 * 00000001C01D95DF: push    rdi
 * 00000001C01D95E0: sub     rsp, 40h
 * 00000001C01D95E4: mov     rbp, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C01D95EB: mov     esi, r8d
 * 00000001C01D95EE: mov     r11d, r8d
 * 00000001C01D95F1: shr     r11, 10h
 * 00000001C01D95F5: movzx   edi, r9w
 * 00000001C01D95F9: lea     r10d, [rsi-1]
 * 00000001C01D95FD: movzx   ebx, dl
 * 00000001C01D9600: mov     ecx, r10d
 * 00000001C01D9603: and     r10d, 1Fh
 * 00000001C01D9607: shr     rcx, 5
 * 00000001C01D960B: lea     rax, [r11+r11*4]
 * 00000001C01D960F: and     ecx, 7FFh
 * 00000001C01D9615: lea     r9, [rcx+rax*4]
 * 00000001C01D9619: mov     ecx, r10d
 * 00000001C01D961C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C01D9623: mov     eax, [r10+r9*4+2Ch]
 * 00000001C01D9628: bt      eax, ecx
 * 00000001C01D962B: jnb     short loc_1C01D9673
 * 00000001C01D962D: lea     rcx, [r11+r11*4]
 * 00000001C01D9631: add     rcx, rcx
 * 00000001C01D9634: cmp     [r10+rcx*8+29h], bl
 * 00000001C01D9639: jb      short loc_1C01D9673
 * 00000001C01D963B: and     [rsp+48h+var_18], 0
 * 00000001C01D9641: lea     rdx, [rsp+48h+arg_28]
 * 00000001C01D9646: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01D964D: mov     r9d, edi
 * 00000001C01D9650: mov     r8, [rsp+48h+arg_20]
 * 00000001C01D9655: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01D965A: mov     [rsp+48h+var_20], 4
 * 00000001C01D9663: mov     [rsp+48h+var_28], rdx
 * 00000001C01D9668: mov     edx, 2Bh ; '+'
 * 00000001C01D966D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01D9673: and     [rsp+48h+var_10], 0
 * 00000001C01D9679: lea     rax, [rsp+48h+arg_28]
 * 00000001C01D967E: mov     r9, [rsp+48h+arg_20]
 * 00000001C01D9683: mov     r8d, esi
 * 00000001C01D9686: mov     [rsp+48h+var_18], 4
 * 00000001C01D968F: mov     edx, ebx
 * 00000001C01D9691: mov     [rsp+48h+var_20], rax
 * 00000001C01D9696: mov     rcx, rbp
 * 00000001C01D9699: mov     word ptr [rsp+48h+var_28], di
 * 00000001C01D969E: call    cs:__imp_WppAutoLogTrace
 * 00000001C01D96A5: nop     dword ptr [rax+rax+00h]
 * 00000001C01D96AA: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01D96AF: mov     rbp, [rsp+48h+arg_8]
 * 00000001C01D96B4: mov     rsi, [rsp+48h+arg_10]
 * 00000001C01D96B9: add     rsp, 40h
 * 00000001C01D96BD: pop     rdi
 * 00000001C01D96BE: retn
 */
