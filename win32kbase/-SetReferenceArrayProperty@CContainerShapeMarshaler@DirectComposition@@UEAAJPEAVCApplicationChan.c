__int64 __fastcall DirectComposition::CContainerShapeMarshaler::SetReferenceArrayProperty(
        DirectComposition::CContainerShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
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
  if ( (a4 || !a5) && a3 == 1 )
  {
    for ( i = 0; i < a5; i = v11 + 1 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)a4[i] + 9),
                               193LL) )
        return (unsigned int)-1073741811;
    }
    DirectComposition::CContainerShapeMarshaler::ClearShapes(this, v8);
    *((_DWORD *)this + 18) = a5;
    v12 = 0;
    *((_QWORD *)this + 8) = a4;
    *((_DWORD *)this + 19) = 0;
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x40u;
    if ( *((_DWORD *)this + 18) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 8)
                                                                                                + 8LL * v12++));
      while ( v12 < *((_DWORD *)this + 18) );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
