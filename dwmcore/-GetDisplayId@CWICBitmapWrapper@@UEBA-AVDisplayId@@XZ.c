/*
 * XREFs of ?GetDisplayId@CWICBitmapWrapper@@UEBA?AVDisplayId@@XZ @ 0x180105C70
 * Callers:
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x18011DA30 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA?AVDisplayId@@XZ @ 0x18011DA50 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA?AVDisplayId@@XZ @ 0x18011DEB0 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA?AVDisplayId@@XZ @ 0x18011F550 (-GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CWICBitmapWrapper::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = DisplayId::None;
  return a2;
}
