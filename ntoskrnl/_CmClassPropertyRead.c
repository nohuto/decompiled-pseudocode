bool __fastcall CmClassPropertyRead(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  if ( a1 <= 19 )
  {
    if ( a1 != 19 )
    {
      if ( a1 <= 9 )
      {
        if ( a1 == 9 )
          return 0;
        if ( !a1 )
          return 0;
        v17 = a1 - 1;
        if ( !v17 )
          return 0;
        v18 = v17 - 1;
        if ( !v18 )
          return 0;
        v4 = v18 - 1;
        if ( !v4 )
          return 0;
        goto LABEL_8;
      }
      v1 = a1 - 10;
      if ( !v1 )
        return 0;
      v2 = v1 - 1;
      if ( !v2 )
        return 0;
      v3 = v2 - 1;
      if ( !v3 )
        return 0;
      v4 = v3 - 1;
      if ( v4 )
      {
LABEL_8:
        v5 = v4 - 1;
        if ( !v5 )
          return 0;
        v6 = v5 - 1;
        if ( !v6 )
          return 0;
        v7 = v6 - 1;
        if ( !v7 )
          return 0;
        v8 = v7 - 1;
        if ( !v8 )
          return 0;
        return v8 == 1;
      }
    }
    return 1;
  }
  if ( a1 > 28 )
    return 0;
  v10 = a1 - 20;
  if ( !v10 )
    return 0;
  v11 = v10 - 1;
  if ( !v11 )
    return 0;
  v12 = v11 - 1;
  if ( !v12 )
    return 0;
  v13 = v12 - 1;
  if ( !v13 )
    return 0;
  v14 = v13 - 1;
  if ( !v14 )
    return 1;
  v15 = v14 - 1;
  if ( !v15 )
    return 0;
  v16 = v15 - 1;
  if ( !v16 )
    return 1;
  v8 = v16 - 1;
  if ( !v8 )
    return 1;
  return v8 == 1;
}
