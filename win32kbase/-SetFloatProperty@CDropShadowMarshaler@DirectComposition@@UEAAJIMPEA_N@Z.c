__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetFloatProperty(
        DirectComposition::CDropShadowMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  *a4 = 0;
  if ( !a2 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 24) = a3;
LABEL_3:
    *a4 = 1;
    return 0LL;
  }
  if ( a2 == 4 )
  {
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 28) = a3;
    goto LABEL_3;
  }
  return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
}
