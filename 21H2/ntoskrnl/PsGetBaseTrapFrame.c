/*
 * XREFs of PsGetBaseTrapFrame @ 0x140581560
 * Callers:
 *     PsPicoWalkUserStack @ 0x14090BB4C (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x14090D330 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1402658C0 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1, _DWORD *a2)
{
  return PspGetBaseTrapFrame(a1, a2);
}
