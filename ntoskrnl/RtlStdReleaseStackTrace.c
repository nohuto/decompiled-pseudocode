/*
 * XREFs of RtlStdReleaseStackTrace @ 0x1405A7180
 * Callers:
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x1403BF090 (ExpInitializeResource.c)
 *     ExInitializeFastResource2 @ 0x14040E2C0 (ExInitializeFastResource2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v5; // ebp
  unsigned int v6; // eax
  _DWORD *v7; // rdx
  _QWORD *v8; // rdi
  volatile signed __int64 *v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *i; // rax
  unsigned __int64 v13; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v2 = *(unsigned __int16 *)(a2 + 14);
  v5 = 0;
  v6 = 0;
  if ( (_WORD)v2 )
  {
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v6 += *v7;
      v7 += 2;
      --v2;
    }
    while ( v2 );
  }
  v8 = (_QWORD *)(a1 + 8 * (v6 % *(_DWORD *)(a1 + 720) + 2LL * (v6 % *(_DWORD *)(a1 + 720)) + 91));
  v9 = v8 + 1;
  *((_BYTE *)v8 + 16) = KeAcquireSpinLockRaiseToDpc(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      for ( i = (_QWORD *)*v8; ; i = (_QWORD *)*i )
      {
        if ( !i )
        {
          __debugbreak();
          goto LABEL_11;
        }
        if ( i == (_QWORD *)a2 )
          break;
        v8 = i;
      }
      *v8 = *(_QWORD *)a2;
LABEL_11:
      v5 = 1;
    }
  }
  v13 = *((unsigned __int8 *)v9 + 8);
  result = KxReleaseSpinLock(v9);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v13 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v17 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v13);
  if ( v5 )
  {
    result = (__int64)RtlpInterlockedPushEntrySList(
                        (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
                        (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
  return result;
}
