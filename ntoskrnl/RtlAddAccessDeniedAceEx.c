/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x14081E180
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x140B5B788 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedAceEx(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src)
{
  return RtlpAddKnownAce(a1, a2, a3, a4, Src, 1);
}
