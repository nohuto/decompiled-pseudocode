/*
 * XREFs of ?GetDisplayId@CD2DBitmap@@UEBA?AVDisplayId@@XZ @ 0x180107A90
 * Callers:
 *     ?GetDisplayId@CD2DBitmap@@$4PPPPPPPM@OA@EBA?AVDisplayId@@XZ @ 0x18011BFF0 (-GetDisplayId@CD2DBitmap@@$4PPPPPPPM@OA@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CD2DBitmap@@$4PPPPPPPM@BAI@EBA?AVDisplayId@@XZ @ 0x18011C270 (-GetDisplayId@CD2DBitmap@@$4PPPPPPPM@BAI@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 140);
  return a2;
}
