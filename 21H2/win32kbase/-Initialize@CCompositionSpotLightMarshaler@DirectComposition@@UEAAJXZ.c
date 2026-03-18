/*
 * XREFs of ?Initialize@CCompositionSpotLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00B3590
 * Callers:
 *     ?InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition@@IEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00B3538 (-InitializeFromSharedResource@CSharedCompositionSpotLightMarshaler@DirectComposition@@IEAAJPEBVC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::Initialize(
        DirectComposition::CCompositionSpotLightMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 13) = 1065353216LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 1120403456;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_DWORD *)this + 37) = -1082130432;
  *((_DWORD *)this + 48) = 1065353216;
  *((_DWORD *)this + 49) = 1065353216;
  result = 0LL;
  *((_OWORD *)this + 10) = xmmword_1C025A658;
  *((_BYTE *)this + 96) = 1;
  *((_DWORD *)this + 38) = 1057360530;
  *((_DWORD *)this + 39) = 1070141403;
  *((_OWORD *)this + 11) = xmmword_1C025A658;
  return result;
}
