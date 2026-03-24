/*
 * XREFs of isChildPartition @ 0x1C00423A0
 * Callers:
 *     IsMouseIVEnabled @ 0x1C0042988 (IsMouseIVEnabled.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0042CA4 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C004E0B4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     rimDoRimDevChange @ 0x1C00533E4 (rimDoRimDevChange.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0056848 (RIMChildInputTypeIsVirtualized.c)
 *     RawInputManagerObjectCreate @ 0x1C0057E28 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C0058CE8 (RawInputManagerDeviceObjectCreate.c)
 *     UnInitializeInputComponents @ 0x1C00747B0 (UnInitializeInputComponents.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0088710 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C008AD94 (--0CTouchProcessor@@QEAA@XZ.c)
 *     InitializeInputComponents @ 0x1C008C56C (InitializeInputComponents.c)
 *     IsPTPIVEnabled @ 0x1C00A9B40 (IsPTPIVEnabled.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C00AD30C (RIMHandlePowerDeviceArrival.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00B7DB0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00B8040 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     NtUserGetInputContainerId @ 0x1C012EE90 (NtUserGetInputContainerId.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165580 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01672B0 (RIMIDECreateDeviceInstancePath.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C488 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01AA2C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C01BA634 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BA66C (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BA6BC (IsTouchIVEnabled.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BD108 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C118C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C0042ABC (isInputVirtualizationEnabled.c)
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
