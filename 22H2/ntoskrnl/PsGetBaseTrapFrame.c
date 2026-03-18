/*
 * XREFs of PsGetBaseTrapFrame @ 0x140463240
 * Callers:
 *     PsPicoWalkUserStack @ 0x1409B525C (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x1409B68B0 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1402A6500 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
