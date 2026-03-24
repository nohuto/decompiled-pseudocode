/*
 * XREFs of ZwFlushInstructionCache @ 0x1403FC0C0
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D772C (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_140686D40 @ 0x140686D40 (sub_140686D40.c)
 *     sub_140963D48 @ 0x140963D48 (sub_140963D48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushInstructionCache(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
