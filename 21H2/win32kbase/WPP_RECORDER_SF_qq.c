/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C004B460
 * Callers:
 *     HandleDeferredInput @ 0x1C0001830 (HandleDeferredInput.c)
 *     EtwTraceUIPIInputError @ 0x1C004B150 (EtwTraceUIPIInputError.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0055C40 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimDereferenceDev @ 0x1C00A6610 (rimDereferenceDev.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0132720 (NtUserMapPointsByVisualIdentifier.c)
 *     UserAddBaseWindowHandle @ 0x1C0138E20 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0139294 (UserFindBaseWindowHandle.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C016C59C (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C71C (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C016D0D8 (RIMWaitForPriorPnpWorkToComplete.c)
 *     rimInputApc @ 0x1C01746A0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175130 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0175F28 (rimSignalReadComplete.c)
 *     rimObsAddInputObserver @ 0x1C017D8AC (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1C017E1E8 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C004B460
 * Reason: Hex-Rays returned no pseudocode for 0x1C004B460
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004B460: mov     [rsp+arg_0], rbx
 * 00000001C004B465: mov     [rsp+arg_8], rbp
 * 00000001C004B46A: mov     [rsp+arg_10], rsi
 * 00000001C004B46F: push    rdi
 * 00000001C004B470: push    r14
 * 00000001C004B472: push    r15
 * 00000001C004B474: sub     rsp, 50h
 * 00000001C004B478: mov     r14d, r8d
 * 00000001C004B47B: mov     r15, rcx
 * 00000001C004B47E: mov     edi, r8d
 * 00000001C004B481: shr     rdi, 10h
 * 00000001C004B485: movzx   esi, dl
 * 00000001C004B488: lea     ebx, [r14-1]
 * 00000001C004B48C: movzx   ebp, r9w
 * 00000001C004B490: mov     r10d, ebx
 * 00000001C004B493: and     ebx, 1Fh
 * 00000001C004B496: shr     r10, 5
 * 00000001C004B49A: lea     rax, [rdi+rdi*4]
 * 00000001C004B49E: and     r10d, 7FFh
 * 00000001C004B4A5: mov     edx, ebx
 * 00000001C004B4A7: mov     ebx, 8
 * 00000001C004B4AC: lea     r11, [r10+rax*4]
 * 00000001C004B4B0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C004B4B7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C004B4BC: bt      eax, edx
 * 00000001C004B4BF: jb      loc_1C00EB4D2
 * 00000001C004B4C5: and     [rsp+68h+var_20], 0
 * 00000001C004B4CB: lea     rax, [rsp+68h+arg_30]
 * 00000001C004B4D3: mov     r9, [rsp+68h+arg_20]
 * 00000001C004B4DB: mov     r8d, r14d
 * 00000001C004B4DE: mov     [rsp+68h+var_28], rbx
 * 00000001C004B4E3: mov     edx, esi
 * 00000001C004B4E5: mov     [rsp+68h+var_30], rax
 * 00000001C004B4EA: mov     rcx, r15
 * 00000001C004B4ED: lea     rax, [rsp+68h+arg_28]
 * 00000001C004B4F5: mov     [rsp+68h+var_38], rbx
 * 00000001C004B4FA: mov     [rsp+68h+var_40], rax
 * 00000001C004B4FF: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C004B504: call    cs:__imp_WppAutoLogTrace
 * 00000001C004B50B: nop     dword ptr [rax+rax+00h]
 * 00000001C004B510: lea     r11, [rsp+68h+var_18]
 * 00000001C004B515: mov     rbx, [r11+20h]
 * 00000001C004B519: mov     rbp, [r11+28h]
 * 00000001C004B51D: mov     rsi, [r11+30h]
 * 00000001C004B521: mov     rsp, r11
 * 00000001C004B524: pop     r15
 * 00000001C004B526: pop     r14
 * 00000001C004B528: pop     rdi
 * 00000001C004B529: retn
 * 00000001C00EB4D2: lea     rcx, [rdi+rdi*4]
 * 00000001C00EB4D6: add     rcx, rcx
 * 00000001C00EB4D9: cmp     [r10+rcx*8+29h], sil
 * 00000001C00EB4DE: jb      loc_1C004B4C5
 * 00000001C00EB4E4: and     [rsp+68h+var_28], 0
 * 00000001C00EB4EA: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00EB4F2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EB4F9: mov     r9d, ebp
 * 00000001C00EB4FC: mov     r8, [rsp+68h+arg_20]
 * 00000001C00EB504: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00EB509: mov     [rsp+68h+var_30], rbx
 * 00000001C00EB50E: mov     [rsp+68h+var_38], rdx
 * 00000001C00EB513: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00EB51B: mov     [rsp+68h+var_40], rbx
 * 00000001C00EB520: mov     [rsp+68h+var_48], rdx
 * 00000001C00EB525: mov     edx, 2Bh ; '+'
 * 00000001C00EB52A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EB530: nop
 * 00000001C00EB531: jmp     loc_1C004B4C5
 */
