/*
 * XREFs of ?GetTextureOffset@CHolographicInteropTexture@@UEAAXPEAH0@Z @ 0x180107E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicInteropTexture::GetTextureOffset(CHolographicInteropTexture *this, int *a2, int *a3)
{
  *a2 = *((_DWORD *)this + 45);
  *a3 = *((_DWORD *)this + 46);
}
