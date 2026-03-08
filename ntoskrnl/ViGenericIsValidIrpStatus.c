/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x140AC00A0
 * Callers:
 *     <none>
 * Callees:
 *     IoIsValidIrpStatus @ 0x140ABFF50 (IoIsValidIrpStatus.c)
 */

bool __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
