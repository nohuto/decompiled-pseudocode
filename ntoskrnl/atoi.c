/*
 * XREFs of atoi @ 0x1403D36E0
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140A6E30C (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A6E7D4 (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140B672C8 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403D3700 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
