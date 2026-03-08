/*
 * XREFs of _MapCmDevicePropertyToRegType @ 0x1402FA1A8
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x1406C9A04 (_CmGetDeviceRegPropWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x14086A240 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapCmDevicePropertyToRegType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx
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
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx

  if ( a1 <= 20 )
  {
    if ( a1 == 20 )
      return 3LL;
    if ( a1 > 12 )
    {
      v15 = a1 - 13;
      if ( !v15 )
        return 1LL;
      v16 = v15 - 1;
      if ( !v16 )
        return 1LL;
      v17 = v16 - 1;
      if ( !v17 )
        return 1LL;
      v18 = v17 - 1;
      if ( !v18 )
        return 4LL;
      v19 = v18 - 1;
      if ( !v19 )
        return 4LL;
      if ( (unsigned int)(v19 - 1) >= 2 )
        return 0LL;
    }
    else
    {
      if ( a1 == 12 )
        return 1LL;
      v4 = a1 - 1;
      if ( !v4 )
        return 1LL;
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 2;
          if ( !v7 )
            return 1LL;
          v8 = v7 - 3;
          if ( !v8 )
            return 1LL;
          v9 = v8 - 1;
          if ( !v9 )
            return 1LL;
          v10 = v9 - 1;
          if ( !v10 )
            return 1LL;
          goto LABEL_36;
        }
      }
    }
    return 7LL;
  }
  if ( a1 > 30 )
  {
    v1 = a1 - 31;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        v11 = v2 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
                return v14 == 1;
              return 7LL;
            }
          }
        }
      }
      return 4LL;
    }
    return 3LL;
  }
  if ( a1 == 30 )
    return 1LL;
  v20 = a1 - 21;
  if ( !v20 )
    return 4LL;
  v21 = v20 - 1;
  if ( !v21 )
    return 4LL;
  v22 = v21 - 2;
  if ( v22 )
  {
    v23 = v22 - 2;
    if ( !v23 )
      return 4LL;
    v24 = v23 - 1;
    if ( !v24 )
      return 4LL;
    v10 = v24 - 1;
    if ( !v10 )
      return 4LL;
LABEL_36:
    if ( v10 == 1 )
      return 4LL;
    return 0LL;
  }
  return 3LL;
}
