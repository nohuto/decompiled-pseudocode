__int64 __fastcall GetColorChannelDepth(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( a1 <= 65 )
  {
    if ( a1 == 65 )
      return 8LL;
    v3 = a1 - 2;
    if ( !v3 )
      return 32LL;
    v4 = v3 - 8;
    if ( !v4 )
      return 16LL;
    v5 = v4 - 1;
    if ( !v5 )
      return 16LL;
    v6 = v5 - 13;
    if ( v6 )
    {
      v7 = v6 - 4;
      if ( !v7 )
        return 8LL;
      v8 = v7 - 21;
      if ( !v8 )
        return 8LL;
      v9 = v8 == 12;
LABEL_20:
      if ( !v9 )
        return 0LL;
      return 8LL;
    }
  }
  else
  {
    v1 = a1 - 87;
    if ( !v1 )
      return 8LL;
    v10 = v1 - 1;
    if ( !v10 )
      return 8LL;
    v11 = v10 - 3;
    if ( !v11 )
      return 8LL;
    v12 = v11 - 12;
    if ( !v12 )
      return 8LL;
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 2;
      if ( !v14 )
        return 8LL;
      v9 = v14 == 1;
      goto LABEL_20;
    }
  }
  return 10LL;
}
