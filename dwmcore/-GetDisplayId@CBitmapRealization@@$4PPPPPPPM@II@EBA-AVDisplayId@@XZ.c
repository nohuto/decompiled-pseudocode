/*
 * XREFs of ?GetDisplayId@CBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x18011E8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CBitmapRealization::GetDisplayId(a1 - *(int *)(a1 - 4) - 136, a2);
}
