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
      *((float *)this + 26) = a3;
      break;
    case 0xBu:
      *((_DWORD *)this + 4) |= 0x1000u;
      *((float *)this + 27) = a3;
      break;
    case 0xCu:
      *((_DWORD *)this + 4) |= 0x2000u;
      *((float *)this + 28) = a3;
      break;
    default:
      return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  *a4 = 1;
  return v4;
}
