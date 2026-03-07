__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  struct DirectComposition::CResourceMarshaler **v7; // r10
  unsigned __int64 v10; // r11
  unsigned int i; // r9d
  int v12; // r9d
  unsigned int v13; // esi

  v6 = 0;
  v7 = a4;
  *a6 = 0;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v10 = a5;
  for ( i = 0; i < v10; i = v12 + 1 )
  {
    if ( !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v7[i] + 9), 11) )
      return (unsigned int)-1073741811;
  }
  if ( a3 != 8 || *((_QWORD *)this + 13) || *((_DWORD *)this + 29) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 29) = v10;
    *((_QWORD *)this + 13) = v7;
    *a6 = 1;
    v13 = 0;
    *((_DWORD *)this + 4) &= ~0x200u;
    if ( *((_DWORD *)this + 29) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13)
                                                                                                + 8LL * v13++));
      while ( v13 < *((_DWORD *)this + 29) );
    }
  }
  return v6;
}
