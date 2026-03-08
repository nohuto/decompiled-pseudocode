/*
 * XREFs of rimReclaimHoldingFrame @ 0x1C01CF270
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C01CD2D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMRemoveHoldingFrame @ 0x1C01CDBCC (RIMRemoveHoldingFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C01CE060 (rimFindAndReclaimHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01CE320 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     rimFreePointerRawDataListWorker @ 0x1C01CE29C (rimFreePointerRawDataListWorker.c)
 */

void __fastcall rimReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rdx

  v3 = *(char **)(a3 + 72);
  if ( v3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    *(_QWORD *)(a3 + 72) = 0LL;
  }
  rimFreePointerRawDataListWorker(*(_QWORD **)(a3 + 56));
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_DWORD *)(a3 + 48) = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a3 + 80) = 0LL;
}
