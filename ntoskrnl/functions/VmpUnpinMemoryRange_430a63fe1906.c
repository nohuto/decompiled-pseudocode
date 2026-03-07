__int64 __fastcall VmpUnpinMemoryRange(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v17; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 result; // rax
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)SpinLock + 9) != a5 )
    NT_ASSERT("ProcessContext->PartitionId == PartitionId");
  v9 = *((_QWORD *)SpinLock + 1);
  if ( (SpinLock[4] & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)(SpinLock + 2);
  while ( v9 )
  {
    if ( a2 <= *(_QWORD *)(v9 + 32) )
    {
      if ( a2 >= *(_QWORD *)(v9 + 24) )
        break;
      v10 = *(_QWORD *)v9;
    }
    else
    {
      v10 = *(_QWORD *)(v9 + 8);
    }
    if ( (SpinLock[4] & 1) != 0 && v10 )
      v9 ^= v10;
    else
      v9 = v10;
  }
  if ( !v9 || (v11 = (_QWORD *)(v9 - 24), v9 == 24) )
    NT_ASSERT("GpaMemoryRange != ((void *)0)");
  v12 = *((_DWORD *)v11 + 16);
  if ( (v12 & 1) == 0 )
    NT_ASSERT("GpaMemoryRange->Pinned");
  if ( v11[6] != a2 )
    NT_ASSERT("GpaMemoryRange->StartGpn == StartGpn");
  if ( v11[7] != a2 + a4 - 1 )
    NT_ASSERT("GpaMemoryRange->LastGpn == (StartGpn + SizeInPages - 1)");
  v13 = v11[2];
  if ( *(_QWORD *)(v13 + 24) != a3 )
    NT_ASSERT("VaMemoryRange->StartVpn == StartVpn");
  if ( !*(_QWORD *)(v13 + 56) )
    NT_ASSERT("VaMemoryRange->PinnedSecureHandle != ((void *)0)");
  *((_DWORD *)v11 + 16) = v12 & 0xFFFFFFFE;
  v14 = VmpVaRangeCheckPinnedGpaRanges(v13);
  ++*((_QWORD *)SpinLock + 5);
  v15 = v14;
  VmpInvalidateSlatBatched(SpinLock, a2, a3, a4, &v23, 2);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v17 = v23;
    if ( (unsigned __int8)v23 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = v23;
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
      v21 = (v20 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  else
  {
    v17 = v23;
  }
  result = v17;
  __writecr8(v17);
  if ( v15 )
    return VmpUnlockMemoryForPin(SpinLock, v15);
  return result;
}
