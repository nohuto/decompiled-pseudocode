/*
 * XREFs of ?GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA?AVDisplayId@@XZ @ 0x18011F550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSecondaryD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CWICBitmapWrapper::GetDisplayId(a1 - *(int *)(a1 - 4) - 312, a2);
}
