/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C0008140
 * Callers:
 *     HandleDeferredInput @ 0x1C0001830 (HandleDeferredInput.c)
 *     rimDereferenceDev @ 0x1C0006708 (rimDereferenceDev.c)
 *     EtwTraceUIPIInputError @ 0x1C0007E30 (EtwTraceUIPIInputError.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0056C40 (rimFindPausedDeviceAndCompleteRead.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C01329F0 (NtUserMapPointsByVisualIdentifier.c)
 *     UserAddBaseWindowHandle @ 0x1C01390F0 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0139564 (UserFindBaseWindowHandle.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C016C4CC (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C64C (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C016D008 (RIMWaitForPriorPnpWorkToComplete.c)
 *     rimInputApc @ 0x1C01745D0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0175060 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C0175E58 (rimSignalReadComplete.c)
 *     rimObsAddInputObserver @ 0x1C017D7DC (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1C017E118 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C0008140
 * Reason: Hex-Rays returned no pseudocode for 0x1C0008140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0008140: mov     [rsp+arg_0], rbx
 * 00000001C0008145: mov     [rsp+arg_8], rbp
 * 00000001C000814A: mov     [rsp+arg_10], rsi
 * 00000001C000814F: push    rdi
 * 00000001C0008150: push    r14
 * 00000001C0008152: push    r15
 * 00000001C0008154: sub     rsp, 50h
 * 00000001C0008158: mov     r14d, r8d
 * 00000001C000815B: mov     r15, rcx
 * 00000001C000815E: mov     edi, r8d
 * 00000001C0008161: shr     rdi, 10h
 * 00000001C0008165: movzx   esi, dl
 * 00000001C0008168: lea     ebx, [r14-1]
 * 00000001C000816C: movzx   ebp, r9w
 * 00000001C0008170: mov     r10d, ebx
 * 00000001C0008173: and     ebx, 1Fh
 * 00000001C0008176: shr     r10, 5
 * 00000001C000817A: lea     rax, [rdi+rdi*4]
 * 00000001C000817E: and     r10d, 7FFh
 * 00000001C0008185: mov     edx, ebx
 * 00000001C0008187: mov     ebx, 8
 * 00000001C000818C: lea     r11, [r10+rax*4]
 * 00000001C0008190: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0008197: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000819C: bt      eax, edx
 * 00000001C000819F: jb      loc_1C00D67DC
 * 00000001C00081A5: and     [rsp+68h+var_20], 0
 * 00000001C00081AB: lea     rax, [rsp+68h+arg_30]
 * 00000001C00081B3: mov     r9, [rsp+68h+arg_20]
 * 00000001C00081BB: mov     r8d, r14d
 * 00000001C00081BE: mov     [rsp+68h+var_28], rbx
 * 00000001C00081C3: mov     edx, esi
 * 00000001C00081C5: mov     [rsp+68h+var_30], rax
 * 00000001C00081CA: mov     rcx, r15
 * 00000001C00081CD: lea     rax, [rsp+68h+arg_28]
 * 00000001C00081D5: mov     [rsp+68h+var_38], rbx
 * 00000001C00081DA: mov     [rsp+68h+var_40], rax
 * 00000001C00081DF: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00081E4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00081EB: nop     dword ptr [rax+rax+00h]
 * 00000001C00081F0: lea     r11, [rsp+68h+var_18]
 * 00000001C00081F5: mov     rbx, [r11+20h]
 * 00000001C00081F9: mov     rbp, [r11+28h]
 * 00000001C00081FD: mov     rsi, [r11+30h]
 * 00000001C0008201: mov     rsp, r11
 * 00000001C0008204: pop     r15
 * 00000001C0008206: pop     r14
 * 00000001C0008208: pop     rdi
 * 00000001C0008209: retn
 * 00000001C00D67DC: lea     rcx, [rdi+rdi*4]
 * 00000001C00D67E0: add     rcx, rcx
 * 00000001C00D67E3: cmp     [r10+rcx*8+29h], sil
 * 00000001C00D67E8: jb      loc_1C00081A5
 * 00000001C00D67EE: and     [rsp+68h+var_28], 0
 * 00000001C00D67F4: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00D67FC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D6803: mov     r9d, ebp
 * 00000001C00D6806: mov     r8, [rsp+68h+arg_20]
 * 00000001C00D680E: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00D6813: mov     [rsp+68h+var_30], rbx
 * 00000001C00D6818: mov     [rsp+68h+var_38], rdx
 * 00000001C00D681D: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00D6825: mov     [rsp+68h+var_40], rbx
 * 00000001C00D682A: mov     [rsp+68h+var_48], rdx
 * 00000001C00D682F: mov     edx, 2Bh ; '+'
 * 00000001C00D6834: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D683A: nop
 * 00000001C00D683B: jmp     loc_1C00081A5
 */
