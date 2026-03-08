/*
 * XREFs of CmpAddToDelayedClose @ 0x1406B7220
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 * Callees:
 *     CmpArmDelayedCloseTimer @ 0x140243848 (CmpArmDelayedCloseTimer.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __fastcall CmpAddToDelayedClose(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  bool v4; // bl

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = (_QWORD *)(BugCheckParameter2 + 224);
  if ( (_QWORD *)*v2 != v2 )
    KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
  v3 = CmpDelayedLRUListHead;
  if ( *(__int64 **)(CmpDelayedLRUListHead + 8) != &CmpDelayedLRUListHead )
    __fastfail(3u);
  *v2 = CmpDelayedLRUListHead;
  *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
  *(_QWORD *)(v3 + 8) = v2;
  CmpDelayedLRUListHead = BugCheckParameter2 + 224;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
  ++qword_140D552E8;
  v4 = ++CmpDelayedCloseElements > (unsigned int)CmpDelayedCloseSize;
  ExReleaseFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  if ( v4 )
    CmpArmDelayedCloseTimer();
}
