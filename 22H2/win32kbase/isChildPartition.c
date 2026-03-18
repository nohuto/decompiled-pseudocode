/*
 * XREFs of isChildPartition @ 0x1C004FE70
 * Callers:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C0005604 (-ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C0005C78 (RIMHandlePowerDeviceArrival.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C000612C (RIMIDECreateDeviceInstancePath.c)
 *     IsMouseIVEnabled @ 0x1C0052D74 (IsMouseIVEnabled.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C006A210 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     RawInputManagerObjectCreate @ 0x1C00702E0 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C0072EA8 (RawInputManagerDeviceObjectCreate.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0075E94 (RIMChildInputTypeIsVirtualized.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C008187C (--0CTouchProcessor@@QEAA@XZ.c)
 *     InitializeInputComponents @ 0x1C00821D8 (InitializeInputComponents.c)
 *     IsKeyboardIVEnabled @ 0x1C00A8664 (IsKeyboardIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C00A8698 (IsTouchIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C00A86CC (IsPenIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00A8700 (IsPTPIVEnabled.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00B30F0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     UnInitializeInputComponents @ 0x1C00B6FA4 (UnInitializeInputComponents.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D41D8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00E6390 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     NtUserGetInputContainerId @ 0x1C01447E0 (NtUserGetInputContainerId.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C70 (RIMOnAsyncPnpWorkNotification.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01907FC (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01A4120 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     rimQueueCompleteFrame @ 0x1C01A4E88 (rimQueueCompleteFrame.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01C007C (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C2E20 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1C01C4650 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4F38 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D0604 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D3114 (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2DA0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01EA900 (ProcessKeyboardInputWorker.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F38F0 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C01F3980 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F3B70 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 *     ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1C01F3BB0 (-sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C004FF0C (isInputVirtualizationEnabled.c)
 */

bool isChildPartition()
{
  char v0; // al
  char v1; // cl

  v0 = isInputVirtualizationEnabled();
  v1 = 0;
  if ( v0 )
    return gbRootPartition == 0;
  return v1;
}
