/*
 * XREFs of ?IsProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x180108D5C
 * Callers:
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801228E0 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ @ 0x1801235A0 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ @ 0x180123AA0 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x180123DE0 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetBitmap::IsProtected(CRenderTargetBitmap *this)
{
  return *((_BYTE *)this - 95);
}
