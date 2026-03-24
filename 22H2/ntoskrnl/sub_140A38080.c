/*
 * XREFs of sub_140A38080 @ 0x140A38080
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryThreadStartAddress @ 0x14025F3F0 (PsQueryThreadStartAddress.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
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
