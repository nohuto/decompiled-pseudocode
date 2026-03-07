__int64 __fastcall DirectComposition::CShapeMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( a3 )
    return 3221225485LL;
  if ( a4
    && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 29LL) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a4 != this[7] )
  {
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    DirectComposition::CApplicationChannel::ReleaseResource(a2, this[7]);
    this[7] = a4;
    *((_DWORD *)this + 4) |= 0x20u;
    *a5 = 1;
  }
  return v5;
}
