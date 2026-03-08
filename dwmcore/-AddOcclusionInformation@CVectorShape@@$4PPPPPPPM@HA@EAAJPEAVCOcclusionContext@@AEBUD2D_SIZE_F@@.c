/*
 * XREFs of ?AddOcclusionInformation@CVectorShape@@$4PPPPPPPM@HA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180117CB0
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
  return CVectorShape::AddOcclusionInformation((CVectorShape *)(a1 - *(int *)(a1 - 4) - 112), a2, a3);
}
