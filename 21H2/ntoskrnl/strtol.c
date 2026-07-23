/*
 * XREFs of strtol @ 0x1403D1610
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x14058C620 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1403D13E0 (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
