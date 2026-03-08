/*
 * XREFs of CmpLockHashEntrySharedByKcb @ 0x1407A898C
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1407AB230 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntrySharedByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rsi
  signed __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (signed __int64 *)(*(_QWORD *)(v2 + 1648)
                        + 24
                        * ((unsigned int)(*(_DWORD *)(v2 + 1656) - 1) & ((unsigned int)(101027
                                                                                      * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
  v4 = KeAbPreAcquire((__int64)v3, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v4, (__int64)v3);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  result = CmpReferenceHive(v2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 7uLL, BugCheckParameter4);
  return result;
}
