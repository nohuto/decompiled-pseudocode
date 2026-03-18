/*
 * XREFs of PsGetBaseTrapFrame @ 0x14045ECB0
 * Callers:
 *     PsPicoWalkUserStack @ 0x1409B205C (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x1409B35D0 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x140298A10 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
