/*
 * XREFs of __isascii @ 0x1403D44B0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x1403C9860 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1405AC7A0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1405AC8E0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1405ACAB0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1405ACF10 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
