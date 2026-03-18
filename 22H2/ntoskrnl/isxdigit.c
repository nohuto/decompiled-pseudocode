/*
 * XREFs of isxdigit @ 0x1403D9AE0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x1403CEE10 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405AEC50 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405AED90 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1405AEF60 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405AF3C0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 0x80;
}
