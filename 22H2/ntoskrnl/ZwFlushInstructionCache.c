/*
 * XREFs of ZwFlushInstructionCache @ 0x14041C480
 * Callers:
 *     DifZwFlushInstructionCacheWrapper @ 0x1405F0620 (DifZwFlushInstructionCacheWrapper.c)
 *     sub_140762650 @ 0x140762650 (sub_140762650.c)
 *     sub_140764BA0 @ 0x140764BA0 (sub_140764BA0.c)
 *     sub_140A4DE34 @ 0x140A4DE34 (sub_140A4DE34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
