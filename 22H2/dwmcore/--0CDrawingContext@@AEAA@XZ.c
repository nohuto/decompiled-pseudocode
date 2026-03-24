/*
 * XREFs of ??0CDrawingContext@@AEAA@XZ @ 0x18003E3C8
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAPEAV1@@Z @ 0x18003E34C (-Create@CDrawingContext@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CLightStack@@QEAA@XZ @ 0x18003E994 (--0CLightStack@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003E9EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4R.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180057AA8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 */

CDrawingContext *__fastcall CDrawingContext::CDrawingContext(CDrawingContext *this)
{
  __int64 v2; // r8
  __int64 v3; // r10
  char v4; // r10
  __int64 v5; // rdx

  *(_QWORD *)this = &CDrawingContext::`vftable'{for `CMILCOMBase'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 3) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 12) = 1065353216LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 116) = 1065353216LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 17) = 1065353216LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 1065353216;
  *((_WORD *)this + 80) = 32085;
  *(_QWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *((_DWORD *)this + 45) = 0;
  *(_QWORD *)((char *)this + 188) = 1065353216LL;
  *(_QWORD *)((char *)this + 196) = 0LL;
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 26) = 1065353216LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *(_QWORD *)((char *)this + 228) = 1065353216LL;
  *(_QWORD *)((char *)this + 236) = 0LL;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 1065353216;
  *((_WORD *)this + 126) = 32085;
  *(_OWORD *)((char *)this + 188) = _xmm;
  *((_WORD *)this + 126) = 32085;
  *(_OWORD *)((char *)this + 204) = _xmm;
  *(_OWORD *)((char *)this + 220) = _xmm;
  *(_OWORD *)((char *)this + 236) = _xmm;
  *((_DWORD *)this + 46) &= ~1u;
  *((_BYTE *)this + 292) = 1;
  *((_QWORD *)this + 37) = 1068827891LL;
  *((_DWORD *)this + 68) = 1;
  *(_QWORD *)((char *)this + 276) = 1LL;
  *(_QWORD *)((char *)this + 284) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 59) = (char *)this + 504;
  *((_QWORD *)this + 60) = (char *)this + 504;
  *((_DWORD *)this + 122) = 4;
  *(_QWORD *)((char *)this + 492) = 4LL;
  *((_QWORD *)this + 67) = (char *)this + 568;
  *((_QWORD *)this + 68) = (char *)this + 568;
  *((_DWORD *)this + 138) = 4;
  *(_QWORD *)((char *)this + 556) = 4LL;
  CLightStack::CLightStack((CDrawingContext *)((char *)this + 600));
  *((_DWORD *)this + 214) = v2;
  *(_QWORD *)((char *)this + 860) = v2;
  *((_QWORD *)this + 105) = (char *)this + 872;
  *((_QWORD *)this + 106) = (char *)this + 872;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_DWORD *)this + 228) = 0;
  *((_DWORD *)this + 232) = 0;
  *((_QWORD *)this + 117) = (char *)this + 968;
  *((_QWORD *)this + 118) = (char *)this + 968;
  *((_DWORD *)this + 238) = 10;
  *(_QWORD *)((char *)this + 956) = 10LL;
  *((_DWORD *)this + 456) = 10;
  *(_QWORD *)((char *)this + 1828) = 10LL;
  *((_QWORD *)this + 226) = (char *)this + 1840;
  *((_QWORD *)this + 227) = (char *)this + 1840;
  *((_QWORD *)this + 400) = 0LL;
  *((_QWORD *)this + 402) = 0LL;
  *((_DWORD *)this + 802) = 0;
  *((_DWORD *)this + 806) = 0;
  *((_QWORD *)this + 404) = 0LL;
  *((_QWORD *)this + 406) = 0LL;
  *((_DWORD *)this + 810) = 0;
  *((_DWORD *)this + 814) = 0;
  *((_QWORD *)this + 408) = 0LL;
  *((_QWORD *)this + 410) = 0LL;
  *((_DWORD *)this + 818) = 0;
  *((_DWORD *)this + 822) = 0;
  *(_QWORD *)((char *)this + 3332) = 0LL;
  *((_QWORD *)this + 418) = 0LL;
  *((_DWORD *)this + 838) = 0;
  *(_QWORD *)((char *)this + 3324) = v3;
  *((_DWORD *)this + 825) = 0;
  *((_QWORD *)this + 413) = 0LL;
  *((_QWORD *)this + 414) = 0LL;
  *((_DWORD *)this + 860) = 0;
  *((_QWORD *)this + 431) = 0LL;
  *((_QWORD *)this + 433) = 0LL;
  *((_DWORD *)this + 864) = 0;
  *((_DWORD *)this + 868) = 0;
  *((_QWORD *)this + 435) = 0LL;
  *((_QWORD *)this + 439) = 0LL;
  *((_QWORD *)this + 440) = 0LL;
  *((_QWORD *)this + 441) = 0LL;
  *((_DWORD *)this + 884) = 0;
  *((_QWORD *)this + 443) = 0LL;
  *((_QWORD *)this + 444) = 0LL;
  *((_QWORD *)this + 445) = 0LL;
  *((_DWORD *)this + 892) = 0;
  *((_QWORD *)this + 447) = 0LL;
  *((_QWORD *)this + 448) = 0LL;
  *((_QWORD *)this + 449) = 0LL;
  *((_DWORD *)this + 900) = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawingContext *)((char *)this + 3616));
  *((_WORD *)this + 2978) = 257;
  *((_DWORD *)this + 1486) = 0;
  LOBYTE(v5) = v4;
  *((_DWORD *)this + 1488) = 65793;
  *((_BYTE *)this + 5958) = 0;
  *((_BYTE *)this + 5956) = CCommonRegistryData::DisableDrawListCaching == 0;
  *((_DWORD *)this + 16) = DisplayId::Invalid;
  *((_DWORD *)this + 17) = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetImpl'::`2'::impl,
    v5,
    0LL);
  if ( CCommonRegistryData::DisableProjectedShadows )
    *((_BYTE *)this + 5957) = 0;
  return this;
}
