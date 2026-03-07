void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  PSLIST_ENTRY *p_InternalState; // rsi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  struct _KTHREAD *v11; // r10
  char v12; // dl
  int *v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int16 *v19; // rdi
  _WORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD v23[10]; // [rsp+30h] [rbp-68h] BYREF

  memset(v23, 0, sizeof(v23));
  KeRemoveQueueDpc((PRKDPC)&InterruptObject[1].MessageServiceRoutine);
  IopInitializeActiveConnectBlock(&InterruptObject[-1].IsrDpcStats.IsrCount, v23);
  v2 = 0x3333333333333333LL;
  v3 = InterruptObject[-1].IsrDpcStats.IsrTimeStart
     - ((InterruptObject[-1].IsrDpcStats.IsrTimeStart >> 1) & 0x5555555555555555LL);
  v4 = (0x101010101010101LL
      * (((v3 & 0x3333333333333333LL)
        + ((v3 >> 2) & 0x3333333333333333LL)
        + (((v3 & 0x3333333333333333LL) + ((v3 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( v23[3] )
  {
    LOBYTE(v2) = 1;
    IopAcquireReleaseConnectLockInternal(v23, v2, 0LL);
  }
  p_InternalState = (PSLIST_ENTRY *)&InterruptObject[1].InternalState;
  LOBYTE(v2) = v4;
  KeDisconnectInterrupt(
    (__int64 *)&InterruptObject[1].InternalState,
    v2,
    (__int64)&InterruptObject[-1].IsrDpcStats.IsrCount);
  if ( v23[3] )
    IopAcquireReleaseConnectLockInternal(v23, 0LL, 0LL);
  if ( LOBYTE(InterruptObject[1].Type) )
    IopDestroyPassiveInterruptBlock(HIDWORD(InterruptObject[-1].IsrDpcStats.DpcTime));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( LOBYTE(InterruptObject[1].Type) )
  {
    v11 = KeGetCurrentThread();
    v12 = 0;
    if ( (char)v4 <= 0 )
      goto LABEL_22;
    v13 = &InterruptObject[1].InternalState;
    v14 = v4;
    do
    {
      v15 = *(_QWORD *)v13;
      v13 += 2;
      if ( *(struct _KTHREAD **)(v15 + 152) == v11 )
        v12 = 1;
      --v14;
    }
    while ( v14 );
    if ( !v12 )
LABEL_22:
      KeWaitForSingleObject(&InterruptObject[1].InterruptListEntry, Executive, 0, 0, 0LL);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v7 = *(_QWORD *)&InterruptObject[1].Number;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 312);
    v9 = *(_QWORD *)(v8 + 40);
    if ( !v9 || (*(_DWORD *)(v9 + 396) & 0x20000) != 0 )
    {
      IoAddTriageDumpDataBlock(*(_QWORD *)&InterruptObject[1].Number, (PVOID)*(unsigned __int16 *)(v7 + 2));
      v16 = *(_QWORD *)(v7 + 8);
      if ( v16 )
      {
        IoAddTriageDumpDataBlock(v16, (PVOID)(unsigned int)*(__int16 *)(v16 + 2));
        v17 = (_WORD *)(*(_QWORD *)(v7 + 8) + 56LL);
        if ( *v17 )
        {
          IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v7 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v7 + 8) + 56LL));
        }
      }
      v18 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
      if ( v18 )
      {
        v19 = (unsigned __int16 *)(v18 + 40);
        IoAddTriageDumpDataBlock(v18, (PVOID)0x388);
        if ( *v19 )
        {
          IoAddTriageDumpDataBlock((ULONG)v19, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v19 + 1), (PVOID)*v19);
        }
        v20 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 56LL);
        if ( *v20 )
        {
          IoAddTriageDumpDataBlock((ULONG)v20, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 56LL));
        }
        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 16LL);
        if ( v21 && *(_WORD *)(v21 + 56) )
        {
          IoAddTriageDumpDataBlock(v21 + 56, (PVOID)2);
          v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 64), (PVOID)*(unsigned __int16 *)(v22 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 2uLL, v7, 0LL, 0LL);
    }
    _InterlockedAdd((volatile signed __int32 *)(v8 + 96), 0xFFFFFFFF);
    *(_QWORD *)&InterruptObject[1].Number = 0LL;
    ObfDereferenceObjectWithTag((PVOID)v7, 0x54706E50u);
  }
  if ( (char)v4 > 0 )
  {
    v10 = v4;
    do
    {
      KeFreeInterrupt(*p_InternalState);
      *p_InternalState++ = 0LL;
      --v10;
    }
    while ( v10 );
  }
  IopDestroyActiveConnectBlock(v23);
  ExFreePoolWithTag(&InterruptObject[-1].IsrDpcStats, 0);
  PnpTraceInterruptConnection(0LL);
}
