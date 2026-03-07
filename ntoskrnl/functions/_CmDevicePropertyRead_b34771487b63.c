char __fastcall CmDevicePropertyRead(__int64 a1, int a2)
{
  int v2; // edx
  bool v3; // zf
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx

  if ( a2 > 19 )
  {
    if ( a2 <= 29 )
    {
      if ( a2 == 29 )
        return 1;
      v18 = a2 - 20;
      if ( !v18 )
        return 1;
      v19 = v18 - 1;
      if ( !v19 )
        return 1;
      v20 = v19 - 1;
      if ( !v20 )
        return 1;
      v21 = v20 - 1;
      if ( !v21 )
        return 1;
      v22 = v21 - 1;
      if ( !v22 )
        return 1;
      v8 = v22 - 1;
      if ( !v8 )
        return 0;
      goto LABEL_11;
    }
    v4 = a2 - 30;
    v3 = v4 == 0;
LABEL_6:
    if ( v3 )
      return 1;
    v5 = v4 - 1;
    if ( !v5 )
      return 1;
    v6 = v5 - 1;
    if ( !v6 )
      return 1;
    v7 = v6 - 1;
    if ( !v7 )
      return 1;
    v8 = v7 - 1;
    if ( !v8 )
      return 1;
LABEL_11:
    v9 = v8 - 1;
    if ( !v9 )
      return 1;
    v10 = v9 - 1;
    if ( !v10 )
      return 1;
    goto LABEL_13;
  }
  if ( a2 == 19 )
    return 1;
  if ( a2 > 9 )
  {
    v2 = a2 - 10;
    if ( !v2 )
      return 1;
    v4 = v2 - 1;
    v3 = v4 == 0;
    goto LABEL_6;
  }
  if ( a2 != 9 )
  {
    if ( !a2 )
      return 0;
    v12 = a2 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( !v15 )
            return 0;
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( !v17 )
              return 0;
            v10 = v17 - 1;
            if ( !v10 )
              return 0;
LABEL_13:
            if ( v10 != 1 )
              return 0;
          }
        }
      }
    }
  }
  return 1;
}
