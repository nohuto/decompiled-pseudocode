__int64 __fastcall MakeRectangleEdgeFlags(int a1, int a2, int a3, int a4)
{
  int v4; // r11d
  int v6; // r9d
  int v7; // r9d
  int v8; // edx
  int v9; // r8d
  int v10; // r8d
  int v11; // r9d
  int v12; // r10d
  int v13; // r10d
  int v14; // r8d
  int v15; // ecx
  int v16; // ecx

  v4 = 0;
  v6 = a4 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v8 = 196608;
      else
        v8 = 0;
    }
    else
    {
      v8 = 0x20000;
    }
  }
  else
  {
    v8 = 0x10000;
  }
  v9 = a3 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
        v11 = 768;
      else
        v11 = 0;
    }
    else
    {
      v11 = 512;
    }
  }
  else
  {
    v11 = 256;
  }
  v12 = a2 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
        v14 = 3;
      else
        v14 = 0;
    }
    else
    {
      v14 = 2;
    }
  }
  else
  {
    v14 = 1;
  }
  v15 = a1 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
        v4 = 50331648;
    }
    else
    {
      v4 = 0x2000000;
    }
  }
  else
  {
    v4 = 0x1000000;
  }
  return v4 | v14 | v11 | (unsigned int)v8;
}
