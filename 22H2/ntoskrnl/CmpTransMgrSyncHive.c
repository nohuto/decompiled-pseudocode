/*
 * XREFs of CmpTransMgrSyncHive @ 0x14076863C
 * Callers:
 *     CmpTransMgrPrepare @ 0x140768324 (CmpTransMgrPrepare.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     HvpMarkDirty @ 0x140655BF0 (HvpMarkDirty.c)
 */

__int64 __fastcall CmpTransMgrSyncHive(ULONG_PTR a1)
{
  volatile signed __int64 *v2; // rdi
  char v3; // bl
  int v4; // esi
  char v6; // r14
  char v7; // cl

  CmpLockRegistry();
  v2 = (volatile signed __int64 *)(a1 + 72);
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 1) != 0 )
    goto LABEL_2;
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v6 = HvpMarkDirty(a1, 0, 0x20u, 0);
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( v6 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) |= 1u;
LABEL_2:
    v3 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
    KeAbPostRelease(a1 + 72);
    CmpUnlockRegistry();
    v4 = CmpFlushHive(a1, 0);
    if ( v4 < 0 )
      return (unsigned int)-1073741670;
    return (unsigned int)v4;
  }
  v4 = -1073741670;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  CmpUnlockRegistry();
  return (unsigned int)v4;
}
