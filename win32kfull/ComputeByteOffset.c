__int64 __fastcall ComputeByteOffset(unsigned int a1, int a2, _BYTE *a3)
{
  char v3; // al
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

  v3 = 0;
  if ( a1 > 0xF7 )
  {
    v10 = a1 - 248;
    if ( !v10 )
      goto LABEL_25;
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_25;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_25;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_25;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_24;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_24;
    v16 = v15 - 1;
    if ( !v16 )
      goto LABEL_25;
    if ( v16 != 1 )
      return 0LL;
LABEL_23:
    v3 = a2 & 1;
    a2 >>= 1;
    goto LABEL_25;
  }
  if ( a1 == 247 )
    goto LABEL_25;
  v4 = a1 - 1;
  if ( !v4 )
  {
    v3 = a2 & 7;
    a2 >>= 3;
    goto LABEL_25;
  }
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_23;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_25;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_24:
    a2 *= 2;
    goto LABEL_25;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 - 239 >= 2 )
        return 0LL;
    }
    else
    {
      a2 *= 4;
    }
  }
  else
  {
    a2 *= 3;
  }
LABEL_25:
  *a3 = v3;
  return (unsigned int)a2;
}
