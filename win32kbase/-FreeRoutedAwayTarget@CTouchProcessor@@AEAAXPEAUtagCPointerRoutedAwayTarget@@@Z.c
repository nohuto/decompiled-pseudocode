/*
 * XREFs of ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C01F2E5C
 * Callers:
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01FCCDC (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0201850 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeRoutedAwayTarget(struct _KTHREAD **this, struct tagCPointerRoutedAwayTarget ***a2)
{
  struct tagCPointerRoutedAwayTarget **v3; // rcx
  struct tagCPointerRoutedAwayTarget **v4; // rax

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11503);
  v3 = *a2;
  if ( (*a2)[1] != (struct tagCPointerRoutedAwayTarget *)a2
    || (v4 = a2[1], *v4 != (struct tagCPointerRoutedAwayTarget *)a2) )
  {
    __fastfail(3u);
  }
  *v4 = (struct tagCPointerRoutedAwayTarget *)v3;
  v3[1] = (struct tagCPointerRoutedAwayTarget *)v4;
  CInputDest::SetEmpty((CInputDest *)(a2 + 2));
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a2);
}
