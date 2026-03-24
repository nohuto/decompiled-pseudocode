/*
 * XREFs of ZwFilterBootOption @ 0x1403FC020
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x1405042D0 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
