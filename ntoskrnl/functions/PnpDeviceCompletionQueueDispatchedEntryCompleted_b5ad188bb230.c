__int64 __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a1;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C5C6A8);
  v5 = *a2;
  v6 = v3;
  v7 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2
    || (_QWORD *)*v7 != a2
    || (*v7 = v5,
        *(_QWORD *)(v5 + 8) = v7,
        v8 = (_QWORD *)qword_140C5C680,
        --dword_140C5C670,
        *(__int64 **)qword_140C5C680 != &qword_140C5C678) )
  {
    __fastfail(3u);
  }
  LODWORD(v13) = 0;
  *a2 = &qword_140C5C678;
  a2[1] = v8;
  *v8 = a2;
  qword_140C5C680 = (__int64)a2;
  KeReleaseSemaphoreEx((unsigned int)&byte_140C5C688, 0, 1, v4, 8, (__int64)&v13);
  result = KxReleaseSpinLock(&qword_140C5C6A8);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return result;
}
