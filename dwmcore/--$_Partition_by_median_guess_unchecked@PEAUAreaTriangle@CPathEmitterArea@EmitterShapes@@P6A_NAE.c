unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 (__fastcall *a4)(unsigned __int64, unsigned __int64))
{
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  int v12; // ecx
  __int128 v13; // xmm3
  __int64 v14; // xmm2_8
  bool v15; // zf
  unsigned __int64 v16; // r14
  int v17; // ecx
  __int128 v18; // xmm3
  __int64 v19; // xmm2_8
  int v20; // ecx
  __int128 v21; // xmm3
  __int64 v22; // xmm2_8
  __int128 v23; // xmm3
  int v24; // ecx
  __int64 v25; // xmm2_8
  int v26; // ecx
  __int128 v27; // xmm3
  __int64 v28; // xmm2_8
  __int128 v29; // xmm3
  int v30; // ecx
  __int64 v31; // xmm2_8
  int v32; // ecx
  __int128 v33; // xmm3
  __int64 v34; // xmm2_8
  unsigned __int64 *result; // rax

  v7 = a2 + 28 * ((0x6DB6DB6DB6DB6DB7LL * ((__int64)(a3 - a2) >> 2)) >> 1);
  std::_Guess_median_unchecked<EmitterShapes::CPathEmitterArea::AreaTriangle *,bool (*)(EmitterShapes::CPathEmitterArea::AreaTriangle const &,EmitterShapes::CPathEmitterArea::AreaTriangle const &)>(
    a2,
    v7,
    a3 - 28);
  v8 = v7 + 28;
  if ( a2 < v7 )
  {
    do
    {
      v9 = v7 - 28;
      if ( a4(v7 - 28, v7) )
        break;
      if ( a4(v7, v7 - 28) )
        break;
      v7 -= 28LL;
    }
    while ( a2 < v9 );
  }
  while ( v8 < a3 && !a4(v8, v7) && !a4(v7, v8) )
    v8 += 28LL;
  v10 = v8;
  v11 = v7;
  while ( 1 )
  {
    while ( v10 < a3 )
    {
      if ( a4(v7, v10) )
        goto LABEL_16;
      if ( a4(v10, v7) )
        break;
      if ( v8 != v10 )
      {
        v12 = *(_DWORD *)(v8 + 24);
        v13 = *(_OWORD *)v8;
        v14 = *(_QWORD *)(v8 + 16);
        *(_OWORD *)v8 = *(_OWORD *)v10;
        *(_QWORD *)(v8 + 16) = *(_QWORD *)(v10 + 16);
        *(_DWORD *)(v8 + 24) = *(_DWORD *)(v10 + 24);
        *(_OWORD *)v10 = v13;
        *(_QWORD *)(v10 + 16) = v14;
        *(_DWORD *)(v10 + 24) = v12;
      }
      v8 += 28LL;
LABEL_16:
      v10 += 28LL;
    }
    v15 = v11 == a2;
    if ( v11 > a2 )
    {
      v16 = v11 - 28;
      do
      {
        if ( !a4(v16, v7) )
        {
          if ( a4(v7, v16) )
            break;
          v7 -= 28LL;
          if ( v7 != v16 )
          {
            v17 = *(_DWORD *)(v7 + 24);
            v18 = *(_OWORD *)v7;
            v19 = *(_QWORD *)(v7 + 16);
            *(_OWORD *)v7 = *(_OWORD *)v16;
            *(_QWORD *)(v7 + 16) = *(_QWORD *)(v16 + 16);
            *(_DWORD *)(v7 + 24) = *(_DWORD *)(v16 + 24);
            *(_OWORD *)v16 = v18;
            *(_QWORD *)(v16 + 16) = v19;
            *(_DWORD *)(v16 + 24) = v17;
          }
        }
        v11 -= 28LL;
        v16 -= 28LL;
      }
      while ( a2 < v11 );
      v15 = v11 == a2;
    }
    if ( v15 )
      break;
    v11 -= 28LL;
    if ( v10 != a3 )
    {
      v32 = *(_DWORD *)(v10 + 24);
      v33 = *(_OWORD *)v10;
      v34 = *(_QWORD *)(v10 + 16);
      *(_OWORD *)v10 = *(_OWORD *)v11;
      *(_QWORD *)(v10 + 16) = *(_QWORD *)(v11 + 16);
      *(_DWORD *)(v10 + 24) = *(_DWORD *)(v11 + 24);
      *(_OWORD *)v11 = v33;
      *(_QWORD *)(v11 + 16) = v34;
      *(_DWORD *)(v11 + 24) = v32;
      goto LABEL_16;
    }
    v7 -= 28LL;
    if ( v11 != v7 )
    {
      v26 = *(_DWORD *)(v11 + 24);
      v27 = *(_OWORD *)v11;
      v28 = *(_QWORD *)(v11 + 16);
      *(_OWORD *)v11 = *(_OWORD *)v7;
      *(_QWORD *)(v11 + 16) = *(_QWORD *)(v7 + 16);
      *(_DWORD *)(v11 + 24) = *(_DWORD *)(v7 + 24);
      *(_OWORD *)v7 = v27;
      *(_QWORD *)(v7 + 16) = v28;
      *(_DWORD *)(v7 + 24) = v26;
    }
    v29 = *(_OWORD *)v7;
    v8 -= 28LL;
    v30 = *(_DWORD *)(v7 + 24);
    v31 = *(_QWORD *)(v7 + 16);
    *(_OWORD *)v7 = *(_OWORD *)v8;
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(v7 + 24) = *(_DWORD *)(v8 + 24);
    *(_OWORD *)v8 = v29;
    *(_QWORD *)(v8 + 16) = v31;
    *(_DWORD *)(v8 + 24) = v30;
  }
  if ( v10 != a3 )
  {
    if ( v8 != v10 )
    {
      v20 = *(_DWORD *)(v7 + 24);
      v21 = *(_OWORD *)v7;
      v22 = *(_QWORD *)(v7 + 16);
      *(_OWORD *)v7 = *(_OWORD *)v8;
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v8 + 16);
      *(_DWORD *)(v7 + 24) = *(_DWORD *)(v8 + 24);
      *(_OWORD *)v8 = v21;
      *(_QWORD *)(v8 + 16) = v22;
      *(_DWORD *)(v8 + 24) = v20;
    }
    v23 = *(_OWORD *)v7;
    v8 += 28LL;
    v24 = *(_DWORD *)(v7 + 24);
    v25 = *(_QWORD *)(v7 + 16);
    *(_OWORD *)v7 = *(_OWORD *)v10;
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(v10 + 16);
    *(_DWORD *)(v7 + 24) = *(_DWORD *)(v10 + 24);
    v7 += 28LL;
    *(_OWORD *)v10 = v23;
    *(_QWORD *)(v10 + 16) = v25;
    *(_DWORD *)(v10 + 24) = v24;
    goto LABEL_16;
  }
  result = a1;
  *a1 = v7;
  a1[1] = v8;
  return result;
}
