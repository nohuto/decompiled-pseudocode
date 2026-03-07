__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // ecx

  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    v6 = a3 & 0x3FFFFFFF;
    if ( (unsigned int)v6 >= *((_DWORD *)this + 18) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v7 = *((_QWORD *)this + 11);
      v8 = 0;
      *(_DWORD *)(v7 + 4 * v6) = a4;
      *((_DWORD *)this + 26) = 0;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  return v8;
}
