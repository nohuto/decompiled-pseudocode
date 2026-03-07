__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  unsigned int v6; // ebp
  __int64 ProcessCpuSetMaskPointer; // r12
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned int v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = 0;
  v6 = 32;
  ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, a4, &v20);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v10 = 4;
    if ( CurrentIrql != 2 )
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v11 = v20;
  if ( v20 > 0x20 || (v6 = v20) != 0 )
  {
    v12 = ProcessCpuSetMaskPointer - (_QWORD)a2;
    v13 = v6;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v12);
      ++a2;
      --v13;
    }
    while ( v13 );
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v11 = v20;
    }
  }
  __writecr8(CurrentIrql);
  return v11;
}
