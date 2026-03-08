/*
 * XREFs of ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016794
 * Callers:
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180016720 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CPrimitiveGroup::GetLargestOpaqueRect(__int64 a1, _DWORD *a2)
{
  char result; // al

  result = 0;
  if ( *(_QWORD *)(a1 + 472) )
  {
    if ( a2 )
    {
      *a2 = *(_DWORD *)(a1 + 524);
      a2[1] = *(_DWORD *)(a1 + 528);
      a2[2] = *(_DWORD *)(a1 + 532);
      a2[3] = *(_DWORD *)(a1 + 536);
      return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) ^ 1;
    }
  }
  return result;
}
