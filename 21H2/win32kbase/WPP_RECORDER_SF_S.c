/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C01526CC
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C007308C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0074738 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C0161334 (RIMConfigurePointerDevice.c)
 *     ?DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z @ 0x1C0170ADC (-DumpPointerEventInt@@YAXPEAUtagPOINTEREVENTINT@@@Z.c)
 *     tracePointerFlags @ 0x1C01710BC (tracePointerFlags.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01A8D64 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 *     UnpackMouseSettings @ 0x1C01AF9A0 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01AFAF0 (UnpackPenSettings.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B7AE0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8240 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B89F0 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B9480 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C01526CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C01526CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01526CC: mov     [rsp+arg_0], rbx
 * 00000001C01526D1: mov     [rsp+arg_8], rbp
 * 00000001C01526D6: mov     [rsp+arg_10], rsi
 * 00000001C01526DB: push    rdi
 * 00000001C01526DC: push    r14
 * 00000001C01526DE: push    r15
 * 00000001C01526E0: sub     rsp, 40h
 * 00000001C01526E4: mov     rbx, [rsp+58h+arg_28]
 * 00000001C01526EC: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C01526F0: mov     r14d, r8d
 * 00000001C01526F3: mov     r15, rcx
 * 00000001C01526F6: mov     esi, r8d
 * 00000001C01526F9: lea     r8, aNull; "NULL"
 * 00000001C0152700: shr     rsi, 10h
 * 00000001C0152704: movzx   ebp, r9w
 * 00000001C0152708: lea     r11d, [r14-1]
 * 00000001C015270C: mov     edx, r11d
 * 00000001C015270F: and     r11d, 1Fh
 * 00000001C0152713: shr     rdx, 5
 * 00000001C0152717: lea     rax, [rsi+rsi*4]
 * 00000001C015271B: and     edx, 7FFh
 * 00000001C0152721: lea     r10, [rdx+rax*4]
 * 00000001C0152725: mov     edx, r11d
 * 00000001C0152728: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C015272F: mov     eax, [r11+r10*4+2Ch]
 * 00000001C0152734: bt      eax, edx
 * 00000001C0152737: jnb     short loc_1C01527A6
 * 00000001C0152739: lea     r10, [rsi+rsi*4]
 * 00000001C015273D: add     r10, r10
 * 00000001C0152740: cmp     byte ptr [r11+r10*8+29h], 4
 * 00000001C0152746: jb      short loc_1C01527A6
 * 00000001C0152748: test    rbx, rbx
 * 00000001C015274B: jz      short loc_1C015275E
 * 00000001C015274D: mov     rdx, rdi
 * 00000001C0152750: inc     rdx
 * 00000001C0152753: cmp     byte ptr [rbx+rdx], 0
 * 00000001C0152757: jnz     short loc_1C0152750
 * 00000001C0152759: inc     rdx
 * 00000001C015275C: jmp     short loc_1C0152763
 * 00000001C015275E: mov     edx, 5
 * 00000001C0152763: mov     rax, cs:pfnWppTraceMessage
 * 00000001C015276A: test    rbx, rbx
 * 00000001C015276D: mov     rcx, rbx
 * 00000001C0152770: mov     r9d, ebp
 * 00000001C0152773: cmovz   rcx, r8
 * 00000001C0152777: and     [rsp+58h+var_28], 0
 * 00000001C015277D: mov     r8, [rsp+58h+arg_20]
 * 00000001C0152785: mov     [rsp+58h+var_30], rdx
 * 00000001C015278A: mov     edx, 2Bh ; '+'
 * 00000001C015278F: mov     [rsp+58h+var_38], rcx
 * 00000001C0152794: mov     rcx, [r11+r10*8+18h]
 * 00000001C0152799: call    cs:__guard_dispatch_icall_fptr
 * 00000001C015279F: lea     r8, aNull; "NULL"
 * 00000001C01527A6: test    rbx, rbx
 * 00000001C01527A9: jz      short loc_1C01527B9
 * 00000001C01527AB: inc     rdi
 * 00000001C01527AE: cmp     byte ptr [rbx+rdi], 0
 * 00000001C01527B2: jnz     short loc_1C01527AB
 * 00000001C01527B4: inc     rdi
 * 00000001C01527B7: jmp     short loc_1C01527BE
 * 00000001C01527B9: mov     edi, 5
 * 00000001C01527BE: mov     r9, [rsp+58h+arg_20]
 * 00000001C01527C6: test    rbx, rbx
 * 00000001C01527C9: mov     edx, 4
 * 00000001C01527CE: mov     rcx, r15
 * 00000001C01527D1: cmovz   rbx, r8
 * 00000001C01527D5: and     [rsp+58h+var_20], 0
 * 00000001C01527DB: mov     [rsp+58h+var_28], rdi
 * 00000001C01527E0: mov     r8d, r14d
 * 00000001C01527E3: mov     [rsp+58h+var_30], rbx
 * 00000001C01527E8: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C01527ED: call    cs:__imp_WppAutoLogTrace
 * 00000001C01527F4: nop     dword ptr [rax+rax+00h]
 * 00000001C01527F9: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01527FE: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0152803: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0152808: add     rsp, 40h
 * 00000001C015280C: pop     r15
 * 00000001C015280E: pop     r14
 * 00000001C0152810: pop     rdi
 * 00000001C0152811: retn
 */
