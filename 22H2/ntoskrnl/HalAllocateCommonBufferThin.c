/*
 * XREFs of HalAllocateCommonBufferThin @ 0x1404CA9E0
 * Callers:
 *     <none>
 * Callees:
 *     HalAllocateCommonBufferExThin @ 0x1404CA940 (HalAllocateCommonBufferExThin.c)
 */

__int64 __fastcall HalAllocateCommonBufferThin(__int64 a1, unsigned int a2, _QWORD *a3)
{
  return HalAllocateCommonBufferExThin(a1, 0LL, a2, a3, 1, 0x80000000);
}
