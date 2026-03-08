/*
 * XREFs of ExpWnfLookupNameInstance @ 0x14071A330
 * Callers:
 *     ExpWnfCompleteThreadSubscriptions @ 0x140719114 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14071943C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140719A64 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140719DF0 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x140778FE0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14077DEB0 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x14085860C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExpWnfFindStateName @ 0x14071A3FC (ExpWnfFindStateName.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(__int64 a1, __int64 a2, __int64 *a3)
{
  signed __int64 *v3; // rdi
  __int64 v7; // rsi
  __int64 StateName; // rax
  __int64 v9; // rbx

  v3 = (signed __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v7, (__int64)v3);
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
