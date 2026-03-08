/*
 * XREFs of DebugID @ 0x1C004D9D0
 * Callers:
 *     <none>
 * Callees:
 *     DebugInPort @ 0x1C004DA10 (DebugInPort.c)
 */

__int64 __fastcall DebugID(__int64 a1, __int64 a2)
{
  return DebugInPort(a2, 4LL);
}
