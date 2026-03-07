__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 75 )
    return DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
  result = DirectComposition::CResourceMarshalerArrayBase::Set(
             (DirectComposition::CParticleEmitterVisualMarshaler *)((char *)this + 520),
             a2,
             (__int64)a4,
             a5,
             115);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 137) |= 0x1000000u;
    *a6 = 1;
  }
  return result;
}
