bool __fastcall PopFxActivateComponentDependencies(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r13
  volatile signed __int64 *v3; // r14
  KIRQL v6; // al
  int v7; // r8d
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  bool v11; // bl
  __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // edx
  bool v19; // zf
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v3 = (volatile signed __int64 *)(a1 + 128);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v7 = *(_DWORD *)(a1 + 172);
  v8 = 0LL;
  v9 = v6;
  *(_DWORD *)(a1 + 184) = v7;
  if ( v7 )
  {
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v2 + 832) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 176) + 8 * v8));
      PopFxActivateComponent(v2, v13, 10, a2);
      *(_BYTE *)(*(_QWORD *)(a1 + 176) + 8 * v8 + 4) = 1;
      if ( *(int *)(v13 + 88) < 0 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 176) + 8 * v8 + 4) = 0;
        --*(_DWORD *)(a1 + 184);
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a1 + 172) );
  }
  v10 = 0LL;
  v20 = 0LL;
  while ( PopFxNextParentRelationSafe((_QWORD **)(a1 + 456), v10, &v20) )
  {
    v14 = *(_QWORD *)(v20 + 24);
    PopFxActivateComponent(*(_QWORD *)(v14 + 80), v14, 10, 0);
    v10 = v20;
    if ( *(int *)(v14 + 88) < 0 )
    {
      *(_DWORD *)(v20 + 16) |= 2u;
    }
    else
    {
      *(_DWORD *)(v20 + 16) |= 1u;
      ++*(_DWORD *)(a1 + 184);
    }
  }
  v11 = *(_DWORD *)(a1 + 184) == 0;
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  return v11;
}
