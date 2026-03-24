/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B92D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x18004FD48 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x1800B9780 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800BA658 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x1800EFE48 (-ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // r9d
  int DrawList; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( !*((_QWORD *)this + 64) )
    return 0;
  v7 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  if ( v7 >= 0 )
  {
    DrawList = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(*((CPrimitiveGroupDrawListGenerator **)this + 21), a2);
    v7 = DrawList;
    if ( DrawList < 0 )
    {
      v12 = 136;
      goto LABEL_9;
    }
    DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(
                 *((CPrimitiveGroupDrawListGenerator **)this + 21),
                 a2,
                 0LL,
                 a4);
    v7 = DrawList;
    if ( DrawList < 0 )
    {
      v12 = 137;
LABEL_9:
      v9 = DrawList;
      goto LABEL_4;
    }
    return 0;
  }
  CPrimitiveGroup::ClearPrimitiveContent(this);
  v9 = v7;
  v12 = 133;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, v12, 0LL);
  return (unsigned int)v7;
}
