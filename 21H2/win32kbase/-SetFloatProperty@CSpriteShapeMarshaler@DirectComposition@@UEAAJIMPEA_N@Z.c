/*
 * XREFs of ?SetFloatProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C021E620
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0099CA0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetFloatProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  switch ( a2 )
  {
    case 0xAu:
      *((_DWORD *)this + 4) |= 0x800u;
      *((float *)this + 28) = a3;
      goto LABEL_8;
    case 0xBu:
      *((_DWORD *)this + 4) |= 0x1000u;
      *((float *)this + 29) = a3;
      goto LABEL_8;
    case 0xCu:
      *((_DWORD *)this + 4) |= 0x2000u;
      *((float *)this + 30) = a3;
LABEL_8:
      *a4 = 1;
      return v4;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
}
