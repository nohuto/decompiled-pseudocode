/*
 * XREFs of RtlpStdExtendUpperWatermark @ 0x1405A7440
 * Callers:
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1405A7574 (RtlpStdGetRecordedStackTraceIndex.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ZwAllocateVirtualMemory @ 0x140412610 (ZwAllocateVirtualMemory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpStdExtendUpperWatermark(__int64 a1, void *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  char *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v10; // edx
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF

  BaseAddress = a2;
  RegionSize = 0LL;
  v3 = 0LL;
  *(_BYTE *)(a1 + 8) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
  v4 = *(_QWORD *)(a1 + 168);
  v5 = *(char **)(a1 + 152);
  BaseAddress = v5;
  v6 = v4 - 8;
  if ( !*(_BYTE *)(a1 + 128) )
  {
    if ( v6 < (unsigned __int64)v5 )
    {
      RegionSize = 4096LL;
      if ( (unsigned __int64)(v5 - 4096) <= *(_QWORD *)(a1 + 144) )
        goto LABEL_9;
      BaseAddress = v5 - 4096;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        goto LABEL_9;
      *(_QWORD *)(a1 + 152) = BaseAddress;
    }
LABEL_8:
    ++*(_DWORD *)(a1 + 180);
    v3 = v4 - 8;
    *(_QWORD *)(a1 + 168) = v4 - 8;
    goto LABEL_9;
  }
  if ( v6 >= *(_QWORD *)(a1 + 160) )
    goto LABEL_8;
LABEL_9:
  v7 = *(unsigned __int8 *)(a1 + 8);
  KxReleaseSpinLock((volatile signed __int64 *)a1);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  return v3;
}
