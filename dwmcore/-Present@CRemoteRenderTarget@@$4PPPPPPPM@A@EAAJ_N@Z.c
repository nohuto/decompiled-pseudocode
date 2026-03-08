/*
 * XREFs of ?Present@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x180118990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::Present(__int64 a1, char a2)
{
  return CRemoteRenderTarget::Present((CRemoteRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
