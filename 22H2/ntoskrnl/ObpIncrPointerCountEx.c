/*
 * XREFs of ObpIncrPointerCountEx @ 0x140314E74
 * Callers:
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     ObReferenceFileObjectForWrite @ 0x1406C92D0 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
