/*
 * XREFs of ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C0201754
 * Callers:
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C00F2782 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C01F2634 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C02016F8 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C02034BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::ReleasePointerCaptureInt(struct _KTHREAD **this, struct CPointerCaptureInfo *a2)
{
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11009);
  if ( *(_DWORD *)a2 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 1) > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11027);
    if ( !*((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11029);
    CInputDest::SetEmpty((struct CPointerCaptureInfo *)((char *)a2 + 8));
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 32) = 0;
  }
  else
  {
    if ( *((_DWORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11021);
    if ( *((_DWORD *)a2 + 32) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11022);
  }
}
