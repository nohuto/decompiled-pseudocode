/*
 * XREFs of ?SetFloatProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01DCDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0023F40 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetFloatProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  if ( a2 > 0x3E )
  {
    switch ( a2 )
    {
      case '?':
        if ( *((float *)this + 108) != a3 )
        {
          *((_DWORD *)this + 136) |= 0x2000u;
          *((float *)this + 108) = a3;
          goto LABEL_33;
        }
        return v4;
      case '@':
        if ( *((float *)this + 109) != a3 )
        {
          *((_DWORD *)this + 136) |= 0x4000u;
          *((float *)this + 109) = a3;
          goto LABEL_33;
        }
        return v4;
      case 'C':
        if ( *((float *)this + 114) != a3 )
        {
          *((_DWORD *)this + 136) |= 0x20000u;
          *((float *)this + 114) = a3;
          goto LABEL_33;
        }
        return v4;
      case 'D':
        if ( *((float *)this + 115) != a3 )
        {
          *((_DWORD *)this + 136) |= 0x40000u;
          *((float *)this + 115) = a3;
          goto LABEL_33;
        }
        return v4;
    }
    return (unsigned int)DirectComposition::CVisualMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  switch ( a2 )
  {
    case '>':
      if ( *((float *)this + 107) != a3 )
      {
        *((_DWORD *)this + 136) |= 0x1000u;
        *((float *)this + 107) = a3;
        goto LABEL_33;
      }
      return v4;
    case '4':
      if ( *((float *)this + 94) != a3 )
      {
        *((_DWORD *)this + 136) |= 4u;
        *((float *)this + 94) = a3;
        goto LABEL_33;
      }
      return v4;
    case '5':
      if ( *((float *)this + 95) != a3 )
      {
        *((_DWORD *)this + 136) |= 8u;
        *((float *)this + 95) = a3;
        goto LABEL_33;
      }
      return v4;
    case '6':
      if ( *((float *)this + 96) != a3 )
      {
        *((_DWORD *)this + 136) |= 0x10u;
        *((float *)this + 96) = a3;
        goto LABEL_33;
      }
      return v4;
  }
  if ( a2 != 59 )
  {
    if ( a2 == 61 )
    {
      if ( *((float *)this + 106) != a3 )
      {
        *((_DWORD *)this + 136) |= 0x800u;
        *((float *)this + 106) = a3;
LABEL_33:
        *a4 = 1;
        return v4;
      }
      return v4;
    }
    return (unsigned int)DirectComposition::CVisualMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  if ( *((float *)this + 103) != a3 )
  {
    *((_DWORD *)this + 136) |= 0x200u;
    *((float *)this + 103) = a3;
    goto LABEL_33;
  }
  return v4;
}
