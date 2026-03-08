/*
 * XREFs of ShrinkDIB_CX @ 0x1C0266000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShrinkDIB_CX(__int64 a1, unsigned __int8 *a2, _BYTE *a3, __int64 a4, int a5)
{
  unsigned __int8 *v5; // r11
  int v7; // eax
  int v8; // edi
  int v9; // esi
  int v10; // ebx
  unsigned __int16 v11; // ax
  __int64 v12; // r10
  int v13; // r13d
  _WORD *v14; // r12
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // eax
  int v19; // r10d
  int v20; // r8d
  int v21; // ecx
  __int128 v22; // xmm0
  int v23; // ecx
  int v24; // r8d
  unsigned int i; // eax
  __int64 v26; // rdx
  __int64 v27; // r10
  int v28; // eax
  int v29; // r13d
  int v30; // r14d
  int v31; // edi
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  unsigned __int16 v38; // [rsp+0h] [rbp-40h]
  __int64 v39; // [rsp+8h] [rbp-38h]
  _BYTE v40[28]; // [rsp+10h] [rbp-30h]
  __int64 v41; // [rsp+2Ch] [rbp-14h]
  __int64 v42; // [rsp+2Ch] [rbp-14h]
  int v43; // [rsp+88h] [rbp+48h]

  v5 = a2;
  if ( a2 )
  {
    v7 = *(unsigned __int16 *)(a1 + 14);
    if ( *(_WORD *)(a1 + 14) )
    {
      v8 = v7 * a2[2];
      v9 = v7 * a2[1];
      v10 = v7 * *a2;
      v5 = &a2[2 * *(unsigned __int16 *)(a1 + 10) + *(unsigned __int16 *)(a1 + 10)];
    }
    else
    {
      v10 = 0;
      v8 = 0;
      v9 = 0;
    }
    v11 = *(_WORD *)(a1 + 12);
    v12 = *(_QWORD *)(a1 + 24);
    v13 = v11;
    v14 = *(_WORD **)(a1 + 40);
    v39 = v12;
    v38 = v11;
    if ( v11 )
    {
      do
      {
        v15 = (unsigned __int16)*v14++;
        v16 = v5[2];
        v17 = v12 + ((v15 >> 5) & 0x400);
        if ( (v15 & 0x4000) != 0 )
        {
          v18 = v15 & 0x3FFF;
          v19 = v18 * v16;
          v20 = v18 * v5[1];
          v21 = v18 * *v5;
          *(_DWORD *)&v40[24] = v19 + v8;
          v22 = *(_OWORD *)&v40[12];
          LODWORD(v41) = v20 + v9;
          v8 = *(_DWORD *)(v17 + 4LL * v5[2]) - v19;
          v12 = v39;
          v9 = *(_DWORD *)(v17 + 4LL * v5[1]) - v20;
          HIDWORD(v41) = v21 + v10;
          v10 = *(_DWORD *)(v17 + 4LL * *v5) - v21;
          --v13;
          *(_QWORD *)&v40[16] = v41;
          *(_OWORD *)v40 = v22;
        }
        else
        {
          v8 += *(_DWORD *)(v17 + 4 * v16);
          v9 += *(_DWORD *)(v17 + 4LL * v5[1]);
          v10 += *(_DWORD *)(v17 + 4LL * *v5);
        }
        v5 += 3;
      }
      while ( v13 );
      v11 = v38;
    }
    v23 = *(_DWORD *)&v40[20];
    if ( v11 == 1 )
    {
      v24 = *(_DWORD *)&v40[20];
      *(_QWORD *)v40 = *(_QWORD *)&v40[12];
    }
    else
    {
      v24 = *(_DWORD *)&v40[8];
    }
    for ( i = (unsigned __int16)*v14; *v14; v12 = v39 )
    {
      ++v14;
      v26 = v12 + ((i >> 5) & 0x400);
      v27 = v5[2];
      if ( (i & 0x4000) != 0 )
      {
        v28 = i & 0x3FFF;
        v29 = v28 * v5[1];
        v30 = v28 * v27;
        v31 = v28 * v27 + v8;
        *(_DWORD *)&v40[24] = v31;
        v43 = v28 * *v5;
        v32 = (6 * v23 - v24 - (v43 + v10)) >> 15;
        if ( (v32 & 0xFF00) != 0 )
          LOBYTE(v32) = ~HIBYTE(v32);
        *a3 = v32;
        v33 = (6 * *(_DWORD *)&v40[16] - *(_DWORD *)&v40[4] - (v9 + v29)) >> 15;
        if ( (v33 & 0xFF00) != 0 )
          LOBYTE(v33) = ~HIBYTE(v33);
        a3[1] = v33;
        v34 = (6 * *(_DWORD *)&v40[12] - *(_DWORD *)v40 - v31) >> 15;
        if ( (v34 & 0xFF00) != 0 )
          LOBYTE(v34) = ~HIBYTE(v34);
        a3[2] = v34;
        a3 += a5;
        *(_OWORD *)v40 = *(_OWORD *)&v40[12];
        v24 = *(_DWORD *)&v40[8];
        v8 = *(_DWORD *)(v26 + 4LL * v5[2]) - v30;
        HIDWORD(v42) = v43 + v10;
        LODWORD(v42) = v9 + v29;
        *(_QWORD *)&v40[16] = v42;
        v23 = v43 + v10;
        v9 = *(_DWORD *)(v26 + 4LL * v5[1]) - v29;
        v10 = *(_DWORD *)(v26 + 4LL * *v5) - v43;
      }
      else
      {
        v8 += *(_DWORD *)(v26 + 4 * v27);
        v9 += *(_DWORD *)(v26 + 4LL * v5[1]);
        v10 += *(_DWORD *)(v26 + 4LL * *v5);
      }
      i = (unsigned __int16)*v14;
      v5 += 3;
    }
    if ( a3 == (_BYTE *)(a4 - a5) )
    {
      v35 = (5 * v23 - v24) >> 15;
      if ( (v35 & 0xFF00) != 0 )
        LOBYTE(v35) = ~HIBYTE(v35);
      *a3 = v35;
      v36 = (5 * *(_DWORD *)&v40[16] - *(_DWORD *)&v40[4]) >> 15;
      if ( (v36 & 0xFF00) != 0 )
        LOBYTE(v36) = ~HIBYTE(v36);
      a3[1] = v36;
      v37 = (5 * *(_DWORD *)&v40[12] - *(_DWORD *)v40) >> 15;
      if ( (v37 & 0xFF00) != 0 )
        LOBYTE(v37) = ~HIBYTE(v37);
      a3[2] = v37;
    }
  }
}
