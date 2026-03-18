/*
 * XREFs of VfMiscExAcquireSharedWaitForExclusive_Entry @ 0x140AC1810
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceAcquire @ 0x140AE241C (ViMiscCheckResourceAcquire.c)
 */

__int64 __fastcall VfMiscExAcquireSharedWaitForExclusive_Entry(__int64 a1)
{
  return ViMiscCheckResourceAcquire(*(_QWORD *)(a1 + 16));
}
