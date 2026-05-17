/*
 * XREFs of TpTimerOutstandingCallbackCount @ 0x180009BB0
 * Callers:
 *     RtlDeleteTimer @ 0x180009C00 (RtlDeleteTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x180084D30 (RtlDeleteTimerQueueEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x180012914 (TppTimerpValidateTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall TpTimerOutstandingCallbackCount(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx

  if ( !(unsigned int)TppTimerpValidateTimer(a1, 0LL, 0LL) )
    return 0LL;
  v2 = a1 + 240;
  RtlAcquireSRWLockExclusive(a1 + 240);
  v3 = *(_DWORD *)(a1 + 56);
  RtlReleaseSRWLockExclusive(v2);
  return v3;
}
