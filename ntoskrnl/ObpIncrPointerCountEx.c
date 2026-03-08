/*
 * XREFs of ObpIncrPointerCountEx @ 0x140352120
 * Callers:
 *     ObFastReplaceObject @ 0x140217FC8 (ObFastReplaceObject.c)
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     ObpFastReplenishReference @ 0x1403520A4 (ObpFastReplenishReference.c)
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     ObInitializeFastReference @ 0x14070A3AC (ObInitializeFastReference.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandle @ 0x1407DF424 (ObpReferenceObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
