__int64 __fastcall KeQueryCpuSetsThread(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r14d
  __int64 ThreadCpuSetMaskPointer; // r15
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  __int64 v9; // r15
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  int v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0;
  v4 = 32;
  ThreadCpuSetMaskPointer = KiGetThreadCpuSetMaskPointer(a1, &v18);
  if ( v18 <= 0x20 )
    v4 = v18;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v8 = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( v4 )
  {
    v9 = ThreadCpuSetMaskPointer - (_QWORD)a2;
    v10 = v4;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v9);
      ++a2;
      --v10;
    }
    while ( v10 );
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v15 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v18;
}
