__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetReferenceArrayProperty(
        DirectComposition::CGradientBrushMarshaler *this,
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
  if ( (!a5 || a4) && a3 == 1 )
  {
    for ( i = 0; i < a5; i = v11 + 1 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)a4[i] + 9),
                               23LL) )
        return (unsigned int)-1073741811;
    }
    DirectComposition::CGradientBrushMarshaler::ClearStops(this, v8);
    *((_QWORD *)this + 12) = a4;
    v12 = 0;
    *((_QWORD *)this + 13) = (unsigned int)a5;
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x100u;
    if ( *((_DWORD *)this + 26) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 12)
                                                                                                + 8LL * v12++));
      while ( v12 < *((_DWORD *)this + 26) );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
