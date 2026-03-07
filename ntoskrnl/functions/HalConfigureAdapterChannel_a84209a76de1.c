__int64 __fastcall HalConfigureAdapterChannel(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  char v9; // r14
  unsigned __int64 v10; // rdx
  _DWORD *SchedulerAssist; // r10
  int v12; // r8d
  volatile signed __int64 *v13; // rsi
  unsigned int v14; // edi
  unsigned __int8 v15; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf

  v3 = *(_QWORD *)(a1 + 368);
  if ( !*(_QWORD *)(v3 + 112) )
    return 3221225474LL;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0;
  if ( CurrentIrql == 15 )
  {
    v13 = (volatile signed __int64 *)(v3 + 168);
  }
  else
  {
    v10 = *(unsigned __int8 *)(v3 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v10);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v10 - 2) <= 0xDu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == (_BYTE)v10 )
        v12 = 1 << v10;
      else
        v12 = (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v10 + 1)) - 1) & 0xFFFFFFFC;
      SchedulerAssist[5] |= v12;
    }
    v13 = (volatile signed __int64 *)(v3 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 168));
    v9 = 1;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v3 + 112))(
          *(_QWORD *)(v3 + 64),
          *(unsigned int *)(a1 + 380),
          a2,
          a3);
  if ( v9 )
  {
    KxReleaseSpinLock(v13);
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v14;
}
