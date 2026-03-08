/*
 * XREFs of strtol @ 0x1403D3258
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1405ACAB0 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1403D3030 (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
