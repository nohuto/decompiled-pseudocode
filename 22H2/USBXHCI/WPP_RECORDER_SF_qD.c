/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C0014518
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 *     ControllerPreInterruptsDisableAcpiCallout @ 0x1C000A6F4 (ControllerPreInterruptsDisableAcpiCallout.c)
 *     XilCoreDeviceSlot_ClearDeviceContext @ 0x1C000A9B0 (XilCoreDeviceSlot_ClearDeviceContext.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000AA1C (UsbDevice_SetDeviceDisabled.c)
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000B42C (DeviceSlot_D0EntryCleanupState.c)
 *     Command_D0Entry @ 0x1C000F5D8 (Command_D0Entry.c)
 *     DeviceSlot_D0Entry @ 0x1C0014754 (DeviceSlot_D0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C00147B0 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Device_QueryCapabilities @ 0x1C00150F4 (Device_QueryCapabilities.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E790 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C00308D0 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_EvtDeviceFileClose @ 0x1C0031590 (Controller_EvtDeviceFileClose.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0034690 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     Register_PrepareHardware @ 0x1C006CD24 (Register_PrepareHardware.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070DA4 (Interrupter_CreateInterrupter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qd @ 0x1C0014518
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014518
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014518: mov     [rsp+arg_0], rbx
 * 00000001C001451D: mov     [rsp+arg_8], rbp
 * 00000001C0014522: mov     [rsp+arg_10], rsi
 * 00000001C0014527: push    rdi
 * 00000001C0014528: push    r14
 * 00000001C001452A: push    r15
 * 00000001C001452C: sub     rsp, 50h
 * 00000001C0014530: mov     r14d, r8d
 * 00000001C0014533: mov     r15, rcx
 * 00000001C0014536: mov     edi, r8d
 * 00000001C0014539: shr     rdi, 10h
 * 00000001C001453D: movzx   esi, dl
 * 00000001C0014540: lea     ebx, [r14-1]
 * 00000001C0014544: movzx   ebp, r9w
 * 00000001C0014548: mov     r10d, ebx
 * 00000001C001454B: and     ebx, 1Fh
 * 00000001C001454E: shr     r10, 5
 * 00000001C0014552: lea     rax, [rdi+rdi*4]
 * 00000001C0014556: and     r10d, 7FFh
 * 00000001C001455D: mov     edx, ebx
 * 00000001C001455F: mov     ebx, 4
 * 00000001C0014564: lea     r11, [r10+rax*4]
 * 00000001C0014568: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001456F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0014574: bt      eax, edx
 * 00000001C0014577: jb      loc_1C002B332
 * 00000001C001457D: and     [rsp+68h+var_20], 0
 * 00000001C0014583: lea     rax, [rsp+68h+arg_30]
 * 00000001C001458B: mov     r9, [rsp+68h+arg_20]
 * 00000001C0014593: mov     r8d, r14d
 * 00000001C0014596: mov     [rsp+68h+var_28], rbx
 * 00000001C001459B: mov     edx, esi
 * 00000001C001459D: mov     [rsp+68h+var_30], rax
 * 00000001C00145A2: mov     rcx, r15
 * 00000001C00145A5: lea     rax, [rsp+68h+arg_28]
 * 00000001C00145AD: mov     [rsp+68h+var_38], 8
 * 00000001C00145B6: mov     [rsp+68h+var_40], rax
 * 00000001C00145BB: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00145C0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00145C7: nop     dword ptr [rax+rax+00h]
 * 00000001C00145CC: lea     r11, [rsp+68h+var_18]
 * 00000001C00145D1: mov     rbx, [r11+20h]
 * 00000001C00145D5: mov     rbp, [r11+28h]
 * 00000001C00145D9: mov     rsi, [r11+30h]
 * 00000001C00145DD: mov     rsp, r11
 * 00000001C00145E0: pop     r15
 * 00000001C00145E2: pop     r14
 * 00000001C00145E4: pop     rdi
 * 00000001C00145E5: retn
 * 00000001C002B332: lea     rcx, [rdi+rdi*4]
 * 00000001C002B336: add     rcx, rcx
 * 00000001C002B339: cmp     [r10+rcx*8+29h], sil
 * 00000001C002B33E: jb      loc_1C001457D
 * 00000001C002B344: and     [rsp+68h+var_28], 0
 * 00000001C002B34A: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002B352: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C002B359: mov     r9d, ebp
 * 00000001C002B35C: mov     r8, [rsp+68h+arg_20]
 * 00000001C002B364: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002B369: mov     [rsp+68h+var_30], rbx
 * 00000001C002B36E: mov     [rsp+68h+var_38], rdx
 * 00000001C002B373: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002B37B: mov     [rsp+68h+var_40], 8
 * 00000001C002B384: mov     [rsp+68h+var_48], rdx
 * 00000001C002B389: mov     edx, 2Bh ; '+'
 * 00000001C002B38E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002B394: nop
 * 00000001C002B395: jmp     loc_1C001457D
 */
