/*
 * XREFs of ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x1801D6CF8
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180078C48 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180078E40 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x1801D7334 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ClipPlaneIterator::HasMoreClipPlanes(ClipPlaneIterator *this)
{
  return *((_DWORD *)this + 2) < *((_DWORD *)this + 12) || *((_DWORD *)this + 3) < *((_DWORD *)this + 28);
}
