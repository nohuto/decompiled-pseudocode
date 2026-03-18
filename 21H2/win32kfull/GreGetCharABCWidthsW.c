/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00EA92C
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C00EA7C0 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C001A8BC (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00EAC98 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, __int64 a6)
{
  int v6; // r13d
  unsigned int v9; // edi
  __int64 v10; // r10
  float v11; // xmm6_4
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned __int16 *v14; // r9
  unsigned __int16 *i; // rax
  struct _GLYPHPOS *v16; // r12
  struct _GLYPHPOS *v17; // rdi
  GLYPHDEF *pgdf; // rbx
  __m128i v19; // xmm0
  unsigned int v20; // r8d
  __m128i v21; // xmm0
  unsigned int v22; // r8d
  int v23; // eax
  struct _GLYPHPOS *v24; // r8
  float *v25; // r9
  GLYPHDEF *v26; // rdx
  unsigned __int16 v28[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  struct _GLYPHPOS *v30; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  __int64 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  struct _GLYPHPOS v36[32]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 v37[32]; // [rsp+398h] [rbp+290h] BYREF

  v6 = a2;
  *(_DWORD *)v28 = a2;
  v31 = a6;
  v33 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v34, a1);
  if ( v34 )
  {
    if ( a3 )
    {
      v29 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v29, (struct XDCOBJ *)&v34, 0, (a5 & 2) != 0 ? 4 : 2) )
        GreAcquireSemaphore(*(_QWORD *)(v29 + 504));
      v10 = v29;
      if ( v29 )
      {
        v9 = 1;
        if ( (*(_DWORD *)(v29 + 84) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v29, a4, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v29, v28, 1u);
            v6 = *(_DWORD *)v28;
          }
        }
        v11 = *(float *)(v10 + 680);
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)(v10 + 96) + 3056LL) )
        {
          while ( 1 )
          {
            v12 = a3;
            v30 = v36;
            if ( a3 > 0x20 )
              v12 = 32LL;
            LODWORD(v32) = v12;
            v13 = v12;
            if ( a4 )
            {
              v14 = a4;
              a4 = (unsigned __int16 *)((char *)a4 + v13 * 2);
            }
            else
            {
              for ( i = v37; i < &v37[v13]; ++i )
                *i = v6++;
              v14 = v37;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v29,
                                  (struct RFONTOBJ *)(unsigned int)v12,
                                  v36,
                                  v14,
                                  (struct XDCOBJ *)&v34,
                                  0LL) )
              break;
            v16 = &v36[v12];
            if ( (a5 & 1) != 0 )
            {
              if ( v36 < v16 )
              {
                v17 = v30;
                v12 = v31;
                do
                {
                  pgdf = v17->pgdf;
                  LODWORD(v30) = 0;
                  bFToL((float)SLODWORD(pgdf[2].pgb) * v11, (int *)&v30, 0);
                  v19 = _mm_cvtsi32_si128(HIDWORD(pgdf[2].ppo));
                  *(_DWORD *)v28 &= v20;
                  bFToL(_mm_cvtepi32_ps(v19).m128_f32[0] * v11, (int *)v28, v20);
                  v21 = _mm_cvtsi32_si128(HIDWORD(pgdf[1].ppo));
                  LODWORD(v31) = v22 & v31;
                  bFToL(_mm_cvtepi32_ps(v21).m128_f32[0] * v11, (int *)&v31, v22);
                  ++v17;
                  v23 = *(_DWORD *)v28 - (_DWORD)v30;
                  *(_DWORD *)v12 = (_DWORD)v30;
                  *(_DWORD *)(v12 + 4) = v23;
                  *(_DWORD *)(v12 + 8) = v31 - *(_DWORD *)v28;
                  v12 += 12LL;
                }
                while ( v17 < v16 );
                v31 = v12;
                v9 = 1;
                LODWORD(v12) = v32;
              }
            }
            else if ( v36 < v16 )
            {
              v24 = v30;
              v25 = (float *)v33;
              do
              {
                v26 = v24->pgdf;
                ++v24;
                *v25 = (float)SLODWORD(v26[2].pgb) * v11;
                v25[1] = (float)(HIDWORD(v26[2].ppo) - LODWORD(v26[2].pgb)) * v11;
                v25[2] = (float)(HIDWORD(v26[1].ppo) - HIDWORD(v26[2].ppo)) * v11;
                v25 += 3;
              }
              while ( v24 < v16 );
              v33 = (__int64)v25;
            }
            a3 -= v12;
            if ( !a3 )
              goto LABEL_34;
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      v9 = 0;
LABEL_34:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    EngSetLastError(6u);
    v9 = 0;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v34);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(&v35);
  return v9;
}
