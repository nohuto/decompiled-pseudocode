/*
 * XREFs of RtlQueryRegistryValues @ 0x1800EE750
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValues(int a1, WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4, a5, 0);
}
