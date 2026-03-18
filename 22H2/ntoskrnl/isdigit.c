/*
 * XREFs of isdigit @ 0x1403D99F0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x1403CEE10 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405AEC50 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405AED90 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1405AEF60 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405AF3C0 (RtlIpv6StringToAddressExA.c)
 *     I_MinAsn1ScanFrac @ 0x140A70F8C (I_MinAsn1ScanFrac.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140A7100C (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A714D4 (MinAsn1DecodeUtcTime.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 4;
}
