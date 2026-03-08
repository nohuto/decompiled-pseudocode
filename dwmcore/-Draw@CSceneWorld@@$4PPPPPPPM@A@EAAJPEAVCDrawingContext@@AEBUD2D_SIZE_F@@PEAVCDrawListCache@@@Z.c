/*
 * XREFs of ?Draw@CSceneWorld@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSceneWorld::Draw(
        __int64 a1,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  return CSceneWorld::Draw((CSceneWorld *)(a1 - *(int *)(a1 - 4)), a2, a3, a4);
}
