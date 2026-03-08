/*
 * XREFs of ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x18004E1FC
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18004DFB0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800AF148 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing@@@details@wil@@.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180101FE8 (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ComputeVSyncInfo(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // r8

  v2 = *((_QWORD *)this + 526);
  v4 = 1LL;
  v5 = *(_QWORD *)(v2 + 240);
  if ( !*(_BYTE *)(v2 + 172) || *(_BYTE *)(v2 + 225) )
  {
    CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(this);
  }
  else
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_Scheduler_VSync_Smoothing>::GetImpl'::`2'::impl,
      a2);
    *(_QWORD *)(*((_QWORD *)this + 526) + 64LL) = *(_QWORD *)(*((_QWORD *)this + 526) + 160LL);
    *(_DWORD *)(*((_QWORD *)this + 526) + 44LL) = *(_DWORD *)(*((_QWORD *)this + 526) + 148LL);
  }
  v6 = *((_QWORD *)this + 527);
  if ( *(_QWORD *)(v6 + 64) )
    v4 = ((v5 >> 4) + *(_QWORD *)(*((_QWORD *)this + 526) + 64LL) - *(_QWORD *)(v6 + 64)) / v5;
  *((_QWORD *)this + 528) = v4;
  v7 = *((_QWORD *)this + 526);
  v8 = *(_QWORD *)(v7 + 72);
  if ( *(_QWORD *)(v7 + 64) > v8
    || *(_BYTE *)(v7 + 172) && *(_QWORD *)(v7 + 136) < *(_QWORD *)(v6 + 72)
    || v8 - *(_QWORD *)(v7 + 64) > 2 * v5 )
  {
    *(_QWORD *)(v7 + 64) = v8;
  }
  *(_QWORD *)(*((_QWORD *)this + 526) + 16LL) = *((_QWORD *)this + 528) + *(_QWORD *)(*((_QWORD *)this + 527) + 16LL);
  return 0LL;
}
