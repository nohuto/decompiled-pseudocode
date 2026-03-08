/*
 * XREFs of ?AddOcclusionInformation@CSnapshot@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180117C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSnapshot::AddOcclusionInformation(
        __int64 a1,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CSnapshot::AddOcclusionInformation((CSnapshot *)(a1 - *(int *)(a1 - 4)), a2, a3);
}
