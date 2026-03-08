/*
 * XREFs of ?GetSize@CRenderTarget@@$4PPPPPPPM@EIJA@EBA?AUD2D_SIZE_U@@XZ @ 0x180118650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(__int64 a1, _QWORD *a2)
{
  return CRenderTarget::GetSize((CRenderTarget *)(a1 - *(int *)(a1 - 4) - 18576), a2);
}
