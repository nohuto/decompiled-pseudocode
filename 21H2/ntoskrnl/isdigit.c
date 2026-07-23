/*
 * XREFs of isdigit @ 0x1403D2840
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x1403910B0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14058C300 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14058C440 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x14058C620 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x14058CA40 (RtlIpv6StringToAddressExA.c)
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
