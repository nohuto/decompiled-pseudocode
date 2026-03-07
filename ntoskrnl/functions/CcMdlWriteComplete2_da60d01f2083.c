void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  CSHORT MdlFlags; // r15
  struct _MDL *v6; // rdi
  NTSTATUS v8; // esi
  __int16 v9; // r15
  __int64 v10; // r13
  struct _MDL *Next; // r12
  __int64 ByteCount; // r8
  __int64 v13; // rax
  PMDL v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 OldIrql; // rbx
  struct _MDL *v19; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  BOOLEAN IsNtstatusExpected; // al
  int v26; // ecx
  __int128 v27; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+B0h] [rbp+50h]

  Mdl = a3;
  v3 = *a2;
  v29 = *a2;
  v4 = *(_QWORD *)(a1 + 40);
  MdlFlags = a3->MdlFlags;
  v6 = a3;
  v8 = 0;
  v27 = 0LL;
  v9 = MdlFlags & 2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = *(_QWORD *)(v4 + 8);
  do
  {
    Next = v6->Next;
    if ( v9 )
      MmUnlockPages(v6);
    ByteCount = v6->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), &v29, ByteCount, 0LL, &v27, 1);
      if ( (int)v27 < 0 )
        v8 = v27;
    }
    else
    {
      CcSetDirtyInMask(v10, &v29, ByteCount, 0LL);
    }
    v13 = v6->ByteCount;
    v6 = Next;
    v3 += v13;
    v29 = v3;
  }
  while ( Next );
  v14 = Mdl;
  if ( v9 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v10 + 536) + 768LL), &LockHandle);
    CcDecrementOpenCount(v10, v15, v16, v17);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  if ( v8 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v8);
    v26 = -1073741591;
    if ( IsNtstatusExpected )
      v26 = v8;
    RtlRaiseStatus(v26);
  }
  do
  {
    v19 = v14->Next;
    IoFreeMdl(v14);
    v14 = v19;
  }
  while ( v19 );
}
