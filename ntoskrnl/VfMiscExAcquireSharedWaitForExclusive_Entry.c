/*
 * XREFs of VfMiscExAcquireSharedWaitForExclusive_Entry @ 0x140ABD810
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceAcquire @ 0x140ADE41C (ViMiscCheckResourceAcquire.c)
 */

__int64 __fastcall VfMiscExAcquireSharedWaitForExclusive_Entry(__int64 a1)
{
  return ViMiscCheckResourceAcquire(*(_QWORD *)(a1 + 16));
}
