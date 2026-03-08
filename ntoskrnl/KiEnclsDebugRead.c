/*
 * XREFs of KiEnclsDebugRead @ 0x140417250
 * Callers:
 *     KeDebugReadEnclaveMemory @ 0x1409715B4 (KeDebugReadEnclaveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsDebugRead(__int64 a1, __int64 a2)
{
  __asm { encls }
  return a2;
}
