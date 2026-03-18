/*
 * XREFs of ZwFilterBootOption @ 0x14041D480
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140554988 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
