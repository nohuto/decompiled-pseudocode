/*
 * XREFs of ?IsValid@CDrawListBitmap@@QEBA_NXZ @ 0x1801FD218
 * Callers:
 *     ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801FCC70 (-EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawListBitmap::IsValid(CDrawListBitmap *this)
{
  return *((_QWORD *)this + 1) != 0LL;
}
