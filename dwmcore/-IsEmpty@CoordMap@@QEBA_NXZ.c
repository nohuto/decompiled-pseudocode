/*
 * XREFs of ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x18002FA18
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18002F110 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180076750 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     <none>
 */

bool __fastcall CoordMap::IsEmpty(CoordMap *this)
{
  return ((*((_QWORD *)this + 1) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF0uLL) == 0
      && ((*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) & 0xFFFFFFFFFFFFFFF0uLL) == 0
      && ((*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) & 0xFFFFFFFFFFFFFFF0uLL) == 0;
}
