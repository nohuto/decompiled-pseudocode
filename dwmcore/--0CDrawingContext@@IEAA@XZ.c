CDrawingContext *__fastcall CDrawingContext::CDrawingContext(CDrawingContext *this)
{
  CMILMatrix *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // r9
  __int64 v6; // rdx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = &ID2DContextOwner::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 16) = 0;
  CMILMatrix::SetToIdentity((CDrawingContext *)((char *)this + 96));
  *(_OWORD *)((char *)this + 164) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *((_DWORD *)this + 47) = 0;
  *((_WORD *)this + 96) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  CMILMatrix::SetToIdentity((CDrawingContext *)((char *)this + 248));
  CMILMatrix::SetToIdentity(v2);
  *((_DWORD *)this + 61) &= ~1u;
  *((_BYTE *)this + 352) = 1;
  *((_DWORD *)this + 83) = 1;
  *((_QWORD *)this + 42) = 1LL;
  *(_QWORD *)((char *)this + 356) = 1068827891LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 122) = 0;
  *((_QWORD *)this + 62) = (char *)this + 528;
  *((_QWORD *)this + 63) = (char *)this + 528;
  *((_DWORD *)this + 128) = 4;
  *(_QWORD *)((char *)this + 516) = 4LL;
  CLightStack::CLightStack((CDrawingContext *)((char *)this + 560));
  *((_DWORD *)this + 204) = v3;
  *(_QWORD *)((char *)this + 820) = v3;
  *((_QWORD *)this + 100) = (char *)this + 832;
  *((_QWORD *)this + 101) = (char *)this + 832;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_DWORD *)this + 218) = 0;
  *((_DWORD *)this + 222) = 0;
  *((_QWORD *)this + 112) = (char *)this + 920;
  *((_QWORD *)this + 113) = (char *)this + 920;
  *((_QWORD *)this + 114) = (char *)this + 2760;
  *((_QWORD *)this + 345) = (char *)this + 2784;
  *((_QWORD *)this + 346) = (char *)this + 2784;
  *((_QWORD *)this + 347) = (char *)this + 3184;
  *((_QWORD *)this + 398) = 0LL;
  *((_QWORD *)this + 400) = 0LL;
  *((_DWORD *)this + 798) = 0;
  *((_DWORD *)this + 802) = 0;
  *((_QWORD *)this + 402) = 0LL;
  *((_QWORD *)this + 404) = 0LL;
  *((_DWORD *)this + 806) = 0;
  *((_DWORD *)this + 810) = 0;
  *((_QWORD *)this + 406) = 0LL;
  *((_QWORD *)this + 408) = 0LL;
  *((_DWORD *)this + 814) = 0;
  *((_DWORD *)this + 818) = 0;
  *((_QWORD *)this + 410) = 0LL;
  *((_QWORD *)this + 412) = 0LL;
  *((_DWORD *)this + 822) = 0;
  *((_DWORD *)this + 826) = 0;
  *(_QWORD *)((char *)this + 3348) = 0LL;
  *((_QWORD *)this + 420) = 0LL;
  *((_DWORD *)this + 842) = 0;
  *(_QWORD *)((char *)this + 3340) = v4;
  *((_DWORD *)this + 829) = 0;
  *((_QWORD *)this + 415) = 0LL;
  *((_QWORD *)this + 416) = 0LL;
  *((_QWORD *)this + 424) = 0LL;
  *((_QWORD *)this + 426) = 0LL;
  *((_DWORD *)this + 850) = 0;
  *((_DWORD *)this + 854) = 0;
  *((_QWORD *)this + 428) = 0LL;
  *((_QWORD *)this + 432) = 0LL;
  *((_QWORD *)this + 433) = 0LL;
  *((_QWORD *)this + 434) = 0LL;
  *((_DWORD *)this + 870) = 0;
  *((_QWORD *)this + 436) = 0LL;
  *((_QWORD *)this + 437) = 0LL;
  *((_QWORD *)this + 438) = 0LL;
  *((_DWORD *)this + 878) = 0;
  *((_QWORD *)this + 440) = 0LL;
  *((_QWORD *)this + 441) = 0LL;
  *((_QWORD *)this + 442) = 0LL;
  *((_DWORD *)this + 886) = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawingContext *)((char *)this + 3568));
  *((_QWORD *)this + 1010) = 0LL;
  *((_DWORD *)this + 2022) = 0;
  *((_QWORD *)this + 1012) = (char *)this + 8104;
  *((_DWORD *)this + 2026) = 0;
  *((_DWORD *)this + 2042) = 16777473;
  *((_BYTE *)this + 8172) = v5;
  *((_BYTE *)this + 8171) = CCommonRegistryData::DisableDrawListCaching == 0;
  *((_DWORD *)this + 16) = DisplayId::Invalid;
  *((_DWORD *)this + 17) = 0;
  LOBYTE(v6) = v5;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetImpl'::`2'::impl,
    v6,
    0LL);
  if ( CCommonRegistryData::DisableProjectedShadows )
    *((_BYTE *)this + 8172) = 0;
  return this;
}
