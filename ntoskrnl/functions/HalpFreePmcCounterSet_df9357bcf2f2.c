void *__fastcall HalpFreePmcCounterSet(_QWORD *a1)
{
  void *result; // rax
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  void **v8; // rax
  __int64 v9; // rsi
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  struct _GROUP_AFFINITY v16; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  result = &HalpSampleProfilingCounters;
  v16 = 0LL;
  PreviousAffinity = 0LL;
  if ( a1 != (_QWORD *)&HalpSampleProfilingCounters )
  {
    v3 = *((unsigned int *)a1 + 4);
    *(_DWORD *)v16.Reserved = 0;
    v16.Reserved[2] = 0;
    LODWORD(v3) = KiProcessorIndexToNumberMappingTable[v3];
    *(_DWORD *)&v16.Group = (unsigned __int16)((unsigned int)v3 >> 6);
    v16.Mask = 1LL << (v3 & 0x3F);
    KeSetSystemGroupAffinityThread(&v16, &PreviousAffinity);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v6) = 0x8000;
      else
        v6 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v6;
    }
    v7 = (_QWORD *)*a1;
    v8 = (void **)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || *v8 != a1 )
      __fastfail(3u);
    *v8 = v7;
    v9 = 0LL;
    for ( v7[1] = v8; (unsigned int)v9 < *((_DWORD *)a1 + 5); v9 = (unsigned int)(v9 + 1) )
      ((void (__fastcall *)(_QWORD, _QWORD *))HalpProfileInterface[2])(LODWORD(a1[5 * v9 + 5]), &a1[5 * v9 + 6]);
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    return (void *)HalpMmAllocCtxFree(v15, (__int64)a1);
  }
  return result;
}
