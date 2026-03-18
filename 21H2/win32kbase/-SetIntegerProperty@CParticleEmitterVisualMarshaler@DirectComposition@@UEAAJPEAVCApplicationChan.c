/*
 * XREFs of ?SetIntegerProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C02267E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00993D0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

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
    case '9':
      if ( *((_DWORD *)this + 101) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 139) |= 0x20u;
      *((_DWORD *)this + 101) = a4;
      goto LABEL_17;
    case '<':
      if ( *((_DWORD *)this + 106) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 139) |= 0x100u;
      *((_DWORD *)this + 106) = a4;
      goto LABEL_17;
    case 'C':
      if ( *((_DWORD *)this + 114) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 139) |= 0x8000u;
      *((_DWORD *)this + 114) = a4;
      goto LABEL_17;
    case 'H':
      if ( *((_DWORD *)this + 123) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 139) |= 0x100000u;
      *((_DWORD *)this + 123) = a4;
      goto LABEL_17;
    case 'M':
      if ( *((_BYTE *)this + 552) == ((_DWORD)a4 != 0) )
        return v5;
      *((_DWORD *)this + 139) |= 0x2000000u;
      *((_BYTE *)this + 552) = (_DWORD)a4 != 0;
LABEL_17:
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
