_BOOL8 __fastcall PipIsProblemReadonly(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  bool v18; // zf
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx

  if ( a2 > 0x1D )
  {
    if ( a2 > 0x2C )
    {
      if ( a2 <= 0x33 )
      {
        if ( a2 == 51 )
          return 0LL;
        v15 = a2 - 45;
        if ( !v15 )
          return 1LL;
        v16 = v15 - 1;
        if ( !v16 )
          return 1LL;
        v17 = v16 - 1;
        if ( !v17 )
          return 1LL;
        v18 = v17 == 1;
        return !v18;
      }
      v19 = a2 - 52;
      if ( !v19 )
        return 0LL;
      v20 = v19 - 1;
      if ( !v20 )
        return 0LL;
      v21 = v20 - 1;
      if ( !v21 )
        return 1LL;
      v22 = v21 - 1;
      if ( !v22 )
        return 1LL;
      v8 = v22 - 1;
      if ( v8 )
      {
LABEL_48:
        v18 = v8 == 1;
        return !v18;
      }
      return 0LL;
    }
    if ( a2 == 44 )
      return 0LL;
    if ( a2 <= 0x25 )
    {
      if ( a2 == 37 )
        return 0LL;
      v13 = a2 - 30;
      if ( v13 )
      {
        if ( v13 - 1 < 2 )
          return 0LL;
      }
      return 1LL;
    }
    v14 = a2 - 38;
    if ( !v14 )
      return 0LL;
    v10 = v14 - 1;
    if ( !v10 )
      return 0LL;
LABEL_21:
    v11 = v10 - 1;
    if ( !v11 )
      return 0LL;
    v7 = v11 - 1;
    if ( !v7 )
      return 0LL;
    goto LABEL_15;
  }
  if ( a2 == 29 )
    return 1LL;
  if ( a2 > 0xF )
  {
    if ( a2 > 0x16 )
    {
      v12 = a2 - 23;
      if ( !v12 )
        return 1LL;
      v5 = v12 - 1;
      if ( !v5 )
        return 1LL;
LABEL_13:
      v6 = v5 - 1;
      if ( !v6 )
        return 1LL;
      v7 = v6 - 1;
      if ( !v7 )
        return 1LL;
LABEL_15:
      v8 = v7 - 1;
      if ( !v8 )
        return 1LL;
      goto LABEL_48;
    }
    if ( a2 == 22 )
      return 0LL;
    v9 = a2 - 16;
    if ( !v9 )
      return 1LL;
    v10 = v9 - 1;
    if ( !v10 )
      return 1LL;
    goto LABEL_21;
  }
  if ( a2 == 15 )
    return 1LL;
  if ( a2 > 8 )
  {
    v4 = a2 - 9;
    if ( !v4 )
      return 1LL;
    v5 = v4 - 1;
    if ( v5 )
      goto LABEL_13;
    return 0LL;
  }
  if ( a2 != 8 )
  {
    v2 = a2 - 1;
    if ( !v2 || v2 == 2 && (*(_DWORD *)(a1 + 396) & 0x20000) == 0 )
      return 0LL;
  }
  return 1LL;
}
