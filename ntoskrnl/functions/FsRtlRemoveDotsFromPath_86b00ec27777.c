NTSTATUS __stdcall FsRtlRemoveDotsFromPath(PWSTR OriginalString, USHORT PathLength, USHORT *NewLength)
{
  unsigned __int16 v3; // bx
  __int16 v6; // r9
  unsigned __int16 v7; // ax
  int v8; // r8d
  __int64 v9; // rcx
  WCHAR v11; // cx
  bool v12; // sf
  __int64 v13; // rcx
  WCHAR *v14; // rdi

  v3 = PathLength >> 1;
  v6 = 0;
  if ( PathLength >> 1 != 3 )
  {
    if ( v3 != 2 )
    {
      if ( v3 <= 2u )
        goto LABEL_5;
      goto LABEL_4;
    }
    if ( *OriginalString != 46 )
      goto LABEL_5;
    if ( OriginalString[1] != 46 )
    {
      v7 = 0;
      goto LABEL_6;
    }
    return -1073741192;
  }
  if ( *OriginalString == 92 )
  {
    if ( OriginalString[1] != 46 )
      goto LABEL_5;
    if ( OriginalString[2] != 46 )
    {
      v7 = 0;
      goto LABEL_6;
    }
    return -1073741192;
  }
LABEL_4:
  if ( *OriginalString == 46 && OriginalString[1] == 46 && OriginalString[2] == 92 )
    return -1073741192;
LABEL_5:
  v7 = 0;
  if ( v3 )
  {
LABEL_6:
    v8 = v3;
    while ( v7 )
    {
      if ( v7 < v3 - 1 && OriginalString[v7] == 92 && OriginalString[v7 + 1] == 92 )
        goto LABEL_13;
      v9 = v7;
      if ( OriginalString[v7] != 46 )
        goto LABEL_11;
      if ( v7 == v3 - 1 )
      {
        if ( OriginalString[v7 - 1] == 92 )
        {
          if ( v6 > 1 )
            --v6;
          goto LABEL_13;
        }
        goto LABEL_22;
      }
      v11 = OriginalString[v7 + 1];
      if ( v11 == 92 )
      {
        if ( OriginalString[v7 - 1] == 92 )
        {
          ++v7;
          goto LABEL_13;
        }
LABEL_22:
        OriginalString[v6] = 46;
LABEL_12:
        ++v6;
        goto LABEL_13;
      }
      if ( v11 != 46 || OriginalString[v7 - 1] != 92 || v7 != v3 - 2 && OriginalString[v7 + 2] != 92 )
        goto LABEL_22;
      v6 -= 2;
      v12 = v6 < 0;
      if ( v6 > 0 )
      {
        do
        {
          if ( OriginalString[v6] == 92 )
            break;
          --v6;
        }
        while ( v6 > 0 );
        v12 = v6 < 0;
      }
      if ( v12 || OriginalString[v6] != 92 )
        return -1073741192;
      if ( !v6 )
        v6 = v7 == v3 - 2;
      ++v7;
LABEL_13:
      if ( ++v7 >= v3 )
        goto LABEL_14;
    }
    v9 = 0LL;
LABEL_11:
    OriginalString[v6] = OriginalString[v9];
    goto LABEL_12;
  }
  v8 = 0;
LABEL_14:
  *NewLength = 2 * v6;
  if ( v6 < v8 )
  {
    v13 = (__int16)(v8 - v6);
    v14 = &OriginalString[v6];
    while ( v13 )
    {
      *v14++ = 0;
      --v13;
    }
  }
  return 0;
}
