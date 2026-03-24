/*
 * XREFs of IopReleaseActiveConnectLock @ 0x140761DDC
 * Callers:
 *     IoDisconnectInterrupt @ 0x140761030 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1407617EC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4EE0 (IopAcquireReleaseConnectLockInternal.c)
 */

__int64 __fastcall IopReleaseActiveConnectLock(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
    return IopAcquireReleaseConnectLockInternal(a1, 0LL, 0LL);
  return result;
}
