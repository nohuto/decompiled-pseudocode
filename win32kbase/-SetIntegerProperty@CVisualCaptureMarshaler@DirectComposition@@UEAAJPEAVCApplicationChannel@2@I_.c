__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetIntegerProperty(
        DirectComposition::CVisualCaptureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  bool v8; // dl
  bool v9; // dl

  v5 = 0;
  v6 = a3 - 3;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 2 )
        return (unsigned int)-1073741811;
      if ( *((_DWORD *)this + 27) != a4 )
      {
        *((_DWORD *)this + 27) = a4;
LABEL_9:
        v8 = 1;
LABEL_11:
        *a5 = v8;
        return v5;
      }
    }
    else if ( *((_DWORD *)this + 25) != a4 )
    {
      *((_DWORD *)this + 25) = a4;
      goto LABEL_9;
    }
    v8 = 0;
    goto LABEL_11;
  }
  if ( *((_DWORD *)this + 24) == a4 )
  {
    v9 = 0;
  }
  else
  {
    *((_DWORD *)this + 24) = a4;
    v9 = 1;
  }
  *a5 = v9;
  return v5;
}
