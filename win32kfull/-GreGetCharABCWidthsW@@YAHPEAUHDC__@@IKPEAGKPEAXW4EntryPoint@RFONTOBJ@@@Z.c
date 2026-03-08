/*
 * XREFs of ?GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0121B00
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C0111840 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C011F950 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C01225B4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, float *a6)
{
  int v6; // r13d
  int v9; // eax
  Gre::Base *v10; // r10
  unsigned int v11; // edi
  float v12; // xmm6_4
  __int64 v13; // r15
  __int64 v14; // rcx
  unsigned __int16 *i; // rax
  unsigned __int16 *v16; // r9
  struct _GLYPHPOS *v17; // r12
  struct _GLYPHPOS *v18; // r8
  float *v19; // r9
  GLYPHDEF *v20; // rdx
  DC *v21; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v23; // rbx
  struct _GLYPHPOS *v25; // rdi
  GLYPHDEF *pgdf; // rbx
  __m128i v27; // xmm0
  unsigned int v28; // r8d
  __m128i v29; // xmm0
  unsigned int v30; // r8d
  int v31; // eax
  unsigned __int16 v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  Gre::Base *v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  DC *v35; // [rsp+50h] [rbp-B8h] BYREF
  int v36; // [rsp+58h] [rbp-B0h]
  unsigned int v37; // [rsp+5Ch] [rbp-ACh]
  struct _GLYPHPOS *v38; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v39[2]; // [rsp+68h] [rbp-A0h] BYREF
  float *v40; // [rsp+70h] [rbp-98h]
  struct _GLYPHPOS v41[32]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v42[32]; // [rsp+378h] [rbp+270h] BYREF

  v6 = a2;
  *(_DWORD *)v32 = a2;
  v34 = (__int64)a6;
  v40 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v35, a1);
  if ( v35 )
  {
    if ( a3 )
    {
      v9 = *((unsigned __int16 *)v35 + 6);
      v33 = 0LL;
      v39[1] = v9;
      v39[0] = 16;
      if ( (unsigned int)RFONTOBJ::bInit(
                           &v33,
                           (struct XDCOBJ *)&v35,
                           0,
                           (a5 & 2) != 0 ? 4 : 2,
                           (const struct RFONTOBJ::Tag *)v39) )
        GreAcquireSemaphore(*((_QWORD *)v33 + 63));
      v10 = v33;
      if ( v33 )
      {
        v11 = 1;
        if ( (*((_DWORD *)v33 + 21) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v33, a4, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v33, v32, 1u);
            v6 = *(_DWORD *)v32;
          }
        }
        v12 = *((float *)v10 + 170);
        if ( (a5 & 3) != 1 || *(_QWORD *)(*((_QWORD *)v10 + 12) + 3056LL) )
        {
          while ( 1 )
          {
            v13 = a3;
            v38 = v41;
            if ( a3 > 0x20 )
              v13 = 32LL;
            v39[0] = v13;
            v14 = v13;
            if ( a4 )
            {
              v16 = a4;
              a4 = (unsigned __int16 *)((char *)a4 + v14 * 2);
            }
            else
            {
              for ( i = v42; i < &v42[v14]; ++i )
                *i = v6++;
              v16 = v42;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v33,
                                  (struct RFONTOBJ *)(unsigned int)v13,
                                  v41,
                                  v16,
                                  (struct XDCOBJ *)&v35,
                                  0LL) )
              break;
            v17 = &v41[v13];
            if ( (a5 & 1) != 0 )
            {
              if ( v41 < v17 )
              {
                v25 = v38;
                v13 = v34;
                do
                {
                  pgdf = v25->pgdf;
                  LODWORD(v38) = 0;
                  bFToL((float)SLODWORD(pgdf[2].pgb) * v12, (int *)&v38, 0);
                  v27 = _mm_cvtsi32_si128(HIDWORD(pgdf[2].ppo));
                  *(_DWORD *)v32 &= v28;
                  bFToL(_mm_cvtepi32_ps(v27).m128_f32[0] * v12, (int *)v32, v28);
                  v29 = _mm_cvtsi32_si128(HIDWORD(pgdf[1].ppo));
                  LODWORD(v34) = v30 & v34;
                  bFToL(_mm_cvtepi32_ps(v29).m128_f32[0] * v12, (int *)&v34, v30);
                  ++v25;
                  v31 = *(_DWORD *)v32 - (_DWORD)v38;
                  *(_DWORD *)v13 = (_DWORD)v38;
                  *(_DWORD *)(v13 + 4) = v31;
                  *(_DWORD *)(v13 + 8) = v34 - *(_DWORD *)v32;
                  v13 += 12LL;
                }
                while ( v25 < v17 );
                v34 = v13;
                v11 = 1;
                LODWORD(v13) = v39[0];
              }
            }
            else if ( v41 < v17 )
            {
              v18 = v38;
              v19 = v40;
              do
              {
                v20 = v18->pgdf;
                ++v18;
                *v19 = (float)SLODWORD(v20[2].pgb) * v12;
                v19[1] = (float)(HIDWORD(v20[2].ppo) - LODWORD(v20[2].pgb)) * v12;
                v19[2] = (float)(HIDWORD(v20[1].ppo) - HIDWORD(v20[2].ppo)) * v12;
                v19 += 3;
              }
              while ( v18 < v17 );
              v40 = v19;
            }
            a3 -= v13;
            if ( !a3 )
            {
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
              v21 = v35;
              if ( v35 )
              {
                if ( v36 && (*((_DWORD *)v35 + 11) & 2) != 0 )
                {
                  if ( !v37 )
                  {
                    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v35);
                    v21 = v35;
                    if ( UserAttr )
                    {
                      DC::RestoreAttributes(v35, UserAttr);
                      v21 = v35;
                    }
                  }
                  *((_DWORD *)v21 + 11) &= ~2u;
                  v21 = v35;
                  v36 = 0;
                }
                LODWORD(v34) = 0;
                v23 = *(_QWORD *)v21;
                HmgDecrementExclusiveReferenceCountEx(v21, v37, &v34);
                if ( (_DWORD)v34 )
                  GrepDeleteDC(v23, 0x2000000LL);
              }
              return v11;
            }
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)&v35);
    return v11;
  }
  else
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)&v35);
    return 0LL;
  }
}
