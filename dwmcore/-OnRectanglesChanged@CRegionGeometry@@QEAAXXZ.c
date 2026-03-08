/*
 * XREFs of ?OnRectanglesChanged@CRegionGeometry@@QEAAXXZ @ 0x1800A6F84
 * Callers:
 *     ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@_N@Z @ 0x1800A6F34 (-SetOrAppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV-$sp.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800A71F4 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CRegionGeometry::OnRectanglesChanged(CRegionGeometry *this)
{
  CRegionGeometry *v1; // r9
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = this;
  *((_BYTE *)this + 168) = 1;
  v2 = *((_QWORD *)this + 18);
  v3 = *((_QWORD *)v1 + 19);
  while ( v2 != v3 )
  {
    if ( !(unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(v2) )
    {
      *((_BYTE *)v1 + 168) = 0;
      break;
    }
    v2 = v4 + 16;
  }
  (*(void (__fastcall **)(CRegionGeometry *, _QWORD, _QWORD))(*(_QWORD *)v1 + 72LL))(v1, 0LL, 0LL);
}
