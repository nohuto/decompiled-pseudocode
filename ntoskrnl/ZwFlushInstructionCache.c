/*
 * XREFs of ZwFlushInstructionCache @ 0x1404140F0
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x1405EE170 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_1407538E4 @ 0x1407538E4 (sub_1407538E4.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 *     sub_140A4B164 @ 0x140A4B164 (sub_140A4B164.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
