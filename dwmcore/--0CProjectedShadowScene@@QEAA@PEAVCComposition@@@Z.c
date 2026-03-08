/*
 * XREFs of ??0CProjectedShadowScene@@QEAA@PEAVCComposition@@@Z @ 0x180004730
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::CProjectedShadowScene(
        CProjectedShadowScene *this,
        struct CComposition *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  CProjectedShadowScene *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CProjectedShadowScene::`vftable';
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0xB0uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)this + 8) = v3;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x78uLL);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)this + 10) = v4;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 30) = 1065353216;
  *((_DWORD *)this + 31) = 1065353216;
  result = this;
  *((_DWORD *)this + 28) = 2139095039;
  *((_DWORD *)this + 33) = -1082130432;
  return result;
}
