/*
 * XREFs of CiThreadReferenceTaskIndex @ 0x1C0002DB0
 * Callers:
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B8B0 (CiCreateTaskIndexClientFromThread.c)
 * Callees:
 *     CiReleaseProcessLock @ 0x1C000BA80 (CiReleaseProcessLock.c)
 *     CiAcquireProcessLock @ 0x1C000BAB0 (CiAcquireProcessLock.c)
 */

__int64 __fastcall CiThreadReferenceTaskIndex(__int64 a1)
{
  __int64 v2; // rbx

  v2 = 0LL;
  CiAcquireProcessLock();
  if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 72);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 48)) <= 1 )
      __fastfail(0xEu);
  }
  CiReleaseProcessLock(a1);
  return v2;
}
