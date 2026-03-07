__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  unsigned int v9; // r9d
  unsigned int v11; // r9d
  unsigned int v12; // r9d

  v5 = 0;
  if ( !a3 )
  {
    if ( !a4 )
      goto LABEL_6;
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 42LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v9, 202LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v11, 129LL)
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v12, 71LL) )
    {
      return 3221225485LL;
    }
    if ( a4
      && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                             *((unsigned int *)a4 + 9),
                             147LL) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
LABEL_6:
      if ( a4 != this[9] )
      {
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, this[9]);
        this[9] = a4;
        *((_DWORD *)this + 4) |= 0x20u;
        *a5 = 1;
      }
    }
    return v5;
  }
  if ( a3 == 6 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             this + 10,
             a4,
             1LL,
             29,
             this + 2,
             64,
             0,
             a5);
  return 3221225485LL;
}
