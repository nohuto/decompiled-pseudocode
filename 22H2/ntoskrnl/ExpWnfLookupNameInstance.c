/*
 * XREFs of ExpWnfLookupNameInstance @ 0x140713240
 * Callers:
 *     ExpWnfCompleteThreadSubscriptions @ 0x140712024 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14071234C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140712974 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140712D00 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1407C98C0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1407CD8F0 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x14085C35C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 *     ExpWnfFindStateName @ 0x14071330C (ExpWnfFindStateName.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(__int64 a1, __int64 a2, __int64 *a3)
{
  signed __int64 *v3; // rdi
  unsigned __int64 v7; // rsi
  __int64 StateName; // rax
  __int64 v9; // rbx

  v3 = (signed __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0LL, v7, (__int64)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  StateName = ExpWnfFindStateName(a1, a2);
  v9 = StateName;
  if ( StateName )
    v9 = -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(StateName + 8)) != 0) & StateName;
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( !v9 )
    return 3221225524LL;
  *a3 = v9;
  return 0LL;
}
