/*
 * XREFs of ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180103590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800615C0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800921D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800F03A0 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CProxyGeometry::GetShapeDataCore(
        CProxyGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  CGeometry *v3; // rcx
  unsigned int v4; // ebx
  int ShapeData; // eax
  __int64 v7; // rcx
  CRectanglesShape *v9; // rax
  __int64 v10; // rcx
  CRectanglesShape *v11; // rsi

  v3 = (CGeometry *)*((_QWORD *)this + 18);
  v4 = 0;
  if ( v3 )
  {
    ShapeData = CGeometry::GetShapeData(v3, a2, a3);
    v4 = ShapeData;
    if ( ShapeData < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ShapeData, 0x37u, 0LL);
  }
  else
  {
    v9 = (CRectanglesShape *)CRectanglesShape::operator new(0LL);
    if ( v9
      && (v11 = CRectanglesShape::CRectanglesShape(
                  v9,
                  (const struct MilRectF *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite)) != 0LL )
    {
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v11;
      *((_BYTE *)a3 + 8) = 1;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x3Fu, 0LL);
    }
  }
  return v4;
}
