/*
 * XREFs of islower @ 0x1403D4500
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x1403C9860 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405AC7A0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405AC8E0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405ACF10 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 2;
}
