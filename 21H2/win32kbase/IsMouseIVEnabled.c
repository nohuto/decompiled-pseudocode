/*
 * XREFs of IsMouseIVEnabled @ 0x1C0041518
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0040F54 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0041834 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C00438A0 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0055848 (RIMChildInputTypeIsVirtualized.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C0E58 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C125C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     isChildPartition @ 0x1C0040F30 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C0041550 (UseVelocityToEnableIV.c)
 *     Feature_MouseInputVirtualization__private_ReportDeviceUsage @ 0x1C00CDA3C (Feature_MouseInputVirtualization__private_ReportDeviceUsage.c)
 */

char IsMouseIVEnabled()
{
  char v0; // al
  __int64 v1; // rcx
  __int64 v2; // rdx
  char v3; // dl

  v0 = UseVelocityToEnableIV();
  LOBYTE(v2) = 0;
  if ( v0 )
  {
    Feature_MouseInputVirtualization__private_ReportDeviceUsage(v1, v2);
    return 1;
  }
  if ( isChildPartition() && byte_1C02595D0 != v3 )
    return 1;
  return v3;
}
