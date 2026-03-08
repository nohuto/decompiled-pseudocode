/*
 * XREFs of ?Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C024DA90
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C024D3E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CBrightnessEffectMarshaler::Initialize(
        DirectComposition::CBrightnessEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 31) = 0;
    *((_DWORD *)this + 28) = 1065353216;
    *((_DWORD *)this + 29) = 1065353216;
  }
  return result;
}
