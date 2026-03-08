/*
 * XREFs of ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180119F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrush::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CBrush::AddOcclusionInformation((CBrush *)(a1 - *(int *)(a1 - 4) - 72), a2, a3);
}
