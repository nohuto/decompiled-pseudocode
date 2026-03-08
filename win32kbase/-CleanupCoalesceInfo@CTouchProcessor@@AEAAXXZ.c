/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00952E4
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00954DC (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01F5BC4 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this)
{
  void *v1; // rdx

  v1 = (void *)*((_QWORD *)this + 18);
  if ( v1 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 34) = 0;
  }
}
