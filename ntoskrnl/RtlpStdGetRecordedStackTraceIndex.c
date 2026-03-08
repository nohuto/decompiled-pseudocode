/*
 * XREFs of RtlpStdGetRecordedStackTraceIndex @ 0x1405A7574
 * Callers:
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x1403BF090 (ExpInitializeResource.c)
 *     ExInitializeFastResource2 @ 0x14040E2C0 (ExInitializeFastResource2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpStdExtendUpperWatermark @ 0x1405A7440 (RtlpStdExtendUpperWatermark.c)
 */

__int64 __fastcall RtlpStdGetRecordedStackTraceIndex(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // r8
  unsigned int v5; // eax
  _DWORD *v6; // rdx
  __int64 v7; // rsi
  void *v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf

  v2 = a2[7];
  v5 = 0;
  if ( (_WORD)v2 )
  {
    v6 = a2 + 8;
    do
    {
      v5 += *v6;
      v6 += 2;
      --v2;
    }
    while ( v2 );
  }
  v7 = a1 + 24LL * (v5 % *(_DWORD *)(a1 + 720));
  *(_BYTE *)(v7 + 744) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 736));
  if ( *(_DWORD *)(a2 + 5) )
  {
    LODWORD(v10) = a2[6] + (a2[5] << 16);
  }
  else
  {
    v9 = (_QWORD *)RtlpStdExtendUpperWatermark(a1, v8);
    if ( v9 )
    {
      *v9 = a2;
      v10 = (__int64)(*(_QWORD *)(a1 + 184) - (_QWORD)v9) >> 3;
      a2[6] = v10;
      a2[5] = WORD1(v10);
    }
    else
    {
      LODWORD(v10) = 0;
    }
  }
  v11 = *(unsigned __int8 *)(v7 + 744);
  KxReleaseSpinLock((volatile signed __int64 *)(v7 + 736));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v11);
  return (unsigned int)v10;
}
