/*
 * XREFs of ZwManagePartition @ 0x14041DA60
 * Callers:
 *     ExpAddNonMirroredRanges @ 0x140B5439C (ExpAddNonMirroredRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManagePartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
