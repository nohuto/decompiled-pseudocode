/*
 * XREFs of sub_140A38080 @ 0x140A38080
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryThreadStartAddress @ 0x14025FB90 (PsQueryThreadStartAddress.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 */

__int64 __fastcall sub_140A38080(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2456)
    && (void (__noreturn *)())PsQueryThreadStartAddress((__int64)a2, 0) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2456) = a2;
  }
  return 0LL;
}
