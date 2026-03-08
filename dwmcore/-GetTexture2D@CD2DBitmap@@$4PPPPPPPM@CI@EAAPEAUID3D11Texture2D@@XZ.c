/*
 * XREFs of ?GetTexture2D@CD2DBitmap@@$4PPPPPPPM@CI@EAAPEAUID3D11Texture2D@@XZ @ 0x18011C330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11Texture2D *__fastcall CD2DBitmap::GetTexture2D(__int64 a1)
{
  return CD2DBitmap::GetTexture2D((CD2DBitmap *)(a1 - *(int *)(a1 - 4) - 40));
}
