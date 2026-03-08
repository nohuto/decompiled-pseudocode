/*
 * XREFs of ?GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@7EBA?AVDisplayId@@XZ @ 0x18011F330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CRenderTargetBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CRenderTargetBitmap::GetDisplayId(a1 - *(int *)(a1 - 4) - 8, a2);
}
