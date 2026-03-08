/*
 * XREFs of USBD_VerifierSettingsCallback @ 0x1C0041FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall USBD_VerifierSettingsCallback(__int64 a1, int a2, _DWORD *a3, int a4, int a5, _DWORD *a6)
{
  if ( a2 != 4 )
    return 3221225485LL;
  if ( a4 != 4 )
    return 3221225701LL;
  if ( a6 != a3 )
    *a6 = *a3;
  return 0LL;
}
