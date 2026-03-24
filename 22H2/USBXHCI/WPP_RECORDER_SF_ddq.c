/*
 * XREFs of WPP_RECORDER_SF_ddq @ 0x1C0009428
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 *     Endpoint_Enable @ 0x1C00083B0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointPurge @ 0x1C0010480 (Endpoint_UcxEvtEndpointPurge.c)
 *     Endpoint_WdfEvtPurgeComplete @ 0x1C0010560 (Endpoint_WdfEvtPurgeComplete.c)
 *     Endpoint_UcxEvtEndpointAbort @ 0x1C00197C0 (Endpoint_UcxEvtEndpointAbort.c)
 *     Endpoint_WdfEvtAbortComplete @ 0x1C0019910 (Endpoint_WdfEvtAbortComplete.c)
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C0039C00 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 *     Endpoint_SendClearStallTransfer @ 0x1C0039D7C (Endpoint_SendClearStallTransfer.c)
 *     Endpoint_Create @ 0x1C006A5F0 (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddq @ 0x1C0009428
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009428
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009428: mov     [rsp+arg_0], rbx
 * 00000001C000942D: mov     [rsp+arg_8], rbp
 * 00000001C0009432: mov     [rsp+arg_10], rsi
 * 00000001C0009437: push    rdi
 * 00000001C0009438: push    r14
 * 00000001C000943A: push    r15
 * 00000001C000943C: sub     rsp, 60h
 * 00000001C0009440: mov     r14d, r8d
 * 00000001C0009443: mov     r15, rcx
 * 00000001C0009446: mov     edi, r8d
 * 00000001C0009449: shr     rdi, 10h
 * 00000001C000944D: movzx   esi, dl
 * 00000001C0009450: lea     ebx, [r14-1]
 * 00000001C0009454: movzx   ebp, r9w
 * 00000001C0009458: mov     r10d, ebx
 * 00000001C000945B: and     ebx, 1Fh
 * 00000001C000945E: shr     r10, 5
 * 00000001C0009462: lea     rax, [rdi+rdi*4]
 * 00000001C0009466: and     r10d, 7FFh
 * 00000001C000946D: mov     edx, ebx
 * 00000001C000946F: mov     ebx, 4
 * 00000001C0009474: lea     r11, [r10+rax*4]
 * 00000001C0009478: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000947F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0009484: bt      eax, edx
 * 00000001C0009487: jb      loc_1C0024D32
 * 00000001C000948D: and     [rsp+78h+var_20], 0
 * 00000001C0009493: lea     rax, [rsp+78h+arg_38]
 * 00000001C000949B: mov     r9, [rsp+78h+arg_20]
 * 00000001C00094A3: mov     r8d, r14d
 * 00000001C00094A6: mov     [rsp+78h+var_28], 8
 * 00000001C00094AF: mov     edx, esi
 * 00000001C00094B1: mov     [rsp+78h+var_30], rax
 * 00000001C00094B6: mov     rcx, r15
 * 00000001C00094B9: mov     [rsp+78h+var_38], rbx
 * 00000001C00094BE: lea     rax, [rsp+78h+arg_30]
 * 00000001C00094C6: mov     [rsp+78h+var_40], rax
 * 00000001C00094CB: lea     rax, [rsp+78h+arg_28]
 * 00000001C00094D3: mov     [rsp+78h+var_48], rbx
 * 00000001C00094D8: mov     [rsp+78h+var_50], rax
 * 00000001C00094DD: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00094E2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00094E9: nop     dword ptr [rax+rax+00h]
 * 00000001C00094EE: lea     r11, [rsp+78h+var_18]
 * 00000001C00094F3: mov     rbx, [r11+20h]
 * 00000001C00094F7: mov     rbp, [r11+28h]
 * 00000001C00094FB: mov     rsi, [r11+30h]
 * 00000001C00094FF: mov     rsp, r11
 * 00000001C0009502: pop     r15
 * 00000001C0009504: pop     r14
 * 00000001C0009506: pop     rdi
 * 00000001C0009507: retn
 * 00000001C0024D32: lea     rcx, [rdi+rdi*4]
 * 00000001C0024D36: add     rcx, rcx
 * 00000001C0024D39: cmp     [r10+rcx*8+29h], sil
 * 00000001C0024D3E: jb      loc_1C000948D
 * 00000001C0024D44: and     [rsp+78h+var_28], 0
 * 00000001C0024D4A: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0024D52: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0024D59: mov     r9d, ebp
 * 00000001C0024D5C: mov     r8, [rsp+78h+arg_20]
 * 00000001C0024D64: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0024D69: mov     [rsp+78h+var_30], 8
 * 00000001C0024D72: mov     [rsp+78h+var_38], rdx
 * 00000001C0024D77: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0024D7F: mov     [rsp+78h+var_40], rbx
 * 00000001C0024D84: mov     [rsp+78h+var_48], rdx
 * 00000001C0024D89: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0024D91: mov     [rsp+78h+var_50], rbx
 * 00000001C0024D96: mov     [rsp+78h+var_58], rdx
 * 00000001C0024D9B: mov     edx, 2Bh ; '+'
 * 00000001C0024DA0: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024DA6: nop
 * 00000001C0024DA7: jmp     loc_1C000948D
 */
