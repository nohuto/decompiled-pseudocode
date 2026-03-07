void __fastcall BltLnkReadPat4(
        unsigned __int8 *a1,
        char a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  signed int v6; // r10d
  unsigned int v7; // r11d
  unsigned __int8 *v10; // rsi
  unsigned __int8 v11; // r8
  char v12; // dl
  unsigned int v13; // r9d
  int v14; // ecx
  int v15; // r14d
  unsigned int v16; // edx
  unsigned int v17; // r15d
  unsigned __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // cl
  char v22; // al
  unsigned __int64 v23; // rax
  signed int v24; // ebp
  int v25; // edi
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // dl

  v6 = a6;
  v7 = 0;
  v10 = a1;
  if ( (a2 & 1) != 0 && a6 )
  {
    v11 = a3[(unsigned __int64)a5 >> 1];
    v12 = v11 >> 4;
    if ( (a5 & 1) != 0 )
      v12 = v11;
    v10 = a1 + 1;
    v13 = a5 + 1;
    *a1 = v12 & 0xF;
    v6 = a6 - 1;
  }
  else
  {
    v13 = a5;
  }
  v14 = 2 * a4;
  if ( (a4 & 1) == 0 )
    v14 = a4;
  v15 = v14;
  if ( v6 <= v14 )
  {
    v16 = (unsigned int)v6 >> 1;
  }
  else
  {
    v15 = v14 >> 1;
    v16 = v14 >> 1;
  }
  v17 = v6 - v14;
  if ( v6 <= v14 )
    v17 = v6 & 1;
  while ( v16 )
  {
    --v16;
    v18 = 0LL;
    if ( v13 != a4 )
      v18 = v13;
    v19 = v18 + 1;
    v20 = a3[v18 >> 1];
    if ( (v18 & 1) != 0 )
    {
      v23 = 0LL;
      if ( v19 != a4 )
        v23 = v19;
      v19 = v23;
      v21 = a3[v23 >> 1];
      v22 = 16 * v20;
    }
    else
    {
      if ( v19 != a4 )
        goto LABEL_24;
      v21 = *a3;
      v22 = v20 & 0xF0;
      v19 = 0;
    }
    v20 = v22 | (v21 >> 4);
LABEL_24:
    *v10++ = v20;
    v13 = v19 + 1;
  }
  if ( v17 <= 1 )
  {
    if ( (v17 & 1) != 0 )
    {
      if ( v13 != a4 )
        v7 = v13;
      v26 = a3[(unsigned __int64)v7 >> 1];
      if ( (v7 & 1) != 0 )
        v27 = 16 * v26;
      else
        v27 = v26 & 0xF0;
      *v10 = v27;
    }
  }
  else
  {
    v24 = v17 >> 1;
    while ( 1 )
    {
      v25 = v24;
      if ( v15 <= v24 )
        v25 = v15;
      memmove(v10, &v10[-v15], v25);
      v10 += v25;
      v24 -= v25;
      if ( !v24 )
        break;
      v15 *= 2;
    }
    if ( (v17 & 1) != 0 )
      *v10 = v10[-v15] & 0xF0;
  }
}
