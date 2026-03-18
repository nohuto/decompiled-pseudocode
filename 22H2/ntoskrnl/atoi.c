/*
 * XREFs of atoi @ 0x1403D8C00
 * Callers:
 *     MinAsn1DecodeGeneralizedTime @ 0x140A7100C (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A714D4 (MinAsn1DecodeUtcTime.c)
 *     KiInitializeBootStructures @ 0x140A8BDF0 (KiInitializeBootStructures.c)
 *     HalpMiscGetParameters @ 0x140B6B158 (HalpMiscGetParameters.c)
 * Callees:
 *     atol @ 0x1403D8C20 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
