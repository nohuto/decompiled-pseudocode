__int64 __fastcall DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(
        DirectComposition::CBrushMarshaler *a1,
        DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler **a3,
        unsigned int *a4,
        __int64 a5,
        int a6,
        _BYTE *a7)
{
  unsigned int v7; // ebx
  struct DirectComposition::CBrushMarshaler *v11; // rdi

  v7 = 0;
  if ( a4 && !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(a4[9], 17LL) )
    return (unsigned int)-1073741811;
  if ( a4 == (unsigned int *)*a3 )
    return v7;
  if ( a4 )
  {
    v11 = (struct DirectComposition::CBrushMarshaler *)(*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a4 + 88LL))(a4);
    if ( !v11 )
      return (unsigned int)-1073741811;
  }
  else
  {
    v11 = 0LL;
  }
  if ( DirectComposition::CBrushMarshaler::CheckForCycle(a1, v11) )
    return (unsigned int)-1073741811;
  if ( v11 )
  {
    if ( (*((_QWORD *)v11 + 3))++ == -1LL )
      KeBugCheck(0xC01E0103);
  }
  DirectComposition::CApplicationChannel::ReleaseResource(a2, *a3);
  *a3 = v11;
  *((_DWORD *)a1 + 4) |= a6;
  *a7 = 1;
  return v7;
}
