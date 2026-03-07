__int64 __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::SetBufferProperty(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 || !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArrayBase::Copy(
             (DirectComposition::CParticleBaseBehaviorMarshaler *)((char *)this + 56),
             a4,
             a5,
             0x18uLL,
             0x61714344u);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x20u;
  }
  return result;
}
