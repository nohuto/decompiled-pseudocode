/*
 * XREFs of DxgkEngReleaseDC @ 0x1C014D640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngReleaseDC(__int64 a1, __int64 a2)
{
  if ( a2 )
    return GrepDeleteDC(a2, 20971520LL);
  else
    return UserReleaseDC(a1);
}
