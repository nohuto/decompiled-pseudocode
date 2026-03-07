void __fastcall vHorizontalLine8(unsigned __int8 *a1, int a2, int a3, unsigned int a4)
{
  size_t v4; // r8
  unsigned __int8 *v5; // r10
  void *v6; // rsi
  unsigned __int64 v7; // r11
  unsigned __int8 *v8; // r10
  int v9; // r8d
  int v10; // r8d

  v4 = (unsigned int)(a3 - a2);
  v5 = &a1[a2];
  if ( (unsigned int)v4 <= 6 )
  {
    if ( (_DWORD)v4 )
    {
      LOBYTE(a2) = a4;
      memset_0(v5, a2, v4);
    }
    return;
  }
  switch ( a2 & 3 )
  {
    case 1:
      *v5++ = a4;
      LODWORD(v4) = v4 - 1;
      goto LABEL_9;
    case 2:
LABEL_9:
      *(_WORD *)v5 = a4;
      v5 += 2;
      LODWORD(v4) = v4 - 2;
      break;
    case 3:
      *v5++ = a4;
      LODWORD(v4) = v4 - 1;
      break;
  }
  v6 = v5;
  v7 = (unsigned __int64)((unsigned int)v4 & 0xFFFFFFFC) >> 2;
  if ( v7 )
  {
    if ( ((unsigned __int8)v5 & 4) == 0 )
      goto LABEL_14;
    *(_DWORD *)v5 = a4;
    if ( --v7 )
    {
      v6 = v5 + 4;
LABEL_14:
      memset64(v6, a4 | ((unsigned __int64)a4 << 32), v7 >> 1);
      if ( (v7 & 1) != 0 )
        *((_DWORD *)v6 + v7 - 1) = a4;
    }
  }
  v8 = &v5[v4 & 0xFFFFFFFC];
  v9 = (v4 & 3) - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        *(_WORD *)v8 = a4;
        v8[2] = a4;
      }
    }
    else
    {
      *(_WORD *)v8 = a4;
    }
  }
  else
  {
    *v8 = a4;
  }
}
