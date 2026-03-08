/*
 * XREFs of ZwFilterBootOption @ 0x140414050
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140550F70 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
