/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1C0098A0C
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C000BA98 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     ACPIQueryDeviceBiosNameEx @ 0x1C0043BC4 (ACPIQueryDeviceBiosNameEx.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosName(ULONG_PTR a1, struct _UNICODE_STRING *a2)
{
  return ACPIQueryDeviceBiosNameEx(a1, 1, a2);
}
