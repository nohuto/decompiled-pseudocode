/*
 * XREFs of ?GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ @ 0x1801166B0
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C400 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     <none>
 */

struct CD2DTarget *__fastcall CD2DContext::GetCurrentTargetNoRef(CD2DContext *this)
{
  int v1; // edx
  struct CD2DTarget *result; // rax

  v1 = *((_DWORD *)this + 88);
  result = 0LL;
  if ( v1 )
    return *(struct CD2DTarget **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v1 - 1));
  return result;
}
