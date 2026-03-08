/*
 * XREFs of ExtEnvDestroySpinLock @ 0x14051D088
 * Callers:
 *     IvtFreeDomain @ 0x14052A260 (IvtFreeDomain.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExtEnvDestroySpinLock(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&ExtEnvAllocationLock);
  v3 = *a1;
  v4 = v2;
  v5 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v5 != a1 )
    __fastfail(3u);
  *v5 = v3;
  *(_QWORD *)(v3 + 8) = v5;
  result = KxReleaseSpinLock((volatile signed __int64 *)&ExtEnvAllocationLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
