/*
 * XREFs of ?GetDisplayId@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA?AVDisplayId@@XZ @ 0x18011FB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CRenderTargetBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CRenderTargetBitmap::GetDisplayId(a1 - *(int *)(a1 - 4) - 32, a2);
}
