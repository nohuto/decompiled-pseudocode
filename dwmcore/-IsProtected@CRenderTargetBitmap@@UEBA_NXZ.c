/*
 * XREFs of ?IsProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18010821C
 * Callers:
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011E730 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ @ 0x18011F3F0 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ @ 0x18011F8F0 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ @ 0x18011FC30 (-IsProtected@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetBitmap::IsProtected(CRenderTargetBitmap *this)
{
  return *((_BYTE *)this - 95);
}
