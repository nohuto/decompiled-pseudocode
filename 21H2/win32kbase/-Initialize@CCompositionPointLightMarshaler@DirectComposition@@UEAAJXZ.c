/*
 * XREFs of ?Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0232990
 * Callers:
 *     ?InitializeFromSharedResource@CSharedCompositionPointLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C023B2D0 (-InitializeFromSharedResource@CSharedCompositionPointLightMarshaler@DirectComposition@@IEAAJPEBV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::Initialize(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_QWORD *)this + 13) = 1065353216LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 38) = 1120403456;
  result = 0LL;
  *(_OWORD *)((char *)this + 116) = xmmword_1C026B6B0;
  *((_BYTE *)this + 96) = 1;
  *((_DWORD *)this + 39) = 1065353216;
  return result;
}
