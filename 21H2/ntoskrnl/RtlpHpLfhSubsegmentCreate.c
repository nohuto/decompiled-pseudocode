/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x140223B20
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140347B90 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x140223DE8 (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x140223E9C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x140224118 (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     RtlpHpAcquireLockShared @ 0x140311AC4 (RtlpHpAcquireLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  int v7; // edi
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // r8
  int v13; // ecx
  unsigned int v14; // r10d
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // esi
  unsigned __int8 v21; // r14
  __int64 v22; // rdi
  unsigned int v23; // ebp
  __int64 v24; // rbp
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // edx
  bool v34; // zf
  int v35; // [rsp+30h] [rbp-58h] BYREF
  int v36; // [rsp+34h] [rbp-54h]
  int v37; // [rsp+90h] [rbp+8h]
  int v38; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v39; // [rsp+A8h] [rbp+20h]

  v4 = *(unsigned __int8 *)(a2 + 1);
  v35 = 0;
  v38 = 0;
  v7 = (unsigned __int16)RtlpBucketBlockSizes[v4];
  v37 = v7;
  if ( (RtlpHpLfhPerfFlags & 1) != 0 )
    v8 = RtlpHpLfhBucketSubsegmentStatsUpdate(a1 + 64, (unsigned int)v4);
  else
    v8 = 0;
  v9 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, v8);
  v10 = 7;
  v11 = v7 * v9;
  v12 = 18LL;
  v13 = (8 * (((unsigned __int64)(unsigned int)(2 * v9) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v14 = v13 + 2 * ((unsigned int)(v7 * v9 + v13 + 4095) >> 12);
  v15 = v14 + v11;
  if ( v14 + v11 >= 0xF0000 )
    v15 = 983040;
  _BitScanReverse(&v16, v15 - 1);
  v17 = 7;
  v18 = v16 + 1;
  if ( v18 > 7 )
    v17 = v18;
  v19 = 18;
  if ( v17 < 0x12 )
    v19 = v17;
  if ( v19 <= 0xC )
    LOBYTE(v19) = 12;
  v20 = 1 << v19;
  if ( (RtlpHpLfhPerfFlags & 8) != 0 && v14 <= v11 >> 6 )
  {
    if ( v11 >= 0xF0000 )
      v11 = 983040;
    _BitScanReverse(&v28, v11 - 1);
    v29 = v28 + 1;
    if ( v29 > 7 )
      v10 = v29;
    v39 = v10;
    if ( v10 < 0x12 )
      v12 = v10;
    if ( (unsigned int)v12 <= 0xC )
      v12 = 12LL;
    if ( v20 > 1 << v12 )
      v20 = 1 << v12;
  }
  if ( (a3 & 1) != 0 )
    v21 = -1;
  else
    v21 = RtlpHpAcquireLockShared(a1 + 72, *(unsigned __int8 *)(a1 + 57), v12);
  v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, int *, int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
          *(_QWORD *)a1,
          v20,
          a3,
          &v38,
          &v35);
  if ( v22 )
  {
    if ( v8 && (RtlpHpLfhPerfFlags & 2) != 0 || (v38 & 1) != 0 )
    {
      v23 = v20;
    }
    else
    {
      v26 = 2 * v37;
      v36 = 0;
      if ( ((2 * v37 - 1) & (2 * v37)) != 0 )
      {
        _BitScanReverse(&v27, v26);
        v36 = v27 + 1;
        v26 = 1 << (v27 + 1);
      }
      if ( v26 <= 0x1000 )
        v26 = 4096;
      v23 = v20;
      if ( v26 < v20 )
        v23 = v26;
    }
    if ( ((int (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v22,
           v23) < 0 )
    {
      v24 = 0LL;
    }
    else
    {
      RtlpHpLfhSubsegmentInitialize(v22, v20, v23, v37, a1);
      _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), *(unsigned __int16 *)(v22 + 34));
      v24 = v22;
      v22 = 0LL;
    }
    if ( v22 )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v22,
        v20,
        a3);
  }
  else
  {
    v24 = 0LL;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v21 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << (v21 + 1));
            v34 = (v33 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v33;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v21);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 72);
      KeAbPostRelease(a1 + 72);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return v24;
}
