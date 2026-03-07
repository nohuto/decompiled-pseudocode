char __fastcall CmClassPropertyWrite(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
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
    if ( a1 == 19 )
      return 1;
    if ( a1 > 9 )
    {
      v5 = a1 - 10;
      if ( !v5 )
        return 0;
      v6 = v5 - 1;
      if ( !v6 )
        return 0;
      v7 = v6 - 1;
      if ( !v7 )
        return 0;
      v3 = v7 - 1;
      if ( !v3 )
        return 1;
    }
    else
    {
      if ( a1 == 9 )
        return 0;
      if ( !a1 )
        return 0;
      v1 = a1 - 1;
      if ( !v1 )
        return 0;
      v2 = v1 - 1;
      if ( !v2 )
        return 0;
      v3 = v2 - 1;
      if ( !v3 )
        return 0;
    }
    v8 = v3 - 1;
    if ( !v8 )
      return 0;
    v9 = v8 - 1;
    if ( !v9 )
      return 0;
    v10 = v9 - 1;
    if ( !v10 )
      return 0;
    v11 = v10 - 1;
    if ( !v11 )
      return 0;
    goto LABEL_18;
  }
  if ( a1 > 28 )
    return 0;
  v12 = a1 - 20;
  if ( !v12 )
    return 0;
  v13 = v12 - 1;
  if ( !v13 )
    return 0;
  v14 = v13 - 1;
  if ( !v14 )
    return 0;
  v15 = v14 - 1;
  if ( !v15 )
    return 0;
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( !v17 )
      return 0;
    v18 = v17 - 1;
    if ( v18 )
    {
      v11 = v18 - 1;
      if ( v11 )
      {
LABEL_18:
        if ( v11 != 1 )
          return 0;
      }
    }
  }
  return 1;
}
