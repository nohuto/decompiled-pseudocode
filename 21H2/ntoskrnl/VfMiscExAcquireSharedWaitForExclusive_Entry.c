/*
 * XREFs of VfMiscExAcquireSharedWaitForExclusive_Entry @ 0x140AA3C00
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceAcquire @ 0x140AA56FC (ViMiscCheckResourceAcquire.c)
 */

__int64 __fastcall VfMiscExAcquireSharedWaitForExclusive_Entry(__int64 a1)
{
  return ViMiscCheckResourceAcquire(*(_QWORD *)(a1 + 16));
}
