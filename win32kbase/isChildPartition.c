/*
 * XREFs of isChildPartition @ 0x1C0078FF0
 * Callers:
 *     ?ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z @ 0x1C00041CC (-ReadComplete@RIM@TelemetryDebug@InputTraceLogging@@SAX_K@Z.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C0004A6C (RIMIDECreateDeviceInstancePath.c)
 *     RawInputManagerObjectCreate @ 0x1C0034798 (RawInputManagerObjectCreate.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0034C48 (RIMChildInputTypeIsVirtualized.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C00373B8 (RawInputManagerDeviceObjectCreate.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C007A4DC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     IsMouseIVEnabled @ 0x1C007AFD0 (IsMouseIVEnabled.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C0081340 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     IsPTPIVEnabled @ 0x1C008B994 (IsPTPIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C008B9C0 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C008B9EC (IsTouchIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C008BA18 (IsKeyboardIVEnabled.c)
 *     UnInitializeInputComponents @ 0x1C0094C50 (UnInitializeInputComponents.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0097188 (--0CTouchProcessor@@QEAA@XZ.c)
 *     InitializeInputComponents @ 0x1C009770C (InitializeInputComponents.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C009AFA0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     rimDoRimDevChange @ 0x1C00BC1AC (rimDoRimDevChange.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C00BC314 (RIMHandlePowerDeviceArrival.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00DF6E8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00DFA8C (-ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F4B20 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     NtUserGetInputContainerId @ 0x1C016F9B0 (NtUserGetInputContainerId.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01BE49C (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D2214 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     rimQueueCompleteFrame @ 0x1C01D2F84 (rimQueueCompleteFrame.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C01EEF38 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01F1CA0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1C01F34B0 (-GenerateFrameMessages@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01FF3E4 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C0201ED0 (-SendFrameToUserMode@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TI.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C02120C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C021A7E0 (ProcessKeyboardInputWorker.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C022858C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C0228DF0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C022970C (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 *     ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1C0229810 (-sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0079014 (isInputVirtualizationEnabled.c)
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
