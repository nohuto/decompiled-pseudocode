__int64 __fastcall PopNetEvaluationWorkerCallback(__int64 a1, __int64 a2)
{
  int v2; // r15d
  int v3; // ebp
  char v4; // r12
  char v5; // r14
  char v6; // r13
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // esi
  unsigned __int64 v10; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  char v17; // [rsp+68h] [rbp+10h]
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0;
  v19 = 0;
  PopAcquirePolicyLock(a1, a2);
  while ( 1 )
  {
    v2 = PopNetStandbyState;
    v3 = PopNetStandbyReason;
    v4 = 0;
    v17 = 0;
    v5 = 0;
    v6 = 0;
    PopNetEvaluateStateMask(&v19, &v18);
    v8 = v19;
    if ( v19 == v2 )
      goto LABEL_7;
    if ( v2 == 2 )
    {
      v5 = 1;
      v6 = 1;
    }
    else
    {
      if ( v19 != 2 )
        goto LABEL_7;
      v5 = 1;
    }
    if ( PopNetResiliencyEngaged && qword_140C6ABE0 )
    {
      LOBYTE(v7) = 1;
      v17 = 1;
      PopNetSetResiliencyPhaseBias(v7);
    }
LABEL_7:
    v9 = v18;
    if ( v18 != v3 )
    {
      v4 = 1;
      v10 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      PopNetStandbyReason = v9;
      if ( PopCsResiliencyStats[0] && !dword_140C3C74C )
        dword_140C3C74C = v9;
      KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
      v7 = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = (unsigned int)(v10 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v8 = v19;
          v9 = v18;
        }
      }
      __writecr8(v10);
    }
    if ( v8 != v2 )
    {
      v4 = 1;
      PopNetStandbyState = v8;
      PopNetUpdateCsConsumptionFlags();
    }
    if ( v5 )
    {
      LOBYTE(v7) = v6;
      PopNetPublishWnfStateUpdate(v7);
      if ( v17 )
        PopNetSetResiliencyPhaseBias(0LL);
    }
    if ( !v4 )
      break;
    if ( PopDiagHandleRegistered )
      PopTraceStandbyConnectivityUpdate(v8, v9);
    else
      PopNetDeferLogRequest = 1;
  }
  _InterlockedExchange(&dword_140C39FA8, 0);
  return PopReleasePolicyLock();
}
