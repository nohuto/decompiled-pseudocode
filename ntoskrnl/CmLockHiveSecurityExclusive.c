/*
 * XREFs of CmLockHiveSecurityExclusive @ 0x140A1C7D8
 * Callers:
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14067D5F4 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmLockHiveSecurityExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 1784);
  result = KeAbPreAcquire(a1 + 1784, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
