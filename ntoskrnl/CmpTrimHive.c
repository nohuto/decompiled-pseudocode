/*
 * XREFs of CmpTrimHive @ 0x1407317CC
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpUpdatePhaseAccessBit @ 0x14085A0A4 (CmpUpdatePhaseAccessBit.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HvTrimHive @ 0x14085BB7C (HvTrimHive.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

void __fastcall CmpTrimHive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  if ( CmpAccessBitForPhase == 2 )
  {
    v5 = *(_DWORD *)(a1 + 4752);
    if ( v5 || (v5 = *(_DWORD *)(a1 + 4756)) != 0 )
    {
      CmpLockRegistry(a1, a2, a3, a4);
      v6 = KeAbPreAcquire(a1 + 72, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 72), 0, v6, a1 + 72);
      if ( v6 )
        *(_BYTE *)(v6 + 18) = 1;
      v7 = KeAbPreAcquire(a1 + 80, 0LL);
      v8 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v7, a1 + 80);
      if ( v8 )
        *(_BYTE *)(v8 + 18) = 1;
      *(_DWORD *)(a1 + 4760) = *(_DWORD *)(a1 + 280);
      *(_DWORD *)(a1 + 4756) = v5;
      HvTrimHive(a1, v5);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
      KeAbPostRelease(a1 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      CmpUnlockRegistry(v10, v9, v11, v12);
    }
  }
}
