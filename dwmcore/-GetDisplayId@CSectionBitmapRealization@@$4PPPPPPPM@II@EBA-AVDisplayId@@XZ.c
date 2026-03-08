/*
 * XREFs of ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x18011DA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSectionBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CWICBitmapWrapper::GetDisplayId(a1 - *(int *)(a1 - 4) - 136, a2);
}
