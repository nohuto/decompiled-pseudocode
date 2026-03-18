/*
 * XREFs of ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1C0304818
 * Callers:
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0303924 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0304704 (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C03048B4 (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 *     ?FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C030729C (-FinalizeTracking@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0307750 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     ?AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z @ 0x1C0303528 (-AddActiveTime@DripsBlockerTrackingHelper@@IEAAXII@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EnableEntryAccounting(
        DripsBlockerTrackingHelper *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbp

  v5 = 4720LL * a2;
  v6 = a3;
  if ( a4 )
  {
    v7 = v5 + 72LL * a3;
    if ( !*((_BYTE *)this + v7 + 112) && !*((_BYTE *)this + 302104) )
    {
      *(LARGE_INTEGER *)((char *)this + v7 + 120) = KeQueryPerformanceCounter(0LL);
      *((_BYTE *)this + v7 + 112) = 1;
    }
  }
  else
  {
    v8 = v5 + 72LL * a3;
    if ( *((_BYTE *)this + v8 + 112) == 1 )
    {
      DripsBlockerTrackingHelper::AddActiveTime(this, a2, a3);
      *((_BYTE *)this + v8 + 112) = 0;
      *(_DWORD *)((char *)this + 72 * v6 + v5 + 144) = 0;
    }
  }
}
