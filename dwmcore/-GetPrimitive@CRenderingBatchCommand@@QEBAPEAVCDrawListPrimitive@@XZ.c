/*
 * XREFs of ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x180202370
 * Callers:
 *     ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180205454 (-EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z.c)
 *     ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1802B4F40 (-EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCo.c)
 * Callees:
 *     <none>
 */

struct CDrawListPrimitive *__fastcall CRenderingBatchCommand::GetPrimitive(CRenderingBatchCommand *this)
{
  if ( *(_DWORD *)this == 4 )
    return CMegaRectBatchCommand::GetPrimitive(this);
  else
    return *(struct CDrawListPrimitive **)(*((_QWORD *)this + 1) + 64LL);
}
