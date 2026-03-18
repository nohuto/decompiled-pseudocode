/*
 * XREFs of ?IsWarpFastPathEnabled@CDrawingContext@@QEBA_NXZ @ 0x1800B4274
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x180010390 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B5120 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B2900 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DBDB4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 */

char __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  char v1; // bl
  CMILMatrix *TopByReference; // rax

  v1 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 568LL) )
  {
    if ( !CCommonRegistryData::UseHWDrawListEntriesOnWARP )
    {
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
      if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference) )
      {
        if ( (*((_DWORD *)this + 164) || !*((_DWORD *)this + 146)) && !*((_QWORD *)this + 428) )
          return 1;
      }
    }
  }
  return v1;
}
