/*
 * XREFs of DxgkEngGetRgnData @ 0x1C014D5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetRgnData(__int64 a1, __int64 a2, __int64 a3)
{
  return GreGetRegionData(a1, a2, a3);
}
