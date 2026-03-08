/*
 * XREFs of HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1C0012D30
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_IsD3ColdSupported @ 0x1C0033D00 (HUBMISC_IsD3ColdSupported.c)
 */

__int64 __fastcall HUBPSM30_CheckingIsD3ColdIsEnabled(__int64 a1)
{
  return HUBMISC_IsD3ColdSupported(*(_QWORD *)(a1 + 960));
}
