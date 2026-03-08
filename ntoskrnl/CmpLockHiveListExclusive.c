/*
 * XREFs of CmpLockHiveListExclusive @ 0x140731734
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpJoinClassOfTrust @ 0x1402B38BC (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x1402BFCE8 (CmpUnJoinClassOfTrust.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 CmpLockHiveListExclusive()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = KeAbPreAcquire((__int64)&CmpHiveListHeadLock, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, result, (__int64)&CmpHiveListHeadLock);
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  return result;
}
