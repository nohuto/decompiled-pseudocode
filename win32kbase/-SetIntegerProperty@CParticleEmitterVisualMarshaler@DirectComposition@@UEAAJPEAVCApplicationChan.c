__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetIntegerProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  switch ( a3 )
  {
    case '8':
      if ( *((_DWORD *)this + 99) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 137) |= 0x20u;
      *((_DWORD *)this + 99) = a4;
      goto LABEL_17;
    case ';':
      if ( *((_DWORD *)this + 104) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 137) |= 0x100u;
      *((_DWORD *)this + 104) = a4;
      goto LABEL_17;
    case 'B':
      if ( *((_DWORD *)this + 112) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 137) |= 0x8000u;
      *((_DWORD *)this + 112) = a4;
      goto LABEL_17;
    case 'G':
      if ( *((_DWORD *)this + 121) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 137) |= 0x100000u;
      *((_DWORD *)this + 121) = a4;
      goto LABEL_17;
    case 'L':
      if ( *((_BYTE *)this + 544) == ((_DWORD)a4 != 0) )
        return v5;
      *((_DWORD *)this + 137) |= 0x2000000u;
      *((_BYTE *)this + 544) = (_DWORD)a4 != 0;
LABEL_17:
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
