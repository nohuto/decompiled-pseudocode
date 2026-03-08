/*
 * XREFs of ?GetDisplayId@CD2DBitmap@@$4PPPPPPPM@BAI@EBA?AVDisplayId@@XZ @ 0x18011C270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CD2DBitmap::GetDisplayId(a1 - *(int *)(a1 - 4) - 264, a2);
}
