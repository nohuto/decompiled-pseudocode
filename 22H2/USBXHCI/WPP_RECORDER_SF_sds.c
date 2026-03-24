/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x1C0035E5C
 * Callers:
 *     Isoch_WdfEvtIoQueueReadyNotification @ 0x1C0002AE0 (Isoch_WdfEvtIoQueueReadyNotification.c)
 *     Isoch_MapStage @ 0x1C0003780 (Isoch_MapStage.c)
 *     Control_Transfer_Map @ 0x1C00040CC (Control_Transfer_Map.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0005C8C (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0007714 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_CompleteConfigureEndpointRequest @ 0x1C000793C (UsbDevice_CompleteConfigureEndpointRequest.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0007B20 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     Debug_FreAssertMsg @ 0x1C0007C5C (Debug_FreAssertMsg.c)
 *     XilEndpoint_Create @ 0x1C00095C8 (XilEndpoint_Create.c)
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009E10 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x1C000CBA0 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Bulk_MapStage @ 0x1C000D4EC (Bulk_MapStage.c)
 *     Register_RestoreRyzenFeatureBitsPostReset @ 0x1C000F3B8 (Register_RestoreRyzenFeatureBitsPostReset.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C000F634 (XilDeviceSlot_SetDeviceContext.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C000F6C4 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C000F894 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     Register_ControllerReset @ 0x1C0010D88 (Register_ControllerReset.c)
 *     Wmi_CreateControllerCapabilities @ 0x1C00110F8 (Wmi_CreateControllerCapabilities.c)
 *     Controller_Start @ 0x1C0011474 (Controller_Start.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0011710 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011EE0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00120A0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00128A0 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0013360 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0013DD0 (RootHub_AcquireReadModifyWriteLock.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x1C001536C (Controller_AllocateIrqlTrackingArray.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1C0015BCC (XilDeviceSlot_PrepareHardware.c)
 *     XilUsbDevice_Create @ 0x1C001646C (XilUsbDevice_Create.c)
 *     RootHub_WdfEvtTimer20PortResumeComplete @ 0x1C001766C (RootHub_WdfEvtTimer20PortResumeComplete.c)
 *     XilDeviceSlot_Create @ 0x1C00179B4 (XilDeviceSlot_Create.c)
 *     XilCommand_Create @ 0x1C0017CD8 (XilCommand_Create.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0018F0C (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002E790 (Command_WdfEvtWatchdogTimerFunction.c)
 *     XilCommand_AllocateSecureResources @ 0x1C002F720 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C002F8B4 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C002FA68 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C002FBC8 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C002FD28 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C002FE88 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C003017C (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C00302E0 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     Controller_D0EntryRestoreState @ 0x1C0030AF4 (Controller_D0EntryRestoreState.c)
 *     Controller_D0ExitSaveState @ 0x1C0030E1C (Controller_D0ExitSaveState.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0031164 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_WdfEvtDeviceArmWakeFromS0 @ 0x1C0034A20 (Controller_WdfEvtDeviceArmWakeFromS0.c)
 *     Controller_WdfEvtDeviceDisarmWakeFromS0 @ 0x1C0034C10 (Controller_WdfEvtDeviceDisarmWakeFromS0.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C00361E4 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C003635C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C00364E4 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0036668 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C00367D4 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0036980 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0036AE8 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036C74 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0036DF8 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C00372EC (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_GetRemoteHandle @ 0x1C0037620 (XilEndpoint_GetRemoteHandle.c)
 *     Endpoint_UcxEvtEndpointReset @ 0x1C003A5C0 (Endpoint_UcxEvtEndpointReset.c)
 *     RootHub_UcxEvtClearHubFeature @ 0x1C003D980 (RootHub_UcxEvtClearHubFeature.c)
 *     RootHub_UcxEvtGetPortErrorCount @ 0x1C003DC60 (RootHub_UcxEvtGetPortErrorCount.c)
 *     TR_AcquireSecureSegments @ 0x1C003E894 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C003EDAC (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003F2DC (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C003F418 (TR_InitializeTransferSegment.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C00454A8 (XilUsbDevice_CreateSecureObject.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x1C004631C (UsbDevice_GetEndpointOffloadInformation.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x1C0046610 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x1C0046808 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x1C0046908 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnhandledEventReceivedState @ 0x1C0046A54 (UsbDevice_HandleUnhandledEventReceivedState.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x1C0047110 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x1C0047270 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sds @ 0x1C0035E5C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0035E5C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0035E5C: mov     [rsp+arg_0], rbx
 * 00000001C0035E61: mov     [rsp+arg_8], rbp
 * 00000001C0035E66: mov     [rsp+arg_10], rsi
 * 00000001C0035E6B: push    rdi
 * 00000001C0035E6C: push    r13
 * 00000001C0035E6E: push    r15
 * 00000001C0035E70: sub     rsp, 60h
 * 00000001C0035E74: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0035E7B: lea     r13, aNull; "NULL"
 * 00000001C0035E82: mov     rdi, [rsp+78h+arg_38]
 * 00000001C0035E8A: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0035E8E: mov     rsi, [rsp+78h+arg_28]
 * 00000001C0035E96: mov     rbp, rcx
 * 00000001C0035E99: mov     eax, [rdx+2Ch]
 * 00000001C0035E9C: lea     r15d, [rbx+6]
 * 00000001C0035EA0: lea     r10d, [rbx+0Bh]
 * 00000001C0035EA4: test    al, 2
 * 00000001C0035EA6: jz      loc_1C0035F5B
 * 00000001C0035EAC: cmp     byte ptr [rdx+29h], 2
 * 00000001C0035EB0: jb      loc_1C0035F5B
 * 00000001C0035EB6: test    rdi, rdi
 * 00000001C0035EB9: jz      short loc_1C0035ECC
 * 00000001C0035EBB: mov     rdx, rbx
 * 00000001C0035EBE: inc     rdx
 * 00000001C0035EC1: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0035EC5: jnz     short loc_1C0035EBE
 * 00000001C0035EC7: inc     rdx
 * 00000001C0035ECA: jmp     short loc_1C0035ECF
 * 00000001C0035ECC: mov     rdx, r15
 * 00000001C0035ECF: test    rdi, rdi
 * 00000001C0035ED2: mov     r9, rdi
 * 00000001C0035ED5: cmovz   r9, r13
 * 00000001C0035ED9: test    rsi, rsi
 * 00000001C0035EDC: jz      short loc_1C0035EF0
 * 00000001C0035EDE: mov     r8, rbx
 * 00000001C0035EE1: inc     r8
 * 00000001C0035EE4: cmp     byte ptr [rsi+r8], 0
 * 00000001C0035EE9: jnz     short loc_1C0035EE1
 * 00000001C0035EEB: inc     r8
 * 00000001C0035EEE: jmp     short loc_1C0035EF3
 * 00000001C0035EF0: mov     r8, r15
 * 00000001C0035EF3: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0035EFA: test    rsi, rsi
 * 00000001C0035EFD: mov     rcx, rsi
 * 00000001C0035F00: cmovz   rcx, r13
 * 00000001C0035F04: and     [rsp+78h+var_28], 0
 * 00000001C0035F0A: mov     [rsp+78h+var_30], rdx
 * 00000001C0035F0F: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0035F17: mov     [rsp+78h+var_38], r9
 * 00000001C0035F1C: mov     [rsp+78h+var_40], 4
 * 00000001C0035F25: mov     [rsp+78h+var_48], rdx
 * 00000001C0035F2A: mov     edx, 2Bh ; '+'
 * 00000001C0035F2F: mov     [rsp+78h+var_50], r8
 * 00000001C0035F34: lea     r8, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C0035F3B: mov     [rsp+78h+var_58], rcx
 * 00000001C0035F40: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0035F47: movzx   r9d, r10w
 * 00000001C0035F4B: mov     rcx, [rcx+18h]
 * 00000001C0035F4F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035F55: mov     r10d, 0Ah
 * 00000001C0035F5B: test    rdi, rdi
 * 00000001C0035F5E: jz      short loc_1C0035F71
 * 00000001C0035F60: mov     rax, rbx
 * 00000001C0035F63: inc     rax
 * 00000001C0035F66: cmp     byte ptr [rdi+rax], 0
 * 00000001C0035F6A: jnz     short loc_1C0035F63
 * 00000001C0035F6C: inc     rax
 * 00000001C0035F6F: jmp     short loc_1C0035F74
 * 00000001C0035F71: mov     rax, r15
 * 00000001C0035F74: test    rdi, rdi
 * 00000001C0035F77: cmovz   rdi, r13
 * 00000001C0035F7B: test    rsi, rsi
 * 00000001C0035F7E: jz      short loc_1C0035F8E
 * 00000001C0035F80: inc     rbx
 * 00000001C0035F83: cmp     byte ptr [rsi+rbx], 0
 * 00000001C0035F87: jnz     short loc_1C0035F80
 * 00000001C0035F89: inc     rbx
 * 00000001C0035F8C: jmp     short loc_1C0035F91
 * 00000001C0035F8E: mov     rbx, r15
 * 00000001C0035F91: test    rsi, rsi
 * 00000001C0035F94: lea     r9, WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids
 * 00000001C0035F9B: mov     edx, 2
 * 00000001C0035FA0: mov     rcx, rbp
 * 00000001C0035FA3: cmovz   rsi, r13
 * 00000001C0035FA7: mov     r8d, edx
 * 00000001C0035FAA: and     [rsp+78h+var_20], 0
 * 00000001C0035FB0: mov     [rsp+78h+var_28], rax
 * 00000001C0035FB5: lea     rax, [rsp+78h+arg_30]
 * 00000001C0035FBD: mov     [rsp+78h+var_30], rdi
 * 00000001C0035FC2: mov     [rsp+78h+var_38], 4
 * 00000001C0035FCB: mov     [rsp+78h+var_40], rax
 * 00000001C0035FD0: mov     [rsp+78h+var_48], rbx
 * 00000001C0035FD5: mov     [rsp+78h+var_50], rsi
 * 00000001C0035FDA: mov     word ptr [rsp+78h+var_58], r10w
 * 00000001C0035FE0: call    cs:__imp_WppAutoLogTrace
 * 00000001C0035FE7: nop     dword ptr [rax+rax+00h]
 * 00000001C0035FEC: lea     r11, [rsp+78h+var_18]
 * 00000001C0035FF1: mov     rbx, [r11+20h]
 * 00000001C0035FF5: mov     rbp, [r11+28h]
 * 00000001C0035FF9: mov     rsi, [r11+30h]
 * 00000001C0035FFD: mov     rsp, r11
 * 00000001C0036000: pop     r15
 * 00000001C0036002: pop     r13
 * 00000001C0036004: pop     rdi
 * 00000001C0036005: retn
 */
