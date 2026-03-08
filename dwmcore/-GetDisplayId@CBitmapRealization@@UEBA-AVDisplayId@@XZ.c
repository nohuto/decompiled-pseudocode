/*
 * XREFs of ?GetDisplayId@CBitmapRealization@@UEBA?AVDisplayId@@XZ @ 0x1801080EC
 * Callers:
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@A@EBA?AVDisplayId@@XZ @ 0x18011DA10 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@A@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FI@EBA?AVDisplayId@@XZ @ 0x18011E1B0 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@HI@EBA?AVDisplayId@@XZ @ 0x18011E1D0 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@HI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x18011E8F0 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@II@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@MA@EBA?AVDisplayId@@XZ @ 0x18011EB70 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@MA@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FA@EBA?AVDisplayId@@XZ @ 0x18011EE70 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FA@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 - 96);
  return a2;
}
