void __fastcall SetGrayColorTable(_OWORD *a1, __int64 a2)
{
  int v2; // r10d
  unsigned __int8 *v4; // r8
  int v5; // edx
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  _OWORD *v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r8
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  _OWORD *v16; // rax
  __int64 v17; // rcx
  _OWORD *v18; // r8
  __int128 v19; // xmm1
  _OWORD *v20; // rax
  _OWORD *v21; // rdx
  __int128 v22; // xmm1

  v2 = *(unsigned __int16 *)(a2 + 2);
  if ( *(_WORD *)(a2 + 2) )
  {
    v4 = *(unsigned __int8 **)(a2 + 80);
    if ( a1 )
    {
      do
      {
        v5 = *((_DWORD *)a1 + v4[1] + 256) + *((_DWORD *)a1 + v4[2] + 512);
        v6 = *v4;
        v4 += 4;
        *(v4 - 1) = (unsigned __int16)(*((_WORD *)a1 + 2 * v6) + v5) >> 8;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      do
      {
        v7 = 19595 * v4[2];
        v8 = 38469 * v4[1];
        v9 = *v4;
        v4 += 4;
        *(v4 - 1) = (7471 * v9 + v8 + v7 + 0x7FFF) / 0xFFFFu;
        --v2;
      }
      while ( v2 );
    }
  }
  else
  {
    v10 = *(_OWORD **)(a2 + 8);
    if ( a1 != v10 )
    {
      v11 = 8LL;
      v12 = 8LL;
      v13 = &v10[64 * (unsigned __int64)*(unsigned __int8 *)(a2 + 68)];
      v14 = a1;
      do
      {
        *v13 = *v14;
        v13[1] = v14[1];
        v13[2] = v14[2];
        v13[3] = v14[3];
        v13[4] = v14[4];
        v13[5] = v14[5];
        v13[6] = v14[6];
        v13 += 8;
        v15 = v14[7];
        v14 += 8;
        *(v13 - 1) = v15;
        --v12;
      }
      while ( v12 );
      v16 = a1 + 64;
      v17 = 8LL;
      v18 = (_OWORD *)(*(_QWORD *)(a2 + 8) + ((unsigned __int64)*(unsigned __int8 *)(a2 + 67) << 10));
      do
      {
        *v18 = *v16;
        v18[1] = v16[1];
        v18[2] = v16[2];
        v18[3] = v16[3];
        v18[4] = v16[4];
        v18[5] = v16[5];
        v18[6] = v16[6];
        v18 += 8;
        v19 = v16[7];
        v16 += 8;
        *(v18 - 1) = v19;
        --v17;
      }
      while ( v17 );
      v20 = a1 + 128;
      v21 = (_OWORD *)(((unsigned __int64)*(unsigned __int8 *)(a2 + 66) << 10) + *(_QWORD *)(a2 + 8));
      do
      {
        *v21 = *v20;
        v21[1] = v20[1];
        v21[2] = v20[2];
        v21[3] = v20[3];
        v21[4] = v20[4];
        v21[5] = v20[5];
        v21[6] = v20[6];
        v21 += 8;
        v22 = v20[7];
        v20 += 8;
        *(v21 - 1) = v22;
        --v11;
      }
      while ( v11 );
    }
  }
}
