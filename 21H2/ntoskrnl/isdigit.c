/*
 * XREFs of isdigit @ 0x1403E1A90
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14039E7C0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405EB6E0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405EB820 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1405EBA00 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405EBE60 (RtlIpv6StringToAddressExA.c)
 *     I_MinAsn1ScanFrac @ 0x140A33580 (I_MinAsn1ScanFrac.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140A33600 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140A33AD0 (MinAsn1DecodeUtcTime.c)
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
