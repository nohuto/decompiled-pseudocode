/*
 * XREFs of VfIrpLogUnlockDatabase @ 0x140AD9E30
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140AC0C04 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfIrpLogUnlockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rsi
  _QWORD **v3; // r15
  _QWORD *v4; // rbx
  PVOID *v5; // r14
  _QWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf

  v1 = 3LL * a1;
  *(_DWORD *)(ViIrpLogDatabase + 24LL * a1) = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  v3 = (_QWORD **)(ViIrpLogDatabase + 8 * (v1 + 1));
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = (PVOID *)(v4 - 1);
    v6 = v4;
    v7 = *((_DWORD *)v4 + 4);
    v4 = (_QWORD *)*v4;
    if ( (v7 & 4) != 0 )
    {
      ObfDereferenceObject(*v5);
      v8 = *v6;
      v9 = (_QWORD *)v6[1];
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (_QWORD *)*v9 != v6 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      ExFreePoolWithTag(v5, 0);
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&ViIrpLogDatabaseLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v13 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
