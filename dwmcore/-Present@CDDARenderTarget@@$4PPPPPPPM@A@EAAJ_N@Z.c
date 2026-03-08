/*
 * XREFs of ?Present@CDDARenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180119830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDARenderTarget::Present(__int64 a1, bool a2)
{
  return CDDARenderTarget::Present((CDDARenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
