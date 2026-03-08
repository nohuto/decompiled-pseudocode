/*
 * XREFs of ?GetTexture2D@CD2DBitmap@@UEAAPEAUID3D11Texture2D@@XZ @ 0x180107B08
 * Callers:
 *     ?GetTexture2D@CD2DBitmap@@$4PPPPPPPM@A@EAAPEAUID3D11Texture2D@@XZ @ 0x18011C070 (-GetTexture2D@CD2DBitmap@@$4PPPPPPPM@A@EAAPEAUID3D11Texture2D@@XZ.c)
 *     ?GetTexture2D@CD2DBitmap@@$4PPPPPPPM@CI@EAAPEAUID3D11Texture2D@@XZ @ 0x18011C330 (-GetTexture2D@CD2DBitmap@@$4PPPPPPPM@CI@EAAPEAUID3D11Texture2D@@XZ.c)
 *     ?GetTexture2D@CD2DBitmap@@$4PPPPPPPM@FI@EAAPEAUID3D11Texture2D@@XZ @ 0x18011F5D0 (-GetTexture2D@CD2DBitmap@@$4PPPPPPPM@FI@EAAPEAUID3D11Texture2D@@XZ.c)
 * Callees:
 *     <none>
 */

struct ID3D11Texture2D *__fastcall CD2DBitmap::GetTexture2D(CD2DBitmap *this)
{
  return (struct ID3D11Texture2D *)*((_QWORD *)this - 28);
}
