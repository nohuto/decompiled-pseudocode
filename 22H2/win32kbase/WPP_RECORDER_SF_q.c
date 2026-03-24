/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00487D0
 * Callers:
 *     NtUserReportInertia @ 0x1C0004160 (NtUserReportInertia.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00061C0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     EtwTraceUIPISystemError @ 0x1C0007D70 (EtwTraceUIPISystemError.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0008378 (rimResetPnpRemovePendingStateBits.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00091E0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C003ED88 (xxxCreateThreadInfo.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0045614 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     xxxSetProcessInitState @ 0x1C0048570 (xxxSetProcessInitState.c)
 *     ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00492E0 (-CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RawInputManagerObjectDelete @ 0x1C005287C (RawInputManagerObjectDelete.c)
 *     _lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_ @ 0x1C0053B50 (_lambda_472f4db53ddf5878963a84144a71a26c_--_lambda_invoker_cdecl_.c)
 *     RIMDeviceClassNotify @ 0x1C0053EC0 (RIMDeviceClassNotify.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0054260 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMReadInput @ 0x1C00542C0 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0054610 (RIMUnregisterForInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0056E04 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMAllocateHidDesc @ 0x1C0057F3C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00582E8 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C0058E7C (RIMHidGetCaps.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C007476C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0075DA8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00893D0 (RIMRegisterForInputWithCallbacks.c)
 *     rimDeviceResetApc @ 0x1C00AE760 (rimDeviceResetApc.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00AE82C (RIMDeliverDeviceResetRequest.c)
 *     RIMDoOnPnpNotification @ 0x1C00B3D38 (RIMDoOnPnpNotification.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00B4840 (RIMFindSiblingPointerDeviceForMouse.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7F70 (rimFreeAutoRepeatCompleteFrame.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C00B8AC8 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C01390F0 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C0139390 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0139564 (UserFindBaseWindowHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0156DF4 (RIMIDERemoveInjectionDevice.c)
 *     RIMAddToActiveDevices @ 0x1C015B7FC (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015DDA8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerInputType @ 0x1C015E558 (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C015F42C (RIMRemoveFromActiveDevices.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0161A0C (RIMFindSiblingMouseDevice.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C0161C70 (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162838 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162C3C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016740C (RIMIDECreateHIDDesc.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A5F4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C954 (RIMVirtDeviceClassNotify.c)
 *     rimDispatchCompleteFrame @ 0x1C0174394 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0174C5C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsDeliverInputToObserver @ 0x1C017E118 (rimObsDeliverInputToObserver.c)
 *     rimObsObserveNextInput @ 0x1C017E7BC (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x1C017E928 (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017EBD0 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C017F4DC (rimObsUpdateInputObserverRegistration.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C0181F20 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0193F04 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AE48 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019F9D8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01A46B0 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01ACF80 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AD9E8 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     InitCreateUserCrit @ 0x1C0299C78 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00487D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00487D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00487D0: mov     [rsp+arg_0], rbx
 * 00000001C00487D5: mov     [rsp+arg_8], rbp
 * 00000001C00487DA: mov     [rsp+arg_10], rsi
 * 00000001C00487DF: push    rdi
 * 00000001C00487E0: push    r14
 * 00000001C00487E2: push    r15
 * 00000001C00487E4: sub     rsp, 40h
 * 00000001C00487E8: mov     r14d, r8d
 * 00000001C00487EB: mov     r15, rcx
 * 00000001C00487EE: mov     edi, r8d
 * 00000001C00487F1: shr     rdi, 10h
 * 00000001C00487F5: movzx   esi, dl
 * 00000001C00487F8: lea     ebx, [r14-1]
 * 00000001C00487FC: movzx   ebp, r9w
 * 00000001C0048800: mov     r10d, ebx
 * 00000001C0048803: and     ebx, 1Fh
 * 00000001C0048806: shr     r10, 5
 * 00000001C004880A: lea     rax, [rdi+rdi*4]
 * 00000001C004880E: and     r10d, 7FFh
 * 00000001C0048815: mov     edx, ebx
 * 00000001C0048817: mov     ebx, 8
 * 00000001C004881C: lea     r11, [r10+rax*4]
 * 00000001C0048820: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0048827: mov     eax, [r10+r11*4+2Ch]
 * 00000001C004882C: bt      eax, edx
 * 00000001C004882F: jb      loc_1C00EA558
 * 00000001C0048835: and     [rsp+58h+var_20], 0
 * 00000001C004883B: lea     rax, [rsp+58h+arg_28]
 * 00000001C0048843: mov     r9, [rsp+58h+arg_20]
 * 00000001C004884B: mov     r8d, r14d
 * 00000001C004884E: mov     [rsp+58h+var_28], rbx
 * 00000001C0048853: mov     edx, esi
 * 00000001C0048855: mov     [rsp+58h+var_30], rax
 * 00000001C004885A: mov     rcx, r15
 * 00000001C004885D: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0048862: call    cs:__imp_WppAutoLogTrace
 * 00000001C0048869: nop     dword ptr [rax+rax+00h]
 * 00000001C004886E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0048873: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0048878: mov     rsi, [rsp+58h+arg_10]
 * 00000001C004887D: add     rsp, 40h
 * 00000001C0048881: pop     r15
 * 00000001C0048883: pop     r14
 * 00000001C0048885: pop     rdi
 * 00000001C0048886: retn
 * 00000001C00EA558: lea     rcx, [rdi+rdi*4]
 * 00000001C00EA55C: add     rcx, rcx
 * 00000001C00EA55F: cmp     [r10+rcx*8+29h], sil
 * 00000001C00EA564: jb      loc_1C0048835
 * 00000001C00EA56A: and     [rsp+58h+var_28], 0
 * 00000001C00EA570: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00EA578: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EA57F: mov     r9d, ebp
 * 00000001C00EA582: mov     r8, [rsp+58h+arg_20]
 * 00000001C00EA58A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00EA58F: mov     [rsp+58h+var_30], rbx
 * 00000001C00EA594: mov     [rsp+58h+var_38], rdx
 * 00000001C00EA599: mov     edx, 2Bh ; '+'
 * 00000001C00EA59E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EA5A4: nop
 * 00000001C00EA5A5: jmp     loc_1C0048835
 */
