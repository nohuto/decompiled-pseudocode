/*
 * XREFs of WbGetInitializedEncryptionSegment @ 0x1405D702C
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x1405D6EA4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D6F68 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 *     sub_1405D72F4 @ 0x1405D72F4 (sub_1405D72F4.c)
 *     sub_1405D7380 @ 0x1405D7380 (sub_1405D7380.c)
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbGetInitializedEncryptionSegment(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v7; // rbx
  int WarbirdEncryptionSegment; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r15
  char v14; // r14
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  PVOID P[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  *(_OWORD *)P = 0LL;
  WarbirdEncryptionSegment = sub_1405D7380(a2, a3, P, &v18);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_7;
  WarbirdEncryptionSegment = WbGetWarbirdEncryptionSegment(a1, &v18, &v15);
  if ( WarbirdEncryptionSegment < 0 )
    goto LABEL_19;
  v7 = v15;
  if ( !*(_DWORD *)(v15 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v15 + 8);
    v12 = KeAbPreAcquire(v15 + 8, 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    if ( !*(_DWORD *)(v7 + 16) )
    {
      v17 = *(_OWORD *)P;
      WarbirdEncryptionSegment = sub_1405D7C64(&v17, a2, v15);
    }
    v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( WarbirdEncryptionSegment >= 0 )
    {
      v7 = v15;
      goto LABEL_4;
    }
LABEL_19:
    v7 = v15;
    goto LABEL_7;
  }
LABEL_4:
  WarbirdEncryptionSegment = *(_DWORD *)(v7 + 20);
  if ( WarbirdEncryptionSegment >= 0 && a4 )
  {
    *a4 = v7;
    v7 = 0LL;
  }
LABEL_7:
  sub_1405D72F4(v7);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x42524157u);
  return (unsigned int)WarbirdEncryptionSegment;
}
