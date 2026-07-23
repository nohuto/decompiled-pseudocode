/*
 * XREFs of WbGetWarbirdEncryptionSegment @ 0x1405D71A8
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x1405D702C (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405D6E10 @ 0x1405D6E10 (sub_1405D6E10.c)
 *     sub_1405D72F4 @ 0x1405D72F4 (sub_1405D72F4.c)
 *     sub_1405D7328 @ 0x1405D7328 (sub_1405D7328.c)
 */

__int64 __fastcall WbGetWarbirdEncryptionSegment(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbx
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rbx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  char v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v14 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 176);
  v8 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v7, v8, (ULONG_PTR)v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = sub_1405D7328(a1, a2, &v16, &v15);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 == -1073741198 )
  {
    v12 = sub_1405D6E10(a2, &v16);
    v10 = v16;
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_11;
    v9 = WbAddWarbirdEncryptionSegment(a1, v16, &v14);
    if ( v9 < 0 )
      goto LABEL_11;
    v13 = v14;
    if ( v14 )
    {
      sub_1405D72F4(v10);
      v10 = v13;
    }
  }
  else
  {
    v10 = v16;
    if ( v9 < 0 )
      goto LABEL_11;
  }
  if ( a3 )
  {
    *a3 = v10;
    v10 = 0LL;
  }
LABEL_11:
  sub_1405D72F4(v10);
  sub_1405D72F4(v14);
  return (unsigned int)v9;
}
