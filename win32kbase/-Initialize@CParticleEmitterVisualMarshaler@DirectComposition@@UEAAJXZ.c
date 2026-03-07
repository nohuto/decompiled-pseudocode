__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::Initialize(
        DirectComposition::CParticleEmitterVisualMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CVisualMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 97) = 1015580809;
    *((_DWORD *)this + 112) = 10000;
    result = 0LL;
    *((_DWORD *)this + 113) = 1065353216;
    *((_DWORD *)this + 114) = 1065353216;
    *((_DWORD *)this + 115) = 1065353216;
    *((_QWORD *)this + 58) = 1065353216LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_DWORD *)this + 120) = 0;
    *((_DWORD *)this + 122) = 1148846080;
    *((_DWORD *)this + 123) = 1148846080;
    *((_DWORD *)this + 124) = 1148846080;
    *((_BYTE *)this + 544) = 0;
  }
  return result;
}
