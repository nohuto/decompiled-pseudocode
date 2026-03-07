__int64 __fastcall DirectComposition::CGeometryMarshaler::SetFloatProperty(
        DirectComposition::CGeometryMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  switch ( a2 )
  {
    case 1u:
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 20) = a3;
      break;
    case 2u:
      *((_DWORD *)this + 4) |= 0x200u;
      *((float *)this + 21) = a3;
      break;
    case 3u:
      *((_DWORD *)this + 4) |= 0x400u;
      *((float *)this + 22) = a3;
      break;
    default:
      return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  *a4 = 1;
  return v4;
}
