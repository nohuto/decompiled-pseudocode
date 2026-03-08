/*
 * XREFs of ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1800D8EBC
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1800D89A0 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x18001F268 (-EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180045798 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800615C0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D8FB0 (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x1800D90E8 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CSpriteVectorShape::ComputeBounds(CSpriteVectorShape *this)
{
  CGeometry *v2; // rcx
  bool v3; // al
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  *((_WORD *)this + 48) = 0;
  v2 = (CGeometry *)*((_QWORD *)this + 15);
  v6 = 0LL;
  v7 = 0;
  if ( v2 )
    CGeometry::GetShapeData(v2, 0LL, (struct CShapePtr *)&v6);
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v6) )
  {
    if ( *((_QWORD *)this + 14) && (int)CSpriteVectorShape::EnsureStrokeStyleForBounds(this) >= 0 )
      *((_BYTE *)this + 97) = (int)CShapePtr::GetWidenedBounds(&v6, (char *)this + 80, v5, *((_QWORD *)this + 16)) >= 0;
    if ( *((_BYTE *)this + 97)
      || *((_QWORD *)this + 13) && (v3 = (int)CShapePtr::GetTightBounds(&v6) >= 0, (*((_BYTE *)this + 97) = v3) != 0) )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)this + 20, 0.25, 0.25);
      *((_BYTE *)this + 97) = (int)CShapePtr::GetWidenedBounds(&v6, (char *)this + 144, v4, 0LL) >= 0;
    }
  }
  CShapePtr::Release((CShapePtr *)&v6);
}
