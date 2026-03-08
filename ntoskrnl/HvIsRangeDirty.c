/*
 * XREFs of HvIsRangeDirty @ 0x140A22C54
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlAreBitsClear @ 0x14036C910 (RtlAreBitsClear.c)
 */

bool __fastcall HvIsRangeDirty(__int64 a1, int a2, ULONG a3)
{
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  BOOLEAN v9; // di

  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 || a2 < 0 )
    return 1;
  v6 = (unsigned __int64 *)(a1 + 80);
  v7 = KeAbPreAcquire(a1 + 80, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), (unsigned int)a2 >> 9, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v9 == 0;
}
