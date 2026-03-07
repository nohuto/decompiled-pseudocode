__int64 __fastcall ESTROBJ::vCharPos_H3(
        __int64 a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int *a10)
{
  __int64 v10; // rax
  int v12; // r8d
  int v14; // ecx
  int v15; // r10d
  struct _GLYPHPOS *v16; // r13
  int v17; // r10d
  unsigned __int16 *v18; // rcx
  int v19; // edi
  POINTL *p_ptl; // r12
  int v21; // r9d
  LONG *p_y; // r14
  int v23; // ebp
  int *v24; // rax
  int v25; // r15d
  __int64 result; // rax
  int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // r8d
  _DWORD *v30; // rdx
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // ecx
  int v37; // edx
  int v38; // edx
  __m128i v39; // xmm1
  int v40; // edi
  int v41; // r8d
  _DWORD *v42; // rdi
  int v43; // edx
  int v44; // ecx
  int v45; // eax
  int v46; // [rsp+80h] [rbp+8h]
  struct XDCOBJ *v47; // [rsp+88h] [rbp+10h]
  int v49; // [rsp+98h] [rbp+20h]

  v47 = a2;
  v10 = *(_QWORD *)a3;
  v12 = *(_DWORD *)(a1 + 4);
  v14 = a6;
  v15 = a4;
  v46 = 0;
  if ( a7 | a6 )
  {
    v39 = (__m128i)a9;
    v40 = v12 | *(_DWORD *)(v10 + 276) & 0x40 | 2;
    *(_DWORD *)(a1 + 4) = v40;
    if ( v14 )
    {
      a6 = 0;
      bFToL((float)v14 * *(float *)v39.m128i_i32, &a6, 0);
      v41 = a6;
      *(_DWORD *)(a1 + 116) = a6;
      if ( v41 > 0 )
        *(_DWORD *)(a1 + 4) = v40 | 0x800;
    }
    v42 = (_DWORD *)(a1 + 120);
    if ( bCalcBreakExtra(_mm_cvtsi128_si32(v39), a7, a8, a1 + 120) )
    {
      v43 = *(_DWORD *)(a1 + 116);
      v44 = *(_DWORD *)(*(_QWORD *)a3 + 468LL);
      if ( *v42 + v43 + v44 < 0 )
        *v42 = -(v43 + v44);
      v45 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      *(_DWORD *)(a1 + 4) |= 0x1000u;
      v46 = v45;
    }
    a2 = v47;
    v15 = a4;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = v12 | *(_DWORD *)(v10 + 276) & 0x71 | 2;
  }
  v16 = *(struct _GLYPHPOS **)(a1 + 64);
  v17 = v15 + 8;
  v18 = *(unsigned __int16 **)(a1 + 40);
  v19 = 0;
  a7 = 0;
  p_ptl = &v16->ptl;
  v21 = (a5 + 8) >> 4;
  p_y = &v16->ptl.y;
  v16->ptl.x = v17 >> 4;
  v23 = 0;
  v24 = a10;
  v25 = 0;
  v49 = v17;
  a6 = v21;
  v16->ptl.y = v21;
  if ( v24 )
  {
    v27 = *v24;
  }
  else
  {
    result = RFONTOBJ::bGetGlyphMetricsPlus(a3, *(_DWORD *)a1, v16, v18, &a7, a2, (struct ESTROBJ *)a1);
    if ( !(_DWORD)result )
      return result;
    v27 = a7;
    v21 = a6;
    v17 = v49;
  }
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 232) |= 2u;
    *(_QWORD *)(a1 + 32) = v28;
  }
  if ( (*(_BYTE *)(a1 + 4) & 0x30) != 0x30 || (v37 = *(_DWORD *)(a1 + 116), v37 < 0) || *(_DWORD *)(a1 + 120) )
  {
    v29 = *(_DWORD *)a1;
    while ( 1 )
    {
      v30 = (_DWORD *)p_ptl[-1];
      v31 = v23;
      v32 = v30[3];
      v23 = v19 + v30[4];
      if ( v23 >= v31 )
        v23 = v31;
      v33 = v19 + v30[5];
      if ( v33 <= v25 )
        v33 = v25;
      v19 += v32;
      v25 = v33;
      v34 = *(_DWORD *)(a1 + 116);
      if ( v34 && v34 + v32 > 0 )
        v19 += v34;
      if ( p_ptl[-2].x == v46 )
        v19 += *(_DWORD *)(a1 + 120);
      if ( !--v29 )
        break;
      p_ptl += 3;
      p_ptl->y = v21;
      p_ptl->x = (v19 + v17) >> 4;
    }
    if ( v19 <= v25 )
      goto LABEL_21;
  }
  else
  {
    v19 = v37 + HIDWORD(v16->pgdf[1].ppo);
    v38 = *(_DWORD *)a1 - 1;
    if ( *(_DWORD *)a1 != 1 )
    {
      do
      {
        p_y += 6;
        *(p_y - 1) = (v19 + v17) >> 4;
        *p_y = v21;
        v19 += *(_DWORD *)(a1 + 116) + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
        --v38;
      }
      while ( v38 );
    }
  }
  v25 = v19;
LABEL_21:
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 112) = v19;
  *(_DWORD *)(a1 + 80) = v19;
  *(_DWORD *)(a1 + 96) = v23;
  *(_DWORD *)(a1 + 104) = v25;
  v35 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 976LL) + 340LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 100) = -*(_DWORD *)(v35 + 320);
    result = *(_QWORD *)a3;
    v36 = -*(_DWORD *)(*(_QWORD *)a3 + 316LL);
  }
  else
  {
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(v35 + 316);
    result = *(_QWORD *)a3;
    v36 = *(_DWORD *)(*(_QWORD *)a3 + 320LL);
  }
  *(_DWORD *)(a1 + 108) = v36;
  *(_DWORD *)(a1 + 232) |= 4u;
  return result;
}
