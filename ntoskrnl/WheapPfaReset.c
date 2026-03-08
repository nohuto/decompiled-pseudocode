/*
 * XREFs of WheapPfaReset @ 0x140A06240
 * Callers:
 *     WheapCommitPolicy @ 0x140A06A08 (WheapCommitPolicy.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     WheapApplyPolicyChanges @ 0x140A06724 (WheapApplyPolicyChanges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

signed __int32 WheapPfaReset()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rbx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  PVOID *v5; // rcx
  PVOID **v6; // rdx

  v0 = KeAbPreAcquire((__int64)&WheapPfaLock, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v0, (__int64)&WheapPfaLock);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  WheapApplyPolicyChanges();
  v3 = (PVOID *)WheapPfaList;
  while ( v3 != &WheapPfaList )
  {
    v4 = (PVOID *)*v3;
    v5 = v3;
    v3 = v4;
    if ( v4[1] != v5 || (v6 = (PVOID **)v5[1], *v6 != v5) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    ExFreePoolWithTag(v5, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
  return KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
}
