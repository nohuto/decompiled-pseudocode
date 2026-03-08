/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180117C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CPrimitiveGroup::AddOcclusionInformation((CPrimitiveGroup *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
