/*
 * XREFs of ?Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0269F50
 * Callers:
 *     <none>
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
  *(_OWORD *)((char *)this + 108) = xmmword_1C02A5F20;
  *((_BYTE *)this + 88) = 1;
  *((_DWORD *)this + 37) = 1065353216;
  return result;
}
