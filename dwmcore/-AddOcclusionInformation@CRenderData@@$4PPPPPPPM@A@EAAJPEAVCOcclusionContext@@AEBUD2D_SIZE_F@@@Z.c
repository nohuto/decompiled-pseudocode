/*
 * XREFs of ?AddOcclusionInformation@CRenderData@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011A0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3,
        __int64 a4)
{
  return CRenderData::AddOcclusionInformation((CRenderData *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
