/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedPropertyDescriptor @ 0x1C0024AA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor @ 0x1C0032908 (HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedPropertyDescriptor(__int64 a1)
{
  return HUBMISC_ValidateAndCacheMSOSExtendedPropertyDescriptor(*(_QWORD *)(a1 + 960));
}
