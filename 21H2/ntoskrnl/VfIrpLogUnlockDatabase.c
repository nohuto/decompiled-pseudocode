/*
 * XREFs of VfIrpLogUnlockDatabase @ 0x140A9BDCC
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140A83264 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfIrpLogUnlockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rsi
  _QWORD **v3; // r14
  _QWORD *v4; // rbx
  PVOID *v5; // rdi
  PVOID **v6; // rdx
  PVOID **v7; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v1 = 3LL * a1;
  *(_DWORD *)(ViIrpLogDatabase + 24LL * a1) = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  v3 = (_QWORD **)(ViIrpLogDatabase + 8 * (v1 + 1));
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = (PVOID *)(v4 - 1);
    v4 = (_QWORD *)*v4;
    if ( ((_DWORD)v5[3] & 4) != 0 )
    {
      ObfDereferenceObject(*v5);
      v6 = (PVOID **)v5[1];
      v7 = (PVOID **)v5[2];
      if ( v6[1] != v5 + 1 || *v7 != v5 + 1 )
        __fastfail(3u);
      *v7 = (PVOID *)v6;
      v6[1] = (PVOID *)v7;
      ExFreePoolWithTag(v5, 0);
    }
  }
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
