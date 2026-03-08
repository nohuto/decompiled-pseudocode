/*
 * XREFs of isdigit @ 0x1403D44D0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x1403C9860 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405AC7A0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405AC8E0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1405ACAB0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405ACF10 (RtlIpv6StringToAddressExA.c)
 *     I_MinAsn1ScanFrac @ 0x140A6E28C (I_MinAsn1ScanFrac.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140A6E30C (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A6E7D4 (MinAsn1DecodeUtcTime.c)
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
