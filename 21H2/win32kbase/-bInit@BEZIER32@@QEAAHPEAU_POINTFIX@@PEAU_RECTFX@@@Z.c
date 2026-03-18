/*
 * XREFs of ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0092660
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C00921C0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vSteadyState@HFDBASIS32@@QEAAXJ@Z @ 0x1C00928F8 (-vSteadyState@HFDBASIS32@@QEAAXJ@Z.c)
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0092930 (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1C016D9C8 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 */

__int64 __fastcall BEZIER32::bInit(BEZIER32 *this, struct _POINTFIX *a2, struct _RECTFX *a3)
{
  struct _RECTFX *v3; // r14
  int v6; // esi
  __m128i *v7; // r11
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  int v10; // edx
  unsigned __int32 v11; // r10d
  __int32 v12; // r11d
  unsigned __int32 v13; // ebp
  int v14; // eax
  int v15; // r8d
  int v16; // r15d
  int v17; // r12d
  int v18; // r13d
  HFDBASIS32 *v19; // r9
  int v20; // r8d
  int v21; // edx
  int v22; // r11d
  int v23; // edi
  int v24; // r14d
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  HFDBASIS32 *v29; // r10
  _DWORD *v30; // r9
  int v31; // ecx
  _DWORD *v32; // r10
  int v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  __int64 result; // rax
  int v39; // ecx

  v3 = (struct _RECTFX *)((char *)this + 36);
  *(_DWORD *)this = 1;
  v6 = 0;
  vBoundBox(a2, (struct _RECTFX *)((char *)this + 36));
  v8 = *v7;
  v9 = v7[1];
  v10 = *(_OWORD *)v7 - v3->xLeft;
  v11 = _mm_srli_si128(*v7, 8).m128i_u32[0] - v3->xLeft;
  v12 = v9.m128i_i32[0] - v3->xLeft;
  v13 = _mm_srli_si128(v9, 8).m128i_u32[0] - v3->xLeft;
  v14 = *((_DWORD *)this + 10);
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) - v14;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - v14;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 4)) - v14;
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v14;
  if ( ((v10 | v11 | v12 | v13 | v15 | v18 | v17 | v16) & 0xFFFFC000) != 0 )
    return 0LL;
  v19 = (BEZIER32 *)((char *)this + 4);
  *((_DWORD *)this + 1) = v10 << 10;
  *((_DWORD *)this + 2) = (v13 - v10) << 10;
  *((_DWORD *)this + 3) = 6144 * (v13 + v11 - 2 * v12);
  *((_DWORD *)this + 4) = 6144 * (v12 + v10 - 2 * v11);
  *((_DWORD *)this + 5) = v15 << 10;
  *((_DWORD *)this + 6) = (v16 - v15) << 10;
  *((_DWORD *)this + 7) = 6144 * (v16 + v18 - 2 * v17);
  *((_DWORD *)this + 8) = 6144 * (v17 + v15 - 2 * v18);
  if ( !a3 || bIntersect(v3, a3) )
  {
    v20 = *((_DWORD *)this + 3);
    v21 = *((_DWORD *)this + 7);
    v22 = *((_DWORD *)this + 8);
    while ( 1 )
    {
      v23 = *((_DWORD *)this + 4);
      v24 = 65472 << v6;
      v25 = -v23;
      v26 = -v20;
      if ( v20 >= 0 )
        v26 = v20;
      if ( v23 >= 0 )
        v25 = *((_DWORD *)this + 4);
      if ( v26 <= v25 )
      {
        v26 = *((_DWORD *)this + 4);
        if ( v23 < 0 )
          v26 = -*((_DWORD *)this + 4);
      }
      if ( v26 <= v24 )
      {
        v27 = -v21;
        v28 = -v22;
        if ( v21 >= 0 )
          v27 = v21;
        if ( v22 >= 0 )
          v28 = v22;
        if ( v27 <= v28 )
        {
          v27 = v22;
          if ( v22 < 0 )
            v27 = -v22;
        }
        if ( v27 <= v24 )
          break;
      }
      v6 += 2;
      v20 = (v23 + v20) >> 1;
      *((_DWORD *)this + 3) = v20;
      v21 = (v22 + v21) >> 1;
      v39 = *((_DWORD *)this + 2) - (v20 >> v6);
      *((_DWORD *)this + 7) = v21;
      *((_DWORD *)this + 2) = v39 >> 1;
      *((_DWORD *)this + 6) = (*((_DWORD *)this + 6) - (v21 >> v6)) >> 1;
      *(_DWORD *)this *= 2;
    }
  }
  HFDBASIS32::vSteadyState(v19, v6);
  HFDBASIS32::vSteadyState(v29, v6);
  v31 = v30[2];
  v33 = v32[2];
  v34 = v30[1];
  *v30 += v34;
  v30[1] = v31 + v34;
  v35 = v31 + v31 - v30[3];
  v30[3] = v31;
  v36 = v32[1];
  *v32 += v36;
  v32[1] = v33 + v36;
  v37 = v33 - v32[3];
  v30[2] = v35;
  --*(_DWORD *)this;
  result = 1LL;
  v32[2] = v33 + v37;
  v32[3] = v33;
  return result;
}
