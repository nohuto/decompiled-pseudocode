/*
 * XREFs of ?IsVailContainer@@YA_NXZ @ 0x180278ADC
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019C918 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18019CCAC (-QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME.c)
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801C8FA8 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ @ 0x1801E76E0 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x1802896E0 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180278A58 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsVailContainer(void)
{
  bool v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( HIBYTE(word_1803E3650) )
    return word_1803E3650;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
  {
    HIBYTE(word_1803E3650) = 1;
    v0 = v2 != 0;
    LOBYTE(word_1803E3650) = v2 != 0;
  }
  else
  {
    word_1803E3650 = 256;
  }
  return v0;
}
