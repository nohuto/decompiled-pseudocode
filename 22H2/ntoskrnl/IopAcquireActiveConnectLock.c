/*
 * XREFs of IopAcquireActiveConnectLock @ 0x140761E00
 * Callers:
 *     IoDisconnectInterrupt @ 0x140761030 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1407617EC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4EE0 (IopAcquireReleaseConnectLockInternal.c)
 */

__int64 __fastcall IopAcquireActiveConnectLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
  {
    LOBYTE(a2) = 1;
    return IopAcquireReleaseConnectLockInternal(a1, a2, 0LL);
  }
  return result;
}
