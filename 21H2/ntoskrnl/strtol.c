/*
 * XREFs of strtol @ 0x1403D14A0
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x14058C3F0 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1403D1270 (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
