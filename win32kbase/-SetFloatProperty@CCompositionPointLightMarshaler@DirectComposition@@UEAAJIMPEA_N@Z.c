/*
 * XREFs of ?SetFloatProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C026A080
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0006C90 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionPointLightMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  *a4 = 0;
  switch ( a2 )
  {
    case 3u:
      if ( *((float *)this + 24) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 24) = a3;
      goto LABEL_20;
    case 4u:
      if ( *((float *)this + 25) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
      *((float *)this + 25) = a3;
      goto LABEL_20;
    case 5u:
      if ( *((float *)this + 26) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
      *((float *)this + 26) = a3;
      goto LABEL_20;
    case 9u:
      if ( *((float *)this + 37) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x4000u;
      *((float *)this + 37) = a3;
      goto LABEL_20;
    case 0xAu:
      if ( *((float *)this + 38) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x8000u;
      *((float *)this + 38) = a3;
      goto LABEL_20;
    case 0xBu:
      if ( *((float *)this + 39) == a3 )
        return v4;
      *((_DWORD *)this + 4) |= 0x10000u;
      *((float *)this + 39) = a3;
LABEL_20:
      *a4 = 1;
      return v4;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
}
