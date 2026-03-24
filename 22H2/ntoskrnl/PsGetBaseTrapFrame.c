/*
 * XREFs of PsGetBaseTrapFrame @ 0x140581260
 * Callers:
 *     PsPicoWalkUserStack @ 0x14090BA3C (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x14090D220 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x140340930 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
