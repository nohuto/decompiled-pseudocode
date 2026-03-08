/*
 * XREFs of ?vSrcTranCopyS1D1@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0297930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS1D1(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9)
{
  __int64 v9; // rbx
  unsigned __int32 v10; // r11d
  __int64 v11; // rsi
  unsigned __int32 v12; // r10d
  int v13; // r8d
  int v14; // edi
  int v15; // ebp
  unsigned __int8 *v16; // rdx
  const unsigned __int8 *v17; // rax
  const unsigned __int8 *v18; // rcx
  const unsigned __int8 *v19; // r9
  int v20; // r8d
  __int64 v21; // r14
  int v22; // ebx
  __int64 v23; // rsi
  const unsigned __int8 *v24; // r8
  int v25; // eax
  int v26; // r10d
  int v27; // eax
  __int64 v28; // r14
  int v29; // ebx
  __int64 v30; // rsi
  const unsigned __int8 *v31; // r8
  int v32; // eax
  int v33; // r10d
  int v34; // eax

  v9 = a3;
  v10 = -1;
  v11 = a2;
  v12 = -1;
  v13 = a6 + a2 - a5;
  v14 = ((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F;
  v15 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v12 = _byteswap_ulong(0xFFFFFFFF >> v15);
  if ( (((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F) != 0 )
    v10 = _byteswap_ulong(-1 << (32 - v14));
  v16 = &a4[((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v17 = &a1[((__int64)v13 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v18 = &a1[(v11 >> 3) & 0xFFFFFFFFFFFFFFFCuLL];
  v19 = &v18[v9 * a8];
  v20 = ((v13 >> 3) & 0xFFFFFFFC) - ((v11 >> 3) & 0xFFFFFFFC);
  if ( a9 )
  {
    if ( v18 == v17 )
    {
      v26 = v10 & v12;
      do
      {
        v27 = *(_DWORD *)v18;
        v18 += v9;
        *(_DWORD *)v16 |= v26 & v27;
        v16 += a7;
      }
      while ( v18 != v19 );
    }
    else
    {
      v21 = v20;
      v22 = v9 - v20;
      v23 = a7 - v20;
      do
      {
        v24 = &v18[v21];
        if ( v15 )
        {
          *(_DWORD *)v16 |= v12 & *(_DWORD *)v18;
          v16 += 4;
          v18 += 4;
        }
        while ( v18 != v24 )
        {
          v25 = *(_DWORD *)v18;
          v18 += 4;
          *(_DWORD *)v16 |= v25;
          v16 += 4;
        }
        if ( v14 )
          *(_DWORD *)v16 |= v10 & *(_DWORD *)v18;
        v18 += v22;
        v16 += v23;
      }
      while ( v18 != v19 );
    }
  }
  else if ( v18 == v17 )
  {
    v33 = v10 & v12;
    do
    {
      v34 = *(_DWORD *)v18;
      v18 += v9;
      *(_DWORD *)v16 &= ~(v33 & v34);
      v16 += a7;
    }
    while ( v18 != v19 );
  }
  else
  {
    v28 = v20;
    v29 = v9 - v20;
    v30 = a7 - v20;
    do
    {
      v31 = &v18[v28];
      if ( v15 )
      {
        *(_DWORD *)v16 &= ~(v12 & *(_DWORD *)v18);
        v16 += 4;
        v18 += 4;
      }
      while ( v18 != v31 )
      {
        v32 = *(_DWORD *)v18;
        v18 += 4;
        *(_DWORD *)v16 &= ~v32;
        v16 += 4;
      }
      if ( v14 )
        *(_DWORD *)v16 &= ~(v10 & *(_DWORD *)v18);
      v18 += v29;
      v16 += v30;
    }
    while ( v18 != v19 );
  }
}
