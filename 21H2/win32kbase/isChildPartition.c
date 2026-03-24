/*
 * XREFs of isChildPartition @ 0x1C0040F30
 * Callers:
 *     IsMouseIVEnabled @ 0x1C0041518 (IsMouseIVEnabled.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0041834 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0049550 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C004D0B4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     rimDoRimDevChange @ 0x1C00523E4 (rimDoRimDevChange.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0055848 (RIMChildInputTypeIsVirtualized.c)
 *     RawInputManagerObjectCreate @ 0x1C0056E28 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C0057CE8 (RawInputManagerDeviceObjectCreate.c)
 *     UnInitializeInputComponents @ 0x1C00730D0 (UnInitializeInputComponents.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0087870 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0089EF4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     InitializeInputComponents @ 0x1C008B6CC (InitializeInputComponents.c)
 *     IsPTPIVEnabled @ 0x1C00A9640 (IsPTPIVEnabled.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C00ACE0C (RIMHandlePowerDeviceArrival.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00B7A90 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00B7D20 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     NtUserGetInputContainerId @ 0x1C012EBC0 (NtUserGetInputContainerId.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165650 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C0167380 (RIMIDECreateDeviceInstancePath.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1C018C558 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01AA390 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     IsKeyboardIVEnabled @ 0x1C01BA704 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BA73C (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BA78C (IsTouchIVEnabled.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BD1D8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C125C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isInputVirtualizationEnabled @ 0x1C004164C (isInputVirtualizationEnabled.c)
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
