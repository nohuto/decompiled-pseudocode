/*
 * XREFs of ObpIncrPointerCountEx @ 0x140224680
 * Callers:
 *     ObpFastReplenishReference @ 0x140224604 (ObpFastReplenishReference.c)
 *     ObFastReplaceObject @ 0x14029A458 (ObFastReplaceObject.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     ObInitializeFastReference @ 0x1406B69CC (ObInitializeFastReference.c)
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpReferenceObjectByHandle @ 0x14074A44C (ObpReferenceObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
