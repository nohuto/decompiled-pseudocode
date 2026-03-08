/*
 * XREFs of ?Initialize@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C024E830
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C024D3E0 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::Initialize(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 30) = 1008981770;
    result = 0LL;
    *(_QWORD *)((char *)this + 124) = 1008981770LL;
    *((_DWORD *)this + 33) = 0;
  }
  *((_QWORD *)this + 17) = 1LL;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
