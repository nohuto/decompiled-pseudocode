/*
 * XREFs of ?Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01F2520
 * Callers:
 *     ?InitializeFromSharedResource@CSharedCompositionPointLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C01F9990 (-InitializeFromSharedResource@CSharedCompositionPointLightMarshaler@DirectComposition@@IEAAJPEBV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::Initialize(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_QWORD *)this + 12) = 1065353216LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 36) = 1120403456;
  result = 0LL;
  *(_OWORD *)((char *)this + 108) = xmmword_1C0226F08;
  *((_BYTE *)this + 88) = 1;
  *((_DWORD *)this + 37) = 1065353216;
  return result;
}
