/*
 * XREFs of HvLockHiveFlusherShared @ 0x14074A8FC
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402BFC14 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14067D5F4 (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall HvLockHiveFlusherShared(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  __int64 v2; // rbx
  signed __int64 result; // rax

  v1 = (volatile signed __int64 *)(a1 + 72);
  v2 = KeAbPreAcquire(a1 + 72, 0LL);
  result = _InterlockedCompareExchange64(v1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v1, 0, v2, (__int64)v1);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
