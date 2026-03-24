/*
 * XREFs of ZwFlushInstructionCache @ 0x1403FB740
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 *     sub_140963D98 @ 0x140963D98 (sub_140963D98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
