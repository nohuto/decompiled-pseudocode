/*
 * XREFs of ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C010F854
 * Callers:
 *     GreGetTextExtentW @ 0x1C010FBEC (GreGetTextExtentW.c)
 *     NtGdiGetTextExtent @ 0x1C02C5CE0 (NtGdiGetTextExtent.c)
 *     ?GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D90CC (-GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bUseMetaPtoD@DC@@QEBAHXZ @ 0x1C0016938 (-bUseMetaPtoD@DC@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00553C0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00CFF10 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C01113EC (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0112B40 (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0112E34 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C01225B4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C01501C4 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C02900F0 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall GrepGetTextExtentW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        struct tagSIZE *a4,
        unsigned int a5,
        float a6)
{
  unsigned int v9; // ebx
  Gre::Base *v10; // r10
  int v11; // esi
  __m128i v13; // xmm1
  float cx; // xmm0_4
  __m128i v15; // xmm0
  __m128i v16; // xmm8
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // [rsp+98h] [rbp-80h] BYREF
  float v20; // [rsp+9Ch] [rbp-7Ch]
  Gre::Base *v21; // [rsp+A0h] [rbp-78h] BYREF
  DC *v22[2]; // [rsp+A8h] [rbp-70h] BYREF
  _QWORD v23[2]; // [rsp+B8h] [rbp-60h] BYREF
  float v24; // [rsp+C8h] [rbp-50h] BYREF
  float v25; // [rsp+CCh] [rbp-4Ch]
  float v26; // [rsp+D0h] [rbp-48h]
  float v27; // [rsp+D4h] [rbp-44h]
  int v28; // [rsp+D8h] [rbp-40h]
  int v29; // [rsp+DCh] [rbp-3Ch]
  __int64 v30; // [rsp+E0h] [rbp-38h]
  int v31; // [rsp+E8h] [rbp-30h]
  _BYTE v32[320]; // [rsp+F8h] [rbp-20h] BYREF

  v9 = 0;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v22, a1);
    if ( v22[0] )
    {
      v19 = a6;
      LODWORD(v20) = *((unsigned __int16 *)v22[0] + 6);
      v21 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit(
                           &v21,
                           (struct XDCOBJ *)v22,
                           0,
                           (a5 & 2) != 0 ? 4 : 2,
                           (const struct RFONTOBJ::Tag *)&v19) )
        GreAcquireSemaphore(*((_QWORD *)v21 + 63));
      v10 = v21;
      if ( v21 )
      {
        if ( (*((_DWORD *)v21 + 21) & 4) != 0 )
          RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v21, a2, a3);
        v11 = *((_DWORD *)v22[0] + 439);
        if ( v11 == *((_DWORD *)v10 + 98) || *((_DWORD *)v10 + 52) == 1 && (*((_DWORD *)v10 + 179) & 4) == 0 )
        {
          v9 = RFONTOBJ::bTextExtent(
                 (RFONTOBJ *)&v21,
                 (struct XDCOBJ *)v22,
                 a2,
                 a3,
                 v11,
                 *(_DWORD *)(*((_QWORD *)v22[0] + 122) + 280LL),
                 *(_DWORD *)(*((_QWORD *)v22[0] + 122) + 284LL),
                 *(_DWORD *)(*((_QWORD *)v22[0] + 122) + 288LL),
                 a5,
                 a4);
          if ( v9
            && v11
            && *(_DWORD *)(*((_QWORD *)v22[0] + 122) + 208LL) == 1
            && !(unsigned int)DC::bUseMetaPtoD(v22[0])
            && (*((_DWORD *)v21 + 179) & 4) != 0 )
          {
            v13 = _mm_cvtsi32_si128(a4->cy);
            cx = (float)a4->cx;
            v30 = 0LL;
            v31 = 0;
            v19 = cx;
            v15 = (__m128i)COERCE_UNSIGNED_INT((float)v11);
            LODWORD(v20) = _mm_cvtepi32_ps(v13).m128_u32[0];
            *(float *)v15.m128i_i32 = *(float *)v15.m128i_i32 / 10.0;
            v16 = v15;
            v17 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v15)));
            v24 = v17;
            if ( v17 < 0.0 )
              LODWORD(v24) = LODWORD(v17) ^ _xmm;
            v27 = v24;
            v18 = COERCE_FLOAT(efSin((unsigned int)_mm_cvtsi128_si32(v16)));
            v25 = v18;
            if ( v18 < 0.0 )
              LODWORD(v25) = LODWORD(v18) ^ _xmm;
            v28 = 0;
            v29 = 0;
            v26 = v25;
            EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v23, (struct MATRIX *)&v24, 0x21u);
            v9 = 1;
            if ( (*(_DWORD *)(v23[0] + 32LL) & 2) == 0 )
              v9 = EXFORMOBJ::bXform((EXFORMOBJ *)v23, (struct VECTORFL *)&v19, (struct VECTORFL *)&v19, 1uLL);
            if ( v9 )
            {
              if ( v19 < 0.0 )
                LODWORD(v19) ^= _xmm;
              if ( v20 < 0.0 )
                LODWORD(v20) ^= _xmm;
              v9 = EPOINTFL::bToPOINTL((EPOINTFL *)&v19, (struct _POINTL *)a4);
            }
          }
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v23, (struct XDCOBJ *)v22, 516);
          ESTROBJ::vInit(
            (ESTROBJ *)v32,
            a2,
            a3,
            (struct XDCOBJ *)v22,
            (struct RFONTOBJ *)&v21,
            (struct EXFORMOBJ *)v23,
            0LL,
            0,
            v11,
            *(_DWORD *)(*((_QWORD *)v22[0] + 122) + 280LL),
            *(_DWORD *)(*((_QWORD *)v22[0] + 122) + 284LL),
            *(_DWORD *)(*((_QWORD *)v22[0] + 122) + 288LL),
            0,
            0,
            0,
            0LL,
            0LL,
            0);
          if ( (v32[232] & 4) != 0 )
            v9 = ESTROBJ::bTextExtent((ESTROBJ *)v32, (struct RFONTOBJ *)&v21, v11, a4);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v32);
        }
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
      if ( v22[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v22);
    }
  }
  else
  {
    *a4 = 0LL;
    return 1;
  }
  return v9;
}
