char __fastcall HalpFreeDmaChannels(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  unsigned __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v6; // r8d
  KSPIN_LOCK *v7; // r14
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbp
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  char result; // al
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax

  v1 = *(_QWORD *)(a1 + 368);
  v2 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  *(_DWORD *)(a1 + 392) = 0;
  v3 = *(unsigned __int8 *)(v1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v3 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == (_BYTE)v3 )
      v6 = 1 << v3;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v3 + 1)) - 1) & 0xFFFFFFFC;
    SchedulerAssist[5] |= v6;
  }
  v7 = (KSPIN_LOCK *)(v1 + 168);
  KxAcquireSpinLock(v7);
  v8 = (_QWORD *)(v2 + 144);
  v9 = *(_QWORD **)(v2 + 144);
  if ( v9 == (_QWORD *)(v2 + 144) )
  {
    *(_WORD *)(v2 + 5) = 0;
    *(_QWORD *)(v2 + 24) = 0LL;
    KxReleaseSpinLock((volatile signed __int64 *)v7);
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  else
  {
    v10 = *v9;
    if ( (_QWORD *)v9[1] != v8 || *(_QWORD **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = v10;
    v11 = (__int64)(v9 - 26);
    *(_QWORD *)(v10 + 8) = v8;
    ++*((_DWORD *)v9 + 104);
    *((_DWORD *)v9 + 46) = 1;
    *(_QWORD *)(v2 + 24) = v9 - 26;
    KxReleaseSpinLock((volatile signed __int64 *)v7);
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    __writecr8(CurrentIrql);
    return HalpAllocateDmaResourcesInternal(v11, 1, 0LL);
  }
  return result;
}
