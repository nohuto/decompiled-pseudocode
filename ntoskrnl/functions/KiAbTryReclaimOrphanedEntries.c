__int64 __fastcall KiAbTryReclaimOrphanedEntries(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // dl

  if ( *(_BYTE *)(a2 + 870) )
  {
    v9 = *(_BYTE *)(a2 + 870);
    *(_BYTE *)(a2 + 870) = 0;
    return (unsigned int)v9;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0x10u);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v7 = *SchedulerAssist;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceAutoBoostEntryExhaustion(a2, a1);
    return 0LL;
  }
}
