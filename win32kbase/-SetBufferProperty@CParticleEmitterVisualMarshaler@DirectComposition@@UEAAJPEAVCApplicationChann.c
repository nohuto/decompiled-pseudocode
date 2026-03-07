__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetBufferProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax

  v6 = 0;
  *a6 = 0;
  switch ( a3 )
  {
    case 'C':
      if ( a4 && a5 == 12 )
      {
        *(_QWORD *)((char *)this + 452) = *(_QWORD *)a4;
        v9 = a4[2];
        *((_DWORD *)this + 137) |= 0x10000u;
        *((_DWORD *)this + 115) = v9;
        goto LABEL_14;
      }
      return (unsigned int)-1073741811;
    case 'F':
      if ( a4 && a5 == 12 )
      {
        *((_QWORD *)this + 59) = *(_QWORD *)a4;
        v8 = a4[2];
        *((_DWORD *)this + 137) |= 0x80000u;
        *((_DWORD *)this + 120) = v8;
        goto LABEL_14;
      }
      return (unsigned int)-1073741811;
    case 'H':
      if ( a4 && a5 == 12 )
      {
        *((_QWORD *)this + 61) = *(_QWORD *)a4;
        v7 = a4[2];
        *((_DWORD *)this + 137) |= 0x200000u;
        *((_DWORD *)this + 124) = v7;
LABEL_14:
        *a6 = 1;
        return v6;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
}
