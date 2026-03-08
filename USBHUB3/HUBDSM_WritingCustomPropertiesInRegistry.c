/*
 * XREFs of HUBDSM_WritingCustomPropertiesInRegistry @ 0x1C0024BF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x1C008334C (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 */

__int64 __fastcall HUBDSM_WritingCustomPropertiesInRegistry(__int64 a1)
{
  return HUBMISC_ParseAndWriteCustomPropertiesInRegistry(*(_QWORD *)(a1 + 960));
}
