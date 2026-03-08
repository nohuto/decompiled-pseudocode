/*
 * XREFs of CmpLockDeletedHashEntryExclusiveByKcb @ 0x14074B1B8
 * Callers:
 *     CmpDiscardKcb @ 0x14074B098 (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407AF820 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x1407AB230 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockDeletedHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned __int64 *)(*(_QWORD *)(v2 + 1664)
                          + 24
                          * ((unsigned int)(*(_DWORD *)(v2 + 1672) - 1) & ((unsigned int)(101027
                                                                                        * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
  v4 = KeAbPreAcquire((__int64)v3, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (__int64)v3);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  v3[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(v2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
  return result;
}
