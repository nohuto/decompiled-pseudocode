/*
 * XREFs of ?AddOcclusionInformation@CVectorShape@@$4PPPPPPPM@BI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180117C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVectorShape::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CVectorShape::AddOcclusionInformation((CVectorShape *)(a1 - *(int *)(a1 - 4) - 24), a2, a3);
}
