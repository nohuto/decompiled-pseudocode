/*
 * XREFs of ?GetDisplayId@CD2DBitmap@@$4PPPPPPPM@OA@EBA?AVDisplayId@@XZ @ 0x18011BFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CD2DBitmap::GetDisplayId(a1 - *(int *)(a1 - 4) - 224, a2);
}
