/*
 * XREFs of ?Draw@CDropShadow@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180119CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDropShadow::Draw(
        __int64 a1,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CDropShadow::Draw((CDropShadow *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
