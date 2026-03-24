/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C01525FC
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C007476C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0075DA8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C0161264 (RIMConfigurePointerDevice.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0170A0C (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     tracePointerFlags @ 0x1C0170FEC (tracePointerFlags.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A8C94 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     UnpackMouseSettings @ 0x1C01AF8D0 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01AFA20 (UnpackPenSettings.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B7A10 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8170 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8920 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B93B0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C01525FC
 * Reason: Hex-Rays returned no pseudocode for 0x1C01525FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01525FC: mov     [rsp+arg_0], rbx
 * 00000001C0152601: mov     [rsp+arg_8], rbp
 * 00000001C0152606: mov     [rsp+arg_10], rsi
 * 00000001C015260B: push    rdi
 * 00000001C015260C: push    r14
 * 00000001C015260E: push    r15
 * 00000001C0152610: sub     rsp, 40h
 * 00000001C0152614: mov     rbx, [rsp+58h+arg_28]
 * 00000001C015261C: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0152620: mov     r14d, r8d
 * 00000001C0152623: mov     r15, rcx
 * 00000001C0152626: mov     esi, r8d
 * 00000001C0152629: lea     r8, aNull; "NULL"
 * 00000001C0152630: shr     rsi, 10h
 * 00000001C0152634: movzx   ebp, r9w
 * 00000001C0152638: lea     r11d, [r14-1]
 * 00000001C015263C: mov     edx, r11d
 * 00000001C015263F: and     r11d, 1Fh
 * 00000001C0152643: shr     rdx, 5
 * 00000001C0152647: lea     rax, [rsi+rsi*4]
 * 00000001C015264B: and     edx, 7FFh
 * 00000001C0152651: lea     r10, [rdx+rax*4]
 * 00000001C0152655: mov     edx, r11d
 * 00000001C0152658: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C015265F: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0152664: bt      eax, edx
 * 00000001C0152667: jnb     short loc_1C01526D6
 * 00000001C0152669: lea     r10, [rsi+rsi*4]
 * 00000001C015266D: add     r10, r10
 * 00000001C0152670: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C0152676: jb      short loc_1C01526D6
 * 00000001C0152678: test    rbx, rbx
 * 00000001C015267B: jz      short loc_1C015268E
 * 00000001C015267D: mov     rdx, rdi
 * 00000001C0152680: inc     rdx
 * 00000001C0152683: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0152687: jnz     short loc_1C0152680
 * 00000001C0152689: inc     rdx
 * 00000001C015268C: jmp     short loc_1C0152693
 * 00000001C015268E: mov     edx, 5
 * 00000001C0152693: mov     rax, cs:pfnWppTraceMessage
 * 00000001C015269A: test    rbx, rbx
 * 00000001C015269D: mov     rcx, rbx
 * 00000001C01526A0: mov     r9d, ebp
 * 00000001C01526A3: cmovz   rcx, r8
 * 00000001C01526A7: and     [rsp+58h+var_28], 0
 * 00000001C01526AD: mov     r8, [rsp+58h+arg_20]
 * 00000001C01526B5: mov     [rsp+58h+var_30], rdx
 * 00000001C01526BA: mov     edx, 2Bh ; '+'
 * 00000001C01526BF: mov     [rsp+58h+var_38], rcx
 * 00000001C01526C4: mov     rcx, [r11+r10*8+18h]
 * 00000001C01526C9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01526CF: lea     r8, aNull; "NULL"
 * 00000001C01526D6: test    rbx, rbx
 * 00000001C01526D9: jz      short loc_1C01526E9
 * 00000001C01526DB: inc     rdi
 * 00000001C01526DE: cmp     byte ptr [rbx+rdi], 0
 * 00000001C01526E2: jnz     short loc_1C01526DB
 * 00000001C01526E4: inc     rdi
 * 00000001C01526E7: jmp     short loc_1C01526EE
 * 00000001C01526E9: mov     edi, 5
 * 00000001C01526EE: mov     r9, [rsp+58h+arg_20]
 * 00000001C01526F6: test    rbx, rbx
 * 00000001C01526F9: mov     edx, 4
 * 00000001C01526FE: mov     rcx, r15
 * 00000001C0152701: cmovz   rbx, r8
 * 00000001C0152705: and     [rsp+58h+var_20], 0
 * 00000001C015270B: mov     [rsp+58h+var_28], rdi
 * 00000001C0152710: mov     r8d, r14d
 * 00000001C0152713: mov     [rsp+58h+var_30], rbx
 * 00000001C0152718: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C015271D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0152724: nop     dword ptr [rax+rax+00h]
 * 00000001C0152729: mov     rbx, [rsp+58h+arg_0]
 * 00000001C015272E: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0152733: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0152738: add     rsp, 40h
 * 00000001C015273C: pop     r15
 * 00000001C015273E: pop     r14
 * 00000001C0152740: pop     rdi
 * 00000001C0152741: retn
 */
