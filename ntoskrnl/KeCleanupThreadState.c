void __fastcall KeCleanupThreadState(ULONG_PTR BugCheckParameter1)
{
  unsigned __int8 CurrentIrql; // bp
  int v3; // esi
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned int v5; // edx
  ULONG_PTR v6; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  char v10; // cl
  char v11; // cl
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+50h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 4;
  BugCheckParameter4 = 0LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v8) = 4;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  if ( *(_DWORD *)(BugCheckParameter1 + 1028) != 32 )
  {
    v9 = *(char *)(BugCheckParameter1 + 1028);
    v10 = *(_BYTE *)(v9 + BugCheckParameter1 + 824);
    if ( !v10 )
      KeBugCheckEx(0x157u, BugCheckParameter1, *(char *)(BugCheckParameter1 + 1028), 2uLL, 0LL);
    v11 = v10 - 1;
    *(_BYTE *)(v9 + BugCheckParameter1 + 824) = v11;
    if ( !v11 )
      *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v9;
    *(_DWORD *)(BugCheckParameter1 + 1028) = 32;
  }
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
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
  if ( (*(_DWORD *)(BugCheckParameter1 + 116) & 1) != 0 )
  {
    v5 = 0;
    v6 = BugCheckParameter1 + 1696;
    while ( !*(_QWORD *)v6 )
    {
      if ( *(_DWORD *)(v6 + 16) >= 0x100u )
      {
        v3 = 2;
        goto LABEL_37;
      }
      if ( BugCheckParameter1 != v6 - 96LL * *(unsigned __int8 *)(v6 + 16) - 1696 )
      {
        v3 = 3;
        goto LABEL_37;
      }
      if ( *(_DWORD *)(v6 + 88) )
        goto LABEL_37;
      ++v5;
      v6 += 96LL;
      if ( v5 >= 6 )
        goto LABEL_13;
    }
    v3 = 1;
    BugCheckParameter4 = *(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL;
LABEL_37:
    KeBugCheckEx(0x153u, BugCheckParameter1, v6, v3, BugCheckParameter4);
  }
LABEL_13:
  if ( *(_WORD *)(BugCheckParameter1 + 868) )
    KeFlushQueuedDpcs();
}
