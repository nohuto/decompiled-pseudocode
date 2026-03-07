_QWORD *__fastcall IopSaveRestoreConfiguration(__int64 a1, unsigned int a2, _QWORD **a3, char a4)
{
  __int64 *v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  int v11; // eax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rcx
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  _QWORD *result; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm1

  if ( a2 )
  {
    v4 = (__int64 *)(a1 + 32);
    v5 = a2;
    do
    {
      v6 = *v4;
      if ( a4 )
      {
        v7 = *(__int64 **)(v6 + 16);
        *(_QWORD *)(v6 + 24) = v7;
      }
      else
      {
        v7 = *(__int64 **)(v6 + 24);
        *(_QWORD *)(v6 + 16) = v7;
      }
      v8 = *v7;
      v9 = v8 + 24;
      v10 = v8 + 8 * (*(unsigned int *)(v8 + 20) + 3LL);
      while ( v9 < v10 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v9 + 8LL) )
        {
          v18 = *(_QWORD *)(*(_QWORD *)v9 + 32LL);
          if ( a4 )
          {
            v11 = *(_DWORD *)(v18 + 152);
            v12 = *(_OWORD *)(v18 + 56);
            *(_OWORD *)(v18 + 160) = *(_OWORD *)(v18 + 40);
            v13 = *(_OWORD *)(v18 + 72);
            *(_OWORD *)(v18 + 176) = v12;
            v14 = *(_OWORD *)(v18 + 88);
            *(_OWORD *)(v18 + 192) = v13;
            v15 = *(_OWORD *)(v18 + 104);
            *(_OWORD *)(v18 + 208) = v14;
            v16 = *(_OWORD *)(v18 + 120);
            *(_OWORD *)(v18 + 224) = v15;
            v17 = *(_OWORD *)(v18 + 136);
            *(_OWORD *)(v18 + 240) = v16;
            *(_OWORD *)(v18 + 256) = v17;
            *(_DWORD *)(v18 + 272) = v11;
          }
          else
          {
            v19 = *(_DWORD *)(v18 + 272);
            v20 = *(_OWORD *)(v18 + 176);
            *(_OWORD *)(v18 + 40) = *(_OWORD *)(v18 + 160);
            v21 = *(_OWORD *)(v18 + 192);
            *(_OWORD *)(v18 + 56) = v20;
            v22 = *(_OWORD *)(v18 + 208);
            *(_OWORD *)(v18 + 72) = v21;
            v23 = *(_OWORD *)(v18 + 224);
            *(_OWORD *)(v18 + 88) = v22;
            v24 = *(_OWORD *)(v18 + 240);
            *(_OWORD *)(v18 + 104) = v23;
            v25 = *(_OWORD *)(v18 + 256);
            *(_OWORD *)(v18 + 120) = v24;
            *(_OWORD *)(v18 + 136) = v25;
            *(_DWORD *)(v18 + 152) = v19;
          }
        }
        v9 += 8LL;
      }
      v4 += 8;
      --v5;
    }
    while ( v5 );
  }
  for ( result = *a3; result != a3; result = (_QWORD *)*result )
  {
    if ( a4 )
    {
      v27 = *(_OWORD *)result;
      *((_OWORD *)result - 2) = *((_OWORD *)result - 3);
      *((_OWORD *)result - 1) = v27;
    }
    else
    {
      v28 = *((_OWORD *)result - 1);
      *((_OWORD *)result - 3) = *((_OWORD *)result - 2);
      *(_OWORD *)result = v28;
    }
  }
  return result;
}
