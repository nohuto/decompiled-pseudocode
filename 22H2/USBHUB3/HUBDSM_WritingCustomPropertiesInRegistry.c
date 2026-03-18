/*
 * XREFs of HUBDSM_WritingCustomPropertiesInRegistry @ 0x1C0024AE0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x1C0082380 (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 */

__int64 __fastcall HUBDSM_WritingCustomPropertiesInRegistry(__int64 a1)
{
  return HUBMISC_ParseAndWriteCustomPropertiesInRegistry(*(_QWORD *)(a1 + 960));
}
