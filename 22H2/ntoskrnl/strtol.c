/*
 * XREFs of strtol @ 0x1403D0DA0
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x14058C330 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1403D0B70 (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
