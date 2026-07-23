/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x1409C8520
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x1409C83D0 (IoIsValidIrpStatus.c)
 */

bool __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
