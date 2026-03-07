void __fastcall vSrcOpaqCopyS1D1(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  unsigned __int32 v11; // r11d
  __int64 v12; // rbx
  int v13; // r9d
  int v14; // edi
  int v15; // r12d
  unsigned __int32 v16; // r10d
  int v17; // r13d
  __int64 v18; // r15
  unsigned __int8 *v19; // r8
  const unsigned __int8 *v20; // rdx
  const unsigned __int8 *v21; // rbp
  const unsigned __int8 *v22; // rsi
  int v23; // ecx
  int v24; // ebx
  const unsigned __int8 *v25; // r9
  int v26; // eax
  int v27; // r10d
  int v28; // eax
  int v29; // ebx
  const unsigned __int8 *v30; // r9
  int v31; // eax
  int v32; // r10d
  int v33; // ecx
  int v34; // r9d
  int v35; // edi
  int v36; // edi
  __int64 v37; // rbp
  const unsigned __int8 *v38; // rbx
  int v39; // eax
  int v40; // r10d
  int v41; // ecx

  v11 = -1;
  v12 = a3;
  v13 = a6 + a2 - a5;
  v14 = a10 & 1;
  v15 = ((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F;
  v16 = -1;
  v17 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v16 = _byteswap_ulong(0xFFFFFFFF >> v17);
  if ( (((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F) != 0 )
    v11 = _byteswap_ulong(-1 << (32 - v15));
  v18 = a3;
  v19 = &a4[((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v20 = &a1[((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v21 = &a1[((__int64)v13 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v22 = &v20[v12 * a8];
  v23 = (_DWORD)v21 - (_DWORD)v20;
  if ( (a9 & 1) != 0 )
  {
    if ( (a10 & 1) == 0 )
    {
      if ( v20 == v21 )
      {
        v27 = v11 & v16;
        do
        {
          v28 = v27 & *(_DWORD *)v20;
          v20 += v12;
          *(_DWORD *)v19 = v28 | ~v27 & *(_DWORD *)v19;
          v19 += a7;
        }
        while ( v20 != v22 );
      }
      else
      {
        v24 = v12 - v23;
        do
        {
          v25 = &v20[v23];
          if ( v17 )
          {
            *(_DWORD *)v19 = v16 & *(_DWORD *)v20 | *(_DWORD *)v19 & ~v16;
            v19 += 4;
            v20 += 4;
          }
          while ( v20 != v25 )
          {
            v26 = *(_DWORD *)v20;
            v20 += 4;
            *(_DWORD *)v19 = v26;
            v19 += 4;
          }
          if ( v15 )
            *(_DWORD *)v19 = v11 & *(_DWORD *)v20 | *(_DWORD *)v19 & ~v11;
          v20 += v24;
          v19 += a7 - v23;
        }
        while ( v20 != v22 );
      }
      return;
    }
    goto LABEL_34;
  }
  if ( (a10 & 1) == 0 )
  {
LABEL_34:
    v34 = (((unsigned __int8)-(v14 != (a9 & 1)) | ((unsigned __int8)-(v14 != (a9 & 1)) << 8)) << 16) | (unsigned __int8)-(v14 != (a9 & 1)) | ((unsigned __int8)-(v14 != (a9 & 1)) << 8);
    v35 = (unsigned __int8)-(v14 != 0) | ((unsigned __int8)-(v14 != 0) << 8);
    v36 = (v35 << 16) | v35;
    if ( v20 == v21 )
    {
      v40 = v11 & v16;
      do
      {
        v41 = *(_DWORD *)v20;
        v20 += v18;
        *(_DWORD *)v19 = ~v40 & *(_DWORD *)v19 | v40 & (v36 ^ v34 & v41);
        v19 += a7;
      }
      while ( v20 != v22 );
    }
    else
    {
      v37 = (int)v12 - v23;
      do
      {
        v38 = &v20[v23];
        if ( v17 )
        {
          *(_DWORD *)v19 = *(_DWORD *)v19 & ~v16 | v16 & (v36 ^ v34 & *(_DWORD *)v20);
          v19 += 4;
          v20 += 4;
        }
        while ( v20 != v38 )
        {
          v39 = *(_DWORD *)v20;
          v20 += 4;
          *(_DWORD *)v19 = v36 ^ v34 & v39;
          v19 += 4;
        }
        if ( v15 )
          *(_DWORD *)v19 = *(_DWORD *)v19 & ~v11 | v11 & (v36 ^ v34 & *(_DWORD *)v20);
        v20 += v37;
        v19 += a7 - v23;
      }
      while ( v20 != v22 );
    }
    return;
  }
  if ( v20 == v21 )
  {
    v32 = v11 & v16;
    do
    {
      v33 = *(_DWORD *)v20;
      v20 += v12;
      *(_DWORD *)v19 = ~v32 & *(_DWORD *)v19 | v32 & ~v33;
      v19 += a7;
    }
    while ( v20 != v22 );
  }
  else
  {
    v29 = v12 - v23;
    do
    {
      v30 = &v20[v23];
      if ( v17 )
      {
        *(_DWORD *)v19 = *(_DWORD *)v19 & ~v16 | v16 & ~*(_DWORD *)v20;
        v19 += 4;
        v20 += 4;
      }
      while ( v20 != v30 )
      {
        v31 = *(_DWORD *)v20;
        v20 += 4;
        *(_DWORD *)v19 = ~v31;
        v19 += 4;
      }
      if ( v15 )
        *(_DWORD *)v19 = *(_DWORD *)v19 & ~v11 | v11 & ~*(_DWORD *)v20;
      v20 += v29;
      v19 += a7 - v23;
    }
    while ( v20 != v22 );
  }
}
