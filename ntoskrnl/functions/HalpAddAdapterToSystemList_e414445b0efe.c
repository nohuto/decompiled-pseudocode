__int64 __fastcall HalpAddAdapterToSystemList(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v7; // r8d
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax

  v2 = *(unsigned __int8 *)(a1 + 176);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v2 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == (_BYTE)v2 )
      v7 = 1 << v2;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v2 + 1)) - 1) & 0xFFFFFFFC;
    SchedulerAssist[5] |= v7;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
  v8 = *(_QWORD **)(a1 + 24);
  v9 = (_QWORD *)(a2 + 464);
  if ( *v8 != a1 + 16 )
    __fastfail(3u);
  *v9 = a1 + 16;
  *(_QWORD *)(a2 + 472) = v8;
  *v8 = v9;
  *(_QWORD *)(a1 + 24) = v9;
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 168));
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
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
