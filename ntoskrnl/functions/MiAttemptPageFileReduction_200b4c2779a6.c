char __fastcall MiAttemptPageFileReduction(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  KIRQL v4; // al
  unsigned __int64 v5; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rax
  int *v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 FileInformation; // [rsp+38h] [rbp-D0h] BYREF
  int v17[22]; // [rsp+48h] [rbp-C0h] BYREF
  int Object[28]; // [rsp+A8h] [rbp-60h] BYREF

  FileInformation = 0LL;
  memset(v17, 0, sizeof(v17));
  memset(Object, 0, 0x68uLL);
  Object[1] = 0;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = 16LL;
  *(_QWORD *)&Object[4] = &Object[2];
  *(_QWORD *)&Object[2] = &Object[2];
  BYTE2(Object[0]) = 6;
  *(_QWORD *)&Object[6] = v2;
  if ( (*(_BYTE *)(a1 + 79) & 0x10) == 0 )
  {
    Object[8] = *(unsigned __int8 *)(a1 + 76);
    Object[9] = *(_DWORD *)(a1 + 40);
LABEL_12:
    MiQueueSyncModifiedWriterApc(v2, (int)v17, (int)MiAttemptPageFileReductionApc, (int)Object, Object);
    v12 = &Object[10];
    v13 = (__int64 *)(v2 + 17056);
    do
    {
      v11 = (unsigned int)*v12;
      if ( (_DWORD)v11 )
      {
        v14 = *v13;
        FileInformation = v11 << 12;
        LOBYTE(v11) = IoSetInformation(*(PFILE_OBJECT *)(v14 + 56), FileAllocationInformation, 8u, &FileInformation);
      }
      ++v13;
      ++v12;
      --v3;
    }
    while ( v3 );
    return v11;
  }
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1408));
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1408));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  LOBYTE(v11) = MiOkToShrinkPageFiles(*(_QWORD *)(v2 + 17576), *(_QWORD *)(v2 + 17816));
  if ( (_DWORD)v11 )
  {
    Object[8] = 16;
    goto LABEL_12;
  }
  return v11;
}
