/*
 * XREFs of IsMouseIVEnabled @ 0x1C007AFD0
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C007A4DC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C007AB10 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C007CFCC (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     RIMInitialize @ 0x1C008B310 (RIMInitialize.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F4B20 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C022ED3C (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 * Callees:
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     RIMIsRunningOnDesktop @ 0x1C007B004 (RIMIsRunningOnDesktop.c)
 *     isRootPartition @ 0x1C007B02C (isRootPartition.c)
 *     Feature_MouseInputVirtualization__private_ReportDeviceUsage @ 0x1C00E11F8 (Feature_MouseInputVirtualization__private_ReportDeviceUsage.c)
 */

char IsMouseIVEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( (unsigned __int8)isRootPartition() || (unsigned int)RIMIsRunningOnDesktop(v1, v0) )
  {
    Feature_MouseInputVirtualization__private_ReportDeviceUsage();
    return 1;
  }
  if ( isChildPartition() && byte_1C02D8708 )
    return 1;
  return v2;
}
