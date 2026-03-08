/*
 * XREFs of ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C02497EC
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C009B800 (NtDCompositionGetConnectionBatch.c)
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C009BAA0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0248E58 (-AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C02498F4 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetBatches(
        DirectComposition::CConnection *this,
        const struct UCE_RDP_HEADER **a2)
{
  struct _ERESOURCE *v2; // rbx
  unsigned int Batches; // ebx
  struct DirectComposition::CBatch *v7; // [rsp+40h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+18h] BYREF

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v2, 1u);
  if ( *((_DWORD *)this + 37) )
  {
    v7 = 0LL;
    if ( (int)DirectComposition::CConnection::GetReadyBatches(this, 0LL, &v7) >= 0 && v7 )
    {
      while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) != 2 )
      {
        Interval.QuadPart = 0LL;
        KeDelayExecutionThread(1, 0, &Interval);
      }
      DirectComposition::CConnection::AppendRetrievingBatches(this, v7);
    }
    if ( *((_DWORD *)this + 36) == 1 || _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) == 2 )
      Batches = DirectComposition::CConnection::RetrieveBatches(this, 0LL, a2);
    else
      Batches = -1073740024;
  }
  else
  {
    Batches = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return Batches;
}
