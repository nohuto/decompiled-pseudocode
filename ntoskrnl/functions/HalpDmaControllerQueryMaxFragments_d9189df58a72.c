__int64 __fastcall HalpDmaControllerQueryMaxFragments(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v8; // rdx
  _DWORD *SchedulerAssist; // r10
  int v10; // r8d
  volatile signed __int64 *v11; // rdi
  unsigned int v12; // esi
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v11 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v8 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v8);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v8 - 2) <= 0xDu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == (_BYTE)v8 )
        v10 = 1 << v8;
      else
        v10 = (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v8 + 1)) - 1) & 0xFFFFFFFC;
      SchedulerAssist[5] |= v10;
    }
    v11 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v6 = 1;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 96))(
          *(_QWORD *)(a1 + 64),
          *(unsigned int *)(a2 + 380),
          a3);
  if ( v6 )
  {
    KxReleaseSpinLock(v11);
    if ( KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  return v12;
}
