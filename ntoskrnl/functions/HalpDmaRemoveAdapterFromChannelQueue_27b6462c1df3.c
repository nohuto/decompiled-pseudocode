char __fastcall HalpDmaRemoveAdapterFromChannelQueue(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // r8
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v7; // r8d
  _QWORD **v8; // rdx
  char v9; // di
  _QWORD *v10; // rax
  _QWORD **v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // edx
  bool v16; // zf
  _QWORD *v18; // rdx

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
  KxAcquireSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 368) + 168LL));
  v8 = (_QWORD **)(v4 + 144);
  v9 = 0;
  v10 = *v8;
  if ( *v8 != v8 )
  {
    while ( 1 )
    {
      v11 = (_QWORD **)*v10;
      if ( v10 == (_QWORD *)(a1 + 208) )
        break;
      v10 = (_QWORD *)*v10;
      if ( v11 == v8 )
        goto LABEL_12;
    }
    v18 = (_QWORD *)v10[1];
    if ( v11[1] != v10 || (_QWORD *)*v18 != v10 )
      __fastfail(3u);
    *v18 = v11;
    v9 = 1;
    v11[1] = v18;
  }
LABEL_12:
  KxReleaseSpinLock((volatile signed __int64 *)(*(_QWORD *)(a1 + 368) + 168LL));
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v9;
}
