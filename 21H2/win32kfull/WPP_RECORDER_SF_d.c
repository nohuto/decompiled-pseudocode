/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C01D9B90
 * Callers:
 *     NtUserSetCursorPos @ 0x1C00131C0 (NtUserSetCursorPos.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00662E8 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01034BC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x1C01DBEB8 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     xxxInjectTouchInput @ 0x1C01DCDAC (xxxInjectTouchInput.c)
 *     NtUserInjectTouchInput @ 0x1C01FDDA0 (NtUserInjectTouchInput.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B4D8 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C01D9B90
 * Reason: Hex-Rays returned no pseudocode for 0x1C01D9B90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01D9B90: mov     [rsp+arg_0], rbx
 * 00000001C01D9B95: mov     [rsp+arg_8], rbp
 * 00000001C01D9B9A: mov     [rsp+arg_10], rsi
 * 00000001C01D9B9F: push    rdi
 * 00000001C01D9BA0: sub     rsp, 40h
 * 00000001C01D9BA4: mov     rbp, cs:?gFullLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gFullLog
 * 00000001C01D9BAB: mov     esi, r8d
 * 00000001C01D9BAE: mov     r11d, r8d
 * 00000001C01D9BB1: shr     r11, 10h
 * 00000001C01D9BB5: movzx   edi, r9w
 * 00000001C01D9BB9: lea     r10d, [rsi-1]
 * 00000001C01D9BBD: movzx   ebx, dl
 * 00000001C01D9BC0: mov     ecx, r10d
 * 00000001C01D9BC3: and     r10d, 1Fh
 * 00000001C01D9BC7: shr     rcx, 5
 * 00000001C01D9BCB: lea     rax, [r11+r11*4]
 * 00000001C01D9BCF: and     ecx, 7FFh
 * 00000001C01D9BD5: lea     r9, [rcx+rax*4]
 * 00000001C01D9BD9: mov     ecx, r10d
 * 00000001C01D9BDC: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C01D9BE3: mov     eax, [r10+r9*4+2Ch]
 * 00000001C01D9BE8: bt      eax, ecx
 * 00000001C01D9BEB: jnb     short loc_1C01D9C33
 * 00000001C01D9BED: lea     rcx, [r11+r11*4]
 * 00000001C01D9BF1: add     rcx, rcx
 * 00000001C01D9BF4: cmp     [r10+rcx*8+29h], bl
 * 00000001C01D9BF9: jb      short loc_1C01D9C33
 * 00000001C01D9BFB: and     [rsp+48h+var_18], 0
 * 00000001C01D9C01: lea     rdx, [rsp+48h+arg_28]
 * 00000001C01D9C06: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01D9C0D: mov     r9d, edi
 * 00000001C01D9C10: mov     r8, [rsp+48h+arg_20]
 * 00000001C01D9C15: mov     rcx, [r10+rcx*8+18h]
 * 00000001C01D9C1A: mov     [rsp+48h+var_20], 4
 * 00000001C01D9C23: mov     [rsp+48h+var_28], rdx
 * 00000001C01D9C28: mov     edx, 2Bh ; '+'
 * 00000001C01D9C2D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01D9C33: and     [rsp+48h+var_10], 0
 * 00000001C01D9C39: lea     rax, [rsp+48h+arg_28]
 * 00000001C01D9C3E: mov     r9, [rsp+48h+arg_20]
 * 00000001C01D9C43: mov     r8d, esi
 * 00000001C01D9C46: mov     [rsp+48h+var_18], 4
 * 00000001C01D9C4F: mov     edx, ebx
 * 00000001C01D9C51: mov     [rsp+48h+var_20], rax
 * 00000001C01D9C56: mov     rcx, rbp
 * 00000001C01D9C59: mov     word ptr [rsp+48h+var_28], di
 * 00000001C01D9C5E: call    cs:__imp_WppAutoLogTrace
 * 00000001C01D9C65: nop     dword ptr [rax+rax+00h]
 * 00000001C01D9C6A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01D9C6F: mov     rbp, [rsp+48h+arg_8]
 * 00000001C01D9C74: mov     rsi, [rsp+48h+arg_10]
 * 00000001C01D9C79: add     rsp, 40h
 * 00000001C01D9C7D: pop     rdi
 * 00000001C01D9C7E: retn
 */
