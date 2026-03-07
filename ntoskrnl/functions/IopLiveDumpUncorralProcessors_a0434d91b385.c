char __fastcall IopLiveDumpUncorralProcessors(__int64 *a1, char a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v4 = *a1;
  IopLiveDumpInitiateCorralStateChange((volatile __int32 *)a1, 5, &v14);
  IopLiveDumpInitiateCorralStateChange((volatile __int32 *)a1, 8, &v15);
  if ( (*(_DWORD *)(v4 + 80) & 0x100) == 0 )
    IopLiveDumpInitiateCorralStateChange((volatile __int32 *)a1, 6, &v16);
  PoAllProcIntrDisabled = 0;
  IopLiveDumpInitiateCorralStateChange((volatile __int32 *)a1, -1, &v13);
  KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)a1 + 6);
  if ( a2 || (*(_DWORD *)(v4 + 40) & 0x20) != 0 )
  {
    v5 = *((unsigned __int8 *)a1 + 88);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
  }
  IopLiveDumpUnLockPages();
  *((_DWORD *)a1 + 2) &= ~1u;
  IopLiveDumpTraceSystemQuiesceEnd();
  v11 = *(_DWORD *)(v4 + 80);
  if ( (v11 & 0x80u) != 0 )
    LOBYTE(v11) = IopLiveDumpTraceUncorralProcessorsDuration(*a1, v13, v16, v15, v14);
  return v11;
}
