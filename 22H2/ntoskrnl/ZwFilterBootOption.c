/*
 * XREFs of ZwFilterBootOption @ 0x1403FB6A0
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140503F50 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
