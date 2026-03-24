/*
 * XREFs of isxdigit @ 0x1403D20C0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140390860 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14058C010 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14058C150 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x14058C330 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x14058C750 (RtlIpv6StringToAddressExA.c)
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
