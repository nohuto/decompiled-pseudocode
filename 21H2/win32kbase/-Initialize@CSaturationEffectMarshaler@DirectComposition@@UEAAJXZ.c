/*
 * XREFs of ?Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C02171E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CSaturationEffectMarshaler::Initialize(
        DirectComposition::CSaturationEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 30) = 1056964608;
  }
  return result;
}
