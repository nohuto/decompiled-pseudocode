__int64 __fastcall DirectComposition::CShapeVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  struct DirectComposition::CApplicationChannel *v8; // r10
  unsigned int i; // r9d
  int v11; // r9d
  unsigned int v12; // esi

  v6 = 0;
  v8 = a2;
  *a6 = 0;
  if ( a4 || !a5 )
  {
    if ( a3 == 52 )
    {
      for ( i = 0; i < a5; i = v11 + 1 )
      {
        if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                 *((unsigned int *)a4[i] + 9),
                                 193LL) )
          return (unsigned int)-1073741811;
      }
      DirectComposition::CShapeVisualMarshaler::ClearShapes(this, v8);
      *((_DWORD *)this + 98) = a5;
      v12 = 0;
      *((_QWORD *)this + 48) = a4;
      *((_DWORD *)this + 99) = 0;
      *a6 = 1;
      *((_DWORD *)this + 100) |= 2u;
      if ( *((_DWORD *)this + 98) )
      {
        do
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 48)
                                                                                                  + 8LL * v12++));
        while ( v12 < *((_DWORD *)this + 98) );
      }
    }
    else
    {
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
