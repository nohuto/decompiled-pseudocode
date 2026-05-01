/*
 * XREFs of HamDisconnectForFullTrust @ 0x1800021D0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x1800021E8 (HampConnectionDestroy.c)
 */

__int64 HamDisconnectForFullTrust()
{
  HampConnectionDestroy();
  return 0LL;
}
