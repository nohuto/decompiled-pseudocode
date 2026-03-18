/*
 * XREFs of ?Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C02165B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CBrightnessEffectMarshaler::Initialize(
        DirectComposition::CBrightnessEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 32) = 0;
    *((_DWORD *)this + 33) = 0;
    *((_DWORD *)this + 30) = 1065353216;
    *((_DWORD *)this + 31) = 1065353216;
  }
  return result;
}
