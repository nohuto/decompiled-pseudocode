/*
 * XREFs of DebugO @ 0x1C004DC80
 * Callers:
 *     <none>
 * Callees:
 *     DebugOutPort @ 0x1C004DCE0 (DebugOutPort.c)
 */

__int64 __fastcall DebugO(__int64 a1, __int64 a2)
{
  return DebugOutPort(a2, 1LL);
}
