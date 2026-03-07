__int64 __fastcall DirectComposition::CSnapshotMarshaler::SetIntegerProperty(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( a4 )
    {
      if ( *((_DWORD *)this + 16) != a4 )
      {
        *((_DWORD *)this + 16) = a4;
        goto LABEL_13;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      if ( *((_BYTE *)this + 72) != (a4 != 0) )
      {
        *((_BYTE *)this + 72) = a4 != 0;
LABEL_13:
        *a5 = 1;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  if ( *((_DWORD *)this + 17) != a4 )
  {
    *((_DWORD *)this + 17) = a4;
    goto LABEL_13;
  }
  return v5;
}
