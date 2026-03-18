/*
 * XREFs of ?Initialize@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00B36D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionDistantLightMarshaler::Initialize(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  __int64 result; // rax

  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = -1082130432;
  result = 0LL;
  *((_BYTE *)this + 96) = 1;
  *(_OWORD *)((char *)this + 104) = xmmword_1C025A658;
  *((_DWORD *)this + 35) = 1065353216;
  return result;
}
