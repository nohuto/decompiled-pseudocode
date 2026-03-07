void __fastcall KiRemoveAndFreeCpuPartitionAssignmentProcess(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // r8
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[1] = v13;
  v13[0] = v13;
  v2 = KeAcquireSpinLockRaiseToDpc(&KiCpuPartitionAssignmentLock);
  KiRemoveCpuPartitionAssignmentProcess(a1, v13);
  KxReleaseSpinLock((volatile signed __int64 *)&KiCpuPartitionAssignmentLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  v3 = (_QWORD *)v13[0];
  while ( v3 )
  {
    v4 = v3;
    if ( v3 == v13 )
      break;
    v10 = (_QWORD *)*v3;
    v11 = v3 - 2;
    v12 = (_QWORD *)v3[1];
    v3 = v10;
    if ( (_QWORD *)v10[1] != v4 || (_QWORD *)*v12 != v4 )
      __fastfail(3u);
    *v12 = v10;
    v10[1] = v12;
    ExFreePoolWithTag(v11, 0);
  }
}
