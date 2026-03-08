/*
 * XREFs of ?vSrcAlphaCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0274310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcAlphaCopyS4D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  __int64 v8; // rbp
  unsigned int v9; // r10d
  unsigned __int8 *v10; // r8
  int v11; // r13d
  int v12; // edi
  __int64 v13; // r14
  const unsigned __int8 *v14; // rsi
  __int64 v15; // r15
  const unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rcx
  __int64 v18; // r11
  unsigned __int8 v19; // r10
  _DWORD *v20; // rbx
  unsigned __int8 v21; // r9
  unsigned __int64 v22; // rax

  v8 = a3;
  v9 = (a5 + 1) & 0xFFFFFFFE;
  v10 = &a4[4 * a5];
  v11 = v9 - a5;
  v12 = a8;
  v13 = (unsigned int)((int)((a6 & 0xFFFFFFFE) - v9) / 2);
  v14 = &a1[a2 / 2];
  if ( a8 )
  {
    v15 = a7;
    do
    {
      v16 = v14;
      v17 = v10;
      if ( v11 )
      {
        v17 = v10 + 4;
        if ( (*v14 & 0xF) != 0 )
          *(_DWORD *)v10 = dword_1C0329AF0[*v14 & 0xF];
        v16 = v14 + 1;
      }
      if ( (int)v13 > 0 )
      {
        v18 = v13;
        do
        {
          v19 = *v16;
          v20 = v17 + 4;
          v21 = *v16;
          if ( (*v16 & 0xF0) != 0 )
            *(_DWORD *)v17 = dword_1C0329AF0[(unsigned __int64)*v16 >> 4];
          v17 += 8;
          if ( (v19 & 0xF) != 0 )
            *v20 = dword_1C0329AF0[v21 & 0xF];
          ++v16;
          --v18;
        }
        while ( v18 );
        v15 = a7;
      }
      if ( a6 != (a6 & 0xFFFFFFFE) )
      {
        v22 = *v16;
        if ( (v22 & 0xF0) != 0 )
          *(_DWORD *)v17 = dword_1C0329AF0[v22 >> 4];
      }
      v14 += v8;
      v10 += v15;
      --v12;
    }
    while ( v12 );
  }
}
