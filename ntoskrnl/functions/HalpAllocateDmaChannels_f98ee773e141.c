char __fastcall HalpAllocateDmaChannels(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v7; // r8d
  KSPIN_LOCK *v8; // r14
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r9
  int v12; // edx
  bool v13; // zf
  __int64 v15; // rsi
  __int64 *v16; // rax
  __int64 **v17; // rcx
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax

  v1 = *(_QWORD *)(a1 + 368);
  v3 = *(unsigned __int8 *)(v1 + 176);
  v4 = *(_QWORD *)(v1 + 56) + 160LL * *(unsigned int *)(a1 + 380);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v3);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v3 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == (_BYTE)v3 )
      v7 = 1 << v3;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v3 + 1)) - 1) & 0xFFFFFFFC;
    SchedulerAssist[5] |= v7;
  }
  v8 = (KSPIN_LOCK *)(v1 + 168);
  KxAcquireSpinLock(v8);
  if ( *(_BYTE *)(v4 + 5) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 352) + 20LL) & 1) == 0 )
    {
      v15 = v4 + 144;
      v16 = (__int64 *)(a1 + 208);
      v17 = *(__int64 ***)(v15 + 8);
      if ( *v17 != (__int64 *)v15 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(a1 + 216) = v17;
      *v17 = v16;
      *(_QWORD *)(v15 + 8) = v16;
    }
    KxReleaseSpinLock((volatile signed __int64 *)v8);
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    *(_BYTE *)(v4 + 5) = 1;
    *(_DWORD *)(a1 + 392) = 1;
    *(_QWORD *)(v4 + 24) = a1;
    KxReleaseSpinLock((volatile signed __int64 *)v8);
    if ( KiIrqlFlags )
    {
      v9 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        v11 = v10->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
