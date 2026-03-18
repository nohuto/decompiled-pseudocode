/*
 * XREFs of ?FreeRoutedAwayTarget@CTouchProcessor@@AEAAXPEAUtagCPointerRoutedAwayTarget@@@Z @ 0x1C01C6438
 * Callers:
 *     ?PopRoutedAwayTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C01CF3B4 (-PopRoutedAwayTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C01D3B64 (-RemoveRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeRoutedAwayTarget(
        struct _KTHREAD **this,
        struct tagCPointerRoutedAwayTarget ***a2,
        __int64 a3)
{
  struct tagCPointerRoutedAwayTarget **v4; // rax
  struct tagCPointerRoutedAwayTarget **v5; // rcx

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *a2;
  if ( (*a2)[1] != (struct tagCPointerRoutedAwayTarget *)a2
    || (v5 = a2[1], *v5 != (struct tagCPointerRoutedAwayTarget *)a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct tagCPointerRoutedAwayTarget *)v4;
  v4[1] = (struct tagCPointerRoutedAwayTarget *)v5;
  CInputDest::SetEmpty((CInputDest *)(a2 + 2));
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)a2);
}
