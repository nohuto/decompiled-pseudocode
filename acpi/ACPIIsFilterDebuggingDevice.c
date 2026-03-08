/*
 * XREFs of ACPIIsFilterDebuggingDevice @ 0x1C009811C
 * Callers:
 *     ACPIBuildFilter @ 0x1C000D1F8 (ACPIBuildFilter.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsFilterDebuggingDevice(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 784) + 48LL) & 0x2000000) != 0;
}
