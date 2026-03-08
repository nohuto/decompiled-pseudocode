/*
 * XREFs of PsGetBaseTrapFrame @ 0x14045B2A0
 * Callers:
 *     PsPicoWalkUserStack @ 0x1409B220C (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x1409B3880 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1402822C0 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
