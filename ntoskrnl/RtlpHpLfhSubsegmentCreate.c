/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x14030AFE0
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockShared @ 0x140309A10 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x14030AF34 (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     RtlpCalculateSubsegmentSizeIndex @ 0x14030B25C (RtlpCalculateSubsegmentSizeIndex.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x14030B28C (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x14030B340 (RtlpHpLfhSubsegmentInitialize.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // eax
  KIRQL v17; // bp
  __int64 v18; // r15
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  __int64 v21; // r14
  struct _KTHREAD *CurrentThread; // rcx
  bool v23; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // edx
  int v29; // [rsp+80h] [rbp+8h]
  int v30; // [rsp+88h] [rbp+10h] BYREF
  int v31; // [rsp+90h] [rbp+18h] BYREF
  int v32; // [rsp+98h] [rbp+20h]

  v30 = 0;
  v31 = 0;
  v6 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a2 + 1)];
  v29 = v6;
  if ( (RtlpHpLfhPerfFlags & 1) != 0 )
    v7 = RtlpHpLfhBucketSubsegmentStatsUpdate(a1 + 64, *(unsigned __int8 *)(a2 + 1));
  else
    v7 = 0;
  v8 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, v7);
  v9 = (8 * (((unsigned __int64)(unsigned int)(2 * v8) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v10 = RtlpCalculateSubsegmentSizeIndex(v9 + 2 * ((unsigned int)(v6 * v8 + v9 + 4095) >> 12) + v6 * v8);
  if ( v10 <= 0xC )
    LOBYTE(v10) = 12;
  v13 = 1 << v10;
  if ( (RtlpHpLfhPerfFlags & 8) != 0 && v12 <= v11 >> 6 )
  {
    v14 = RtlpCalculateSubsegmentSizeIndex(v11);
    if ( v14 <= v15 )
      LOBYTE(v14) = v15;
    v16 = 1 << v14;
    if ( v13 > v16 )
      v13 = v16;
  }
  if ( (a3 & 1) != 0 )
    v17 = -1;
  else
    v17 = RtlpHpAcquireLockShared((volatile LONG *)(a1 + 72), *(unsigned __int8 *)(a1 + 57));
  v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, int *, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
          *(_QWORD *)a1,
          v13,
          a3,
          &v31,
          &v30);
  if ( v18 )
  {
    if ( v7 && (RtlpHpLfhPerfFlags & 2) != 0 || (v31 & 1) != 0 )
    {
      v19 = v13;
    }
    else
    {
      v19 = 2 * v29;
      v32 = 0;
      if ( ((v19 - 1) & v19) != 0 )
      {
        _BitScanReverse(&v20, v19);
        v32 = v20 + 1;
        v19 = 1 << (v20 + 1);
      }
      if ( v19 <= 0x1000 )
        v19 = 4096;
      if ( v19 >= v13 )
        v19 = v13;
    }
    if ( ((int (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v18,
           v19) < 0 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v18,
        v13,
        a3);
    }
    else
    {
      RtlpHpLfhSubsegmentInitialize(v18, v13, v19, v29, a1);
      _InterlockedAdd64((volatile signed __int64 *)(a2 + 64), 1uLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), *(unsigned __int16 *)(v18 + 34));
      v21 = v18;
    }
  }
  else
  {
    v21 = 0LL;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v17 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v17 + 1));
          v23 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v17);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      CurrentThread = KeGetCurrentThread();
      v23 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v23
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return v21;
}
