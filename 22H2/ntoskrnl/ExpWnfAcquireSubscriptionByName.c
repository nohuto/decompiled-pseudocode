/*
 * XREFs of ExpWnfAcquireSubscriptionByName @ 0x140611AFC
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x140611A40 (NtUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionByName(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF **a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v7; // rsi
  _QWORD *i; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  __int64 result; // rax

  v3 = (unsigned __int64 *)(a2 + 80);
  v7 = KeAbPreAcquire(a2 + 80, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, v7, (ULONG_PTR)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  for ( i = *(_QWORD **)(a2 + 88); i != (_QWORD *)(a2 + 88); i = (_QWORD *)*i )
  {
    v9 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( i[4] == a1 )
    {
      ExAcquireRundownProtection(v9 + 1);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v3);
      KeAbPostRelease((ULONG_PTR)v3);
      result = 0LL;
      *a3 = v9;
      return result;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return 3221225524LL;
}
