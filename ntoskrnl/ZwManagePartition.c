/*
 * XREFs of ZwManagePartition @ 0x140414630
 * Callers:
 *     ExpAddNonMirroredRanges @ 0x140B94B94 (ExpAddNonMirroredRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManagePartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
