__int64 __fastcall DirectComposition::CParticleAttractorMarshaler::SetBufferProperty(
        DirectComposition::CParticleAttractorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // eax

  v6 = 0;
  *a6 = 0;
  if ( !a3 && a4 && a5 == 12 )
  {
    *((_QWORD *)this + 7) = *(_QWORD *)a4;
    v7 = a4[2];
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 16) = v7;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
