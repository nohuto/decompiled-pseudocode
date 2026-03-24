/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0047360
 * Callers:
 *     NtUserReportInertia @ 0x1C0004160 (NtUserReportInertia.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0007D60 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C003D918 (xxxCreateThreadInfo.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C00441A4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     xxxSetProcessInitState @ 0x1C0047100 (xxxSetProcessInitState.c)
 *     ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0047C80 (-CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     EtwTraceUIPISystemError @ 0x1C004B090 (EtwTraceUIPISystemError.c)
 *     RawInputManagerObjectDelete @ 0x1C005187C (RawInputManagerObjectDelete.c)
 *     _lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_ @ 0x1C0052B50 (_lambda_472f4db53ddf5878963a84144a71a26c_--_lambda_invoker_cdecl_.c)
 *     RIMDeviceClassNotify @ 0x1C0052EC0 (RIMDeviceClassNotify.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0053260 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMReadInput @ 0x1C00532C0 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0053610 (RIMUnregisterForInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0055E04 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMAllocateHidDesc @ 0x1C0056F3C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00572E8 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C0057E7C (RIMHidGetCaps.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0066820 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C007308C (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0074738 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0088530 (RIMRegisterForInputWithCallbacks.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00A67A8 (rimResetPnpRemovePendingStateBits.c)
 *     rimDeviceResetApc @ 0x1C00AE420 (rimDeviceResetApc.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00AE4EC (RIMDeliverDeviceResetRequest.c)
 *     RIMDoOnPnpNotification @ 0x1C00B39F8 (RIMDoOnPnpNotification.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00B4500 (RIMFindSiblingPointerDeviceForMouse.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7C50 (rimFreeAutoRepeatCompleteFrame.c)
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z @ 0x1C00B87C8 (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH111@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C0138E20 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C01390C0 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C0139294 (UserFindBaseWindowHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0156EC4 (RIMIDERemoveInjectionDevice.c)
 *     RIMAddToActiveDevices @ 0x1C015B8CC (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015DE78 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerInputType @ 0x1C015E628 (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C015F4FC (RIMRemoveFromActiveDevices.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0161ADC (RIMFindSiblingMouseDevice.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C0161D40 (RIMMarkSiblingMouseDevice.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162908 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D0C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C01674DC (RIMIDECreateHIDDesc.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A6C4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016CA24 (RIMVirtDeviceClassNotify.c)
 *     rimDispatchCompleteFrame @ 0x1C0174464 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0174D2C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimObsDeliverInputToObserver @ 0x1C017E1E8 (rimObsDeliverInputToObserver.c)
 *     rimObsObserveNextInput @ 0x1C017E88C (rimObsObserveNextInput.c)
 *     rimObsPopInputMessage @ 0x1C017E9F8 (rimObsPopInputMessage.c)
 *     rimObsPushInputMessage @ 0x1C017ECA0 (rimObsPushInputMessage.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C017F5AC (rimObsUpdateInputObserverRegistration.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C0181FF0 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0193FD4 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019AF18 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019FAA8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01A4780 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C01AD050 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01ADAB8 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     InitCreateUserCrit @ 0x1C029AC78 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0047360
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047360
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047360: mov     [rsp+arg_0], rbx
 * 00000001C0047365: mov     [rsp+arg_8], rbp
 * 00000001C004736A: mov     [rsp+arg_10], rsi
 * 00000001C004736F: push    rdi
 * 00000001C0047370: push    r14
 * 00000001C0047372: push    r15
 * 00000001C0047374: sub     rsp, 40h
 * 00000001C0047378: mov     r14d, r8d
 * 00000001C004737B: mov     r15, rcx
 * 00000001C004737E: mov     edi, r8d
 * 00000001C0047381: shr     rdi, 10h
 * 00000001C0047385: movzx   esi, dl
 * 00000001C0047388: lea     ebx, [r14-1]
 * 00000001C004738C: movzx   ebp, r9w
 * 00000001C0047390: mov     r10d, ebx
 * 00000001C0047393: and     ebx, 1Fh
 * 00000001C0047396: shr     r10, 5
 * 00000001C004739A: lea     rax, [rdi+rdi*4]
 * 00000001C004739E: and     r10d, 7FFh
 * 00000001C00473A5: mov     edx, ebx
 * 00000001C00473A7: mov     ebx, 8
 * 00000001C00473AC: lea     r11, [r10+rax*4]
 * 00000001C00473B0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00473B7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00473BC: bt      eax, edx
 * 00000001C00473BF: jb      loc_1C00E9BE8
 * 00000001C00473C5: and     [rsp+58h+var_20], 0
 * 00000001C00473CB: lea     rax, [rsp+58h+arg_28]
 * 00000001C00473D3: mov     r9, [rsp+58h+arg_20]
 * 00000001C00473DB: mov     r8d, r14d
 * 00000001C00473DE: mov     [rsp+58h+var_28], rbx
 * 00000001C00473E3: mov     edx, esi
 * 00000001C00473E5: mov     [rsp+58h+var_30], rax
 * 00000001C00473EA: mov     rcx, r15
 * 00000001C00473ED: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00473F2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00473F9: nop     dword ptr [rax+rax+00h]
 * 00000001C00473FE: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0047403: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0047408: mov     rsi, [rsp+58h+arg_10]
 * 00000001C004740D: add     rsp, 40h
 * 00000001C0047411: pop     r15
 * 00000001C0047413: pop     r14
 * 00000001C0047415: pop     rdi
 * 00000001C0047416: retn
 * 00000001C00E9BE8: lea     rcx, [rdi+rdi*4]
 * 00000001C00E9BEC: add     rcx, rcx
 * 00000001C00E9BEF: cmp     [r10+rcx*8+29h], sil
 * 00000001C00E9BF4: jb      loc_1C00473C5
 * 00000001C00E9BFA: and     [rsp+58h+var_28], 0
 * 00000001C00E9C00: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00E9C08: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00E9C0F: mov     r9d, ebp
 * 00000001C00E9C12: mov     r8, [rsp+58h+arg_20]
 * 00000001C00E9C1A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00E9C1F: mov     [rsp+58h+var_30], rbx
 * 00000001C00E9C24: mov     [rsp+58h+var_38], rdx
 * 00000001C00E9C29: mov     edx, 2Bh ; '+'
 * 00000001C00E9C2E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00E9C34: nop
 * 00000001C00E9C35: jmp     loc_1C00473C5
 */
