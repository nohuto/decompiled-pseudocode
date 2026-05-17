/*
 * XREFs of islower @ 0x18008D120
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x180078C80 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x180078D10 (RtlIpv4StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x18007D680 (RtlIpv6StringToAddressExA.c)
 *     RtlEthernetStringToAddressA @ 0x1800FBE30 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_180166150[v1] & 2;
}
