__int64 __fastcall IsMessageAlwaysAllowedAcrossIL(unsigned int a1)
{
  unsigned int v1; // r10d
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx

  v1 = 0;
  if ( a1 <= 0x309 )
  {
    if ( a1 != 777 )
    {
      if ( !a1 )
        return 1;
      v10 = a1 - 3;
      if ( !v10 )
        return 1;
      v11 = v10 - 2;
      if ( !v11 )
        return 1;
      v12 = v11 - 8;
      if ( !v12 )
        return 1;
      v13 = v12 - 1;
      if ( !v13 )
        return 1;
      v14 = v13 - 37;
      if ( !v14 )
        return 1;
      v15 = v14 - 76;
      if ( !v15 )
        return 1;
      v16 = v15 - 646;
      if ( !v16 || v16 == 3 )
        return 1;
      return v1;
    }
LABEL_23:
    LOBYTE(v1) = (unsigned int)IsFmtBlocked(0x80u) == 0;
    return v1;
  }
  v2 = a1 - 778;
  if ( !v2 )
    goto LABEL_23;
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_23;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_23;
  v5 = v4 - 1;
  if ( !v5 )
    return 1;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_23;
  v7 = v6 - 5;
  if ( !v7 )
    return 1;
  v8 = v7 - 7;
  if ( !v8 )
    return 1;
  v9 = v8 - 1;
  if ( !v9 || v9 == 4 )
    return 1;
  return v1;
}
