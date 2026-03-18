/*
 * XREFs of ZwFilterBootOption @ 0x14041C3E0
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140553410 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x1407268C0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
