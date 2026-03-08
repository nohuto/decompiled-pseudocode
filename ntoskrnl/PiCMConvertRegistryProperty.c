/*
 * XREFs of PiCMConvertRegistryProperty @ 0x1406C76A0
 * Callers:
 *     PiCMGetRegistryProperty @ 0x1406C74A4 (PiCMGetRegistryProperty.c)
 *     PiCMSetRegistryProperty @ 0x140967BA4 (PiCMSetRegistryProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiCMConvertRegistryProperty(int a1, _DWORD *a2)
{
  unsigned int v2; // r8d
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
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx

  v2 = 0;
  if ( a1 > 19 )
  {
    if ( a1 <= 29 )
    {
      if ( a1 == 29 )
      {
        *a2 = 29;
        return v2;
      }
      v25 = a1 - 20;
      if ( !v25 )
      {
        *a2 = 20;
        return v2;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        *a2 = 21;
        return v2;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        *a2 = 22;
        return v2;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        *a2 = 23;
        return v2;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        *a2 = 24;
        return v2;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        *a2 = 25;
        return v2;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        *a2 = 26;
        return v2;
      }
      v32 = v31 - 1;
      if ( !v32 )
      {
        *a2 = 27;
        return v2;
      }
      if ( v32 == 1 )
      {
        *a2 = 28;
        return v2;
      }
    }
    else
    {
      v18 = a1 - 30;
      if ( !v18 )
      {
        *a2 = 30;
        return v2;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        *a2 = 31;
        return v2;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        *a2 = 32;
        return v2;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        *a2 = 33;
        return v2;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
        *a2 = 34;
        return v2;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        *a2 = 35;
        return v2;
      }
      v33 = v23 - 1;
      if ( !v33 )
      {
        *a2 = 36;
        return v2;
      }
      if ( v33 == 1 )
      {
        *a2 = 37;
        return v2;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a1 == 19 )
  {
    *a2 = 19;
    return v2;
  }
  if ( a1 > 9 )
  {
    v5 = a1 - 10;
    if ( !v5 )
    {
      *a2 = 10;
      return v2;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      *a2 = 11;
      return v2;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      *a2 = 12;
      return v2;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      *a2 = 13;
      return v2;
    }
    v15 = v8 - 1;
    if ( !v15 )
    {
      *a2 = 14;
      return v2;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      *a2 = 15;
      return v2;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      *a2 = 16;
      return v2;
    }
    v24 = v17 - 1;
    if ( !v24 )
    {
      *a2 = 17;
      return v2;
    }
    if ( v24 == 1 )
    {
      *a2 = 18;
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  if ( a1 == 9 )
  {
    *a2 = 9;
    return v2;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v3 = a1 - 1;
  if ( !v3 )
  {
    *a2 = 1;
    return v2;
  }
  v4 = v3 - 1;
  if ( v4 )
  {
    v10 = v4 - 1;
    if ( !v10 )
    {
      *a2 = 3;
      return v2;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      *a2 = 4;
      return v2;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      *a2 = 5;
      return v2;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      *a2 = 6;
      return v2;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      *a2 = 7;
      return v2;
    }
    if ( v14 == 1 )
    {
      *a2 = 8;
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  *a2 = 2;
  return v2;
}
