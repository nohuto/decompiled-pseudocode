/*
 * XREFs of ?ActivateTexture@CHolographicInteropTexture@@UEAAXXZ @ 0x180107E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::ActivateTexture(CHolographicInteropTexture *this)
{
  *((_BYTE *)this + 152) = 1;
  *((_BYTE *)this + 160) = 1;
}
