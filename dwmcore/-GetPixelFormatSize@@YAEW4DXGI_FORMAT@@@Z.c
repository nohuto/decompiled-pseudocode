unsigned __int8 __fastcall GetPixelFormatSize(int a1)
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

  if ( a1 <= 57 )
  {
    if ( a1 != 57 )
    {
      v6 = a1 - 2;
      if ( !v6 )
        return 0x80;
      v7 = v6 - 4;
      if ( !v7 )
        return 96;
      v8 = v7 - 4;
      if ( !v8 )
        return 64;
      v9 = v8 - 1;
      if ( !v9 )
        return 64;
      v10 = v9 - 5;
      if ( !v10 )
        return 64;
      v11 = v10 - 8;
      if ( !v11 )
        return 32;
      v12 = v11 - 4;
      if ( !v12 )
        return 32;
      v13 = v12 - 14;
      if ( !v13 )
        return 32;
      if ( v13 != 7 )
        return 0;
    }
    return 16;
  }
  v1 = a1 - 61;
  if ( !v1 )
    return 8;
  v2 = v1 - 4;
  if ( !v2 )
    return 8;
  v3 = v2 - 22;
  if ( !v3 )
    return 32;
  v5 = v3 - 1;
  if ( !v5 )
    return 32;
  v14 = v5 - 3;
  if ( !v14 )
    return 32;
  v15 = v14 - 12;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
      return 48;
    if ( (unsigned int)(v16 - 2) >= 2 )
      return 0;
  }
  return 12;
}
