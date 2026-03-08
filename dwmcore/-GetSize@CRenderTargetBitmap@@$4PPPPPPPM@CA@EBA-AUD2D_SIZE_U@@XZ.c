/*
 * XREFs of ?GetSize@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA?AUD2D_SIZE_U@@XZ @ 0x18011FBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTargetBitmap::GetSize(__int64 a1, _DWORD *a2)
{
  return CRenderTargetBitmap::GetSize((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32), a2);
}
