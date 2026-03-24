/*
 * XREFs of PsGetBaseTrapFrame @ 0x140581320
 * Callers:
 *     PsPicoWalkUserStack @ 0x14090B9EC (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x14090D1D0 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x140277920 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
