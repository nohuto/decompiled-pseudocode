/*
 * XREFs of islower @ 0x1403D2700
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140390F60 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x14058C0D0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x14058C210 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x14058C810 (RtlIpv6StringToAddressExA.c)
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
