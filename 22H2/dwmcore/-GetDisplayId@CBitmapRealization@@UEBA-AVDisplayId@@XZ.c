/*
 * XREFs of ?GetDisplayId@CBitmapRealization@@UEBA?AVDisplayId@@XZ @ 0x1800E3774
 * Callers:
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@A@EBA?AVDisplayId@@XZ @ 0x1800F7EF0 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@A@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FI@EBA?AVDisplayId@@XZ @ 0x1800F8350 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@FI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@HI@EBA?AVDisplayId@@XZ @ 0x1800F8360 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@HI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x1800F8620 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@II@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@MA@EBA?AVDisplayId@@XZ @ 0x1800F87E0 (-GetDisplayId@CBitmapRealization@@$4PPPPPPPM@MA@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 - 96);
  return a2;
}
