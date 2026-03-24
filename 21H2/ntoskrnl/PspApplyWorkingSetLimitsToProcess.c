/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x140605A6C
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140605FB0 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x14071F430 (PspAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MmEnforceWorkingSetLimit @ 0x1402521D8 (MmEnforceWorkingSetLimit.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     MmAdjustWorkingSetSize @ 0x1403C9280 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r15
  int v7; // esi
  int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-78h]
  unsigned __int64 v14; // [rsp+28h] [rbp-70h]
  _OWORD v15[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 1296);
  v7 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v15, a4);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 56), 1u);
  v13 = *(_QWORD *)(v6 + 792);
  v14 = *(_QWORD *)(v6 + 800);
  v8 = ((*(_DWORD *)(v6 + 848) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C13270, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v6 + 1320), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v6 + 56));
  if ( v8 == 2 || (v7 = MmAdjustWorkingSetSize(v13, v14, 0, 1), v7 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v8);
    _InterlockedAnd((volatile signed __int32 *)(v6 + 1320), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C13270, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C13270);
    KeAbPostRelease((ULONG_PTR)&qword_140C13270);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v9 = *(_QWORD *)(a1 + 1360);
    if ( v9 )
    {
      if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
      {
        v7 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) )
      {
        v10 = 0LL;
        v11 = *(__int64 **)(a1 + 1408);
        if ( v11 )
          v10 = *v11;
        _interlockedbittestandset((volatile signed __int32 *)(v9 + 80), 0);
        if ( v10 )
          _interlockedbittestandset((volatile signed __int32 *)(v10 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112));
      }
      else
      {
        v7 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 1320), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C13270, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C13270);
    KeAbPostRelease((ULONG_PTR)&qword_140C13270);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  KiUnstackDetachProcess((__int64)v15, 0);
  return (unsigned int)v7;
}
