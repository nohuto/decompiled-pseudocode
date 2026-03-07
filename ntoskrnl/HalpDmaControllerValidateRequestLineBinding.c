char __fastcall HalpDmaControllerValidateRequestLineBinding(__int64 a1, __int64 a2)
{
  char v3; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v5; // rdx
  _DWORD *SchedulerAssist; // r10
  int v7; // r8d
  volatile signed __int64 *v8; // rdi
  char v9; // si
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  int v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+44h] [rbp+Ch]

  v16 = *(_DWORD *)(a2 + 48);
  v3 = 0;
  v17 = *(_DWORD *)(a2 + 16);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql == 15 )
  {
    v8 = (volatile signed __int64 *)(a1 + 168);
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 176);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v5);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v5 - 2) <= 0xDu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == (_BYTE)v5 )
        v7 = 1 << v5;
      else
        v7 = (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v5 + 1)) - 1) & 0xFFFFFFFC;
      SchedulerAssist[5] |= v7;
    }
    v8 = (volatile signed __int64 *)(a1 + 168);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 168));
    v3 = 1;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, int *))(a1 + 88))(*(_QWORD *)(a1 + 64), &v16);
  if ( v3 )
  {
    KxReleaseSpinLock(v8);
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
  }
  return v9;
}
