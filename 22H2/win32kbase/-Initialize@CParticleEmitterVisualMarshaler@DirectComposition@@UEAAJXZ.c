/*
 * XREFs of ?Initialize@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01DBE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0090F60 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::Initialize(
        DirectComposition::CParticleEmitterVisualMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CVisualMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 95) = 1015580809;
    *((_DWORD *)this + 110) = 10000;
    result = 0LL;
    *((_DWORD *)this + 111) = 1065353216;
    *((_DWORD *)this + 112) = 1065353216;
    *((_DWORD *)this + 113) = 1065353216;
    *((_QWORD *)this + 57) = 1065353216LL;
    *((_QWORD *)this + 58) = 0LL;
    *((_DWORD *)this + 118) = 0;
    *((_DWORD *)this + 120) = 1148846080;
    *((_DWORD *)this + 121) = 1148846080;
    *((_DWORD *)this + 122) = 1148846080;
    *((_BYTE *)this + 540) = 0;
  }
  return result;
}
