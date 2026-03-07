void __fastcall PpmInstallFeedbackCounters(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // r15
  __int64 v9; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int16 v11; // bp
  volatile signed __int32 *v12; // rcx
  bool v13; // bp
  __int64 v14; // rdx
  __int64 v15; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v17; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // rax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  int v27; // [rsp+20h] [rbp-68h] BYREF
  struct _GROUP_AFFINITY v28; // [rsp+28h] [rbp-60h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-50h] BYREF
  int v30; // [rsp+80h] [rbp-8h]

  v27 = 0;
  v5 = *(unsigned int *)(a1 + 36);
  v28 = 0LL;
  *(_DWORD *)v28.Reserved = 0;
  LODWORD(v5) = KiProcessorIndexToNumberMappingTable[v5];
  v28.Reserved[2] = 0;
  *(_DWORD *)&v28.Group = (unsigned __int16)((unsigned int)v5 >> 6);
  v28.Mask = 1LL << (v5 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&v28, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v21) = 4;
    if ( CurrentIrql != 2 )
      v21 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v21;
  }
  v9 = a1 + 33680;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmContinueActiveTimeAccumulation(a1, PerformanceCounter.QuadPart);
  v11 = v30;
  _disable();
  v12 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( v12 )
    _InterlockedOr(v12, 0x200000u);
  v13 = (v11 & 0x200) != 0;
  KxAcquireSpinLock((PKSPIN_LOCK)v9);
  v15 = v9 - (_QWORD)a2;
  do
  {
    if ( *a2 )
    {
      if ( *(_BYTE *)(*a2 + 34) )
        *(_BYTE *)(v9 + 137) = 1;
      *(__int64 *)((char *)a2 + v15 + 24) = *a2;
      LOBYTE(v14) = 1;
      *(__int64 *)((char *)a2 + v15 + 64) = 100LL * *(_QWORD *)(v9 + 48);
      PpmPerfFeedbackCounterRead(*a2, v14, &v27);
    }
    ++a2;
    --v8;
  }
  while ( v8 );
  if ( *(_QWORD *)(v9 + 32) )
  {
    *(_BYTE *)(v9 + 136) = 1;
  }
  else if ( *(_QWORD *)(v9 + 24) )
  {
    *(_BYTE *)(v9 + 136) = 0;
  }
  *(_BYTE *)(v9 + 138) = a3;
  KxReleaseSpinLock((volatile signed __int64 *)v9);
  if ( v13 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      _m_prefetchw(v17);
      v18 = *v17;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(v17, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  if ( KiIrqlFlags )
  {
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v26 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
