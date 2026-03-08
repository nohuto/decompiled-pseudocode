/*
 * XREFs of CmpTransMgrSyncHive @ 0x140798AD0
 * Callers:
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF20B4 (HvUnlockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  CmpLockRegistry(BugCheckParameter2, a2, a3, a4);
  HvLockHiveFlusherExclusive(BugCheckParameter2);
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) == 0 )
  {
    v11 = KeAbPreAcquire(BugCheckParameter2 + 80, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 80), v11, BugCheckParameter2 + 80);
    if ( v12 )
      *(_BYTE *)(v12 + 18) = 1;
    v9 = HvpMarkDirty(BugCheckParameter2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 80));
    KeAbPostRelease(BugCheckParameter2 + 80);
    if ( v9 < 0 )
    {
      HvUnlockHiveFlusherExclusive(BugCheckParameter2);
      CmpUnlockRegistry(v14, v13, v15, v16);
      return (unsigned int)v9;
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
  }
  HvUnlockHiveFlusherExclusive(BugCheckParameter2);
  CmpUnlockRegistry(v6, v5, v7, v8);
  v9 = 0;
  if ( (int)CmpFlushHive(BugCheckParameter2, 0) < 0 )
    return (unsigned int)-1073741670;
  return (unsigned int)v9;
}
