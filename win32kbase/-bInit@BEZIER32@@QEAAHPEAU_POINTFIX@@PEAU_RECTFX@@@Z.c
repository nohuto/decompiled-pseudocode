/*
 * XREFs of ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0189EA0
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C018A9F0 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1C018A15C (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C018AC8C (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?vSteadyState@HFDBASIS32@@QEAAXJ@Z @ 0x1C018AFDC (-vSteadyState@HFDBASIS32@@QEAAXJ@Z.c)
 */

__int64 __fastcall BEZIER32::bInit(BEZIER32 *this, struct _POINTFIX *a2, struct _RECTFX *a3)
{
  struct _RECTFX *v3; // rdi
  int v6; // ebp
  __m128i *v7; // r11
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  int v10; // edx
  unsigned __int32 v11; // r10d
  __int32 v12; // r11d
  unsigned __int32 v13; // r14d
  int v14; // eax
  int v15; // r8d
  int v16; // r15d
  int v17; // r12d
  int v18; // r13d
  __int64 result; // rax
  HFDBASIS32 *v20; // r9
  int v21; // r8d
  int v22; // r11d
  int v23; // esi
  int v24; // edi
  int v25; // edx
  int v26; // r15d
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  HFDBASIS32 *v34; // r10
  _DWORD *v35; // r9
  int v36; // ecx
  _DWORD *v37; // r10
  int v38; // edx
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // ecx

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
  v20 = (BEZIER32 *)((char *)this + 4);
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
    v21 = *((_DWORD *)this + 7);
    v22 = *((_DWORD *)this + 8);
    while ( 1 )
    {
      v23 = *((_DWORD *)this + 3);
      v24 = *((_DWORD *)this + 4);
      v25 = -v23;
      v26 = 65472 << v6;
      v27 = -v23;
      v28 = -v24;
      if ( v24 >= 0 )
        v28 = *((_DWORD *)this + 4);
      if ( v23 >= 0 )
        v27 = *((_DWORD *)this + 3);
      if ( v27 <= v28 )
      {
        v25 = *((_DWORD *)this + 4);
        if ( v24 < 0 )
          v25 = -*((_DWORD *)this + 4);
      }
      else if ( v23 >= 0 )
      {
        v25 = *((_DWORD *)this + 3);
      }
      if ( v25 <= v26 )
      {
        v29 = -v21;
        v30 = -v22;
        v31 = -v21;
        if ( v22 >= 0 )
          v30 = v22;
        if ( v21 >= 0 )
          v31 = v21;
        if ( v31 <= v30 )
        {
          v29 = v22;
          if ( v22 < 0 )
            v29 = -v22;
        }
        else if ( v21 >= 0 )
        {
          v29 = v21;
        }
        if ( v29 <= v26 )
          break;
      }
      v6 += 2;
      v32 = (v24 + v23) >> 1;
      *((_DWORD *)this + 3) = v32;
      v21 = (v22 + v21) >> 1;
      *((_DWORD *)this + 2) = (*((_DWORD *)this + 2) - (v32 >> v6)) >> 1;
      v33 = *((_DWORD *)this + 6) - (v21 >> v6);
      *((_DWORD *)this + 7) = v21;
      *((_DWORD *)this + 6) = v33 >> 1;
      *(_DWORD *)this *= 2;
    }
  }
  HFDBASIS32::vSteadyState(v20, v6);
  HFDBASIS32::vSteadyState(v34, v6);
  v36 = v35[2];
  v38 = v37[2];
  v39 = v35[1];
  *v35 += v39;
  v35[1] = v36 + v39;
  v40 = v36 + v36 - v35[3];
  v35[3] = v36;
  v41 = v37[1];
  *v37 += v41;
  v37[1] = v38 + v41;
  v42 = v38 - v37[3];
  v35[2] = v40;
  --*(_DWORD *)this;
  result = 1LL;
  v37[2] = v38 + v42;
  v37[3] = v38;
  return result;
}
