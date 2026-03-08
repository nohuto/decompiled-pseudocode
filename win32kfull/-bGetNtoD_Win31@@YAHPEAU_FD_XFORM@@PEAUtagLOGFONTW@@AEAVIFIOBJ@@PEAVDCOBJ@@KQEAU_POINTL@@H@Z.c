/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0110DC8
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C0057C50 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C00F3AC4 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C0016194 (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0016964 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0110B94 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0110BD8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C01110FC (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        float **a4,
        unsigned int a5,
        struct _POINTL *const a6,
        int a7)
{
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  int v12; // edx
  float *v13; // r8
  __int64 v14; // rcx
  __m128 v15; // xmm0
  __int64 v16; // rax
  int v17; // edx
  unsigned int v18; // r12d
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v20; // rcx
  int v21; // r14d
  unsigned int v22; // eax
  int v23; // eax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  __m128i v29; // xmm0
  int v30; // eax
  __int64 lfEscapement; // rcx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  __int64 y; // rax
  __int64 v36; // rax
  __int64 x; // rax
  unsigned int v38; // eax
  float v39; // xmm6_4
  float v40; // xmm6_4
  __int128 v41; // xmm0
  int v42; // eax
  unsigned int *v43; // [rsp+38h] [rbp-D0h] BYREF
  __m128 *v44; // [rsp+40h] [rbp-C8h] BYREF
  int v45; // [rsp+4Ch] [rbp-BCh]
  __m128 v46; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v47; // [rsp+60h] [rbp-A8h]
  int v48; // [rsp+70h] [rbp-98h]
  __int128 v49; // [rsp+78h] [rbp-90h] BYREF
  __int128 v50; // [rsp+88h] [rbp-80h]
  int v51; // [rsp+98h] [rbp-70h]
  __m128 v52; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-58h]
  int v54; // [rsp+C0h] [rbp-48h]
  _OWORD v55[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v56; // [rsp+E8h] [rbp-20h]

  v54 = 0;
  v52 = 0LL;
  v48 = 0;
  v53 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v11 = Gre::Base::Globals((Gre::Base *)a1);
  v43 = (unsigned int *)v11;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      if ( *((_DWORD *)v11 + 39)
        && (v12 & 0x200000) != 0
        && ((lfEscapement = (unsigned int)a2->lfEscapement, (*(_DWORD *)(*((_QWORD *)*a4 + 122) + 340LL) & 0x40) == 0)
          ? (v32 = (int)lNormAngle(lfEscapement) / 900)
          : (v32 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4),
            v32) )
      {
        v33 = v32 - 1;
        if ( !v33 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          LODWORD(a1->eYX) = dword_1C031B178[x];
          LODWORD(a1->eXY) = dword_1C031B178[a6->y];
          return 1LL;
        }
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            LODWORD(a1->eXY) = dword_1C031B150[y];
            LODWORD(a1->eYX) = dword_1C031B150[a6->x];
          }
          return 1LL;
        }
        v36 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_1C031B178[v36];
        v26 = dword_1C031B150[a6->y];
      }
      else
      {
        v25 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        LODWORD(a1->eXX) = dword_1C031B150[v25];
        v26 = dword_1C031B178[a6->y];
      }
      LODWORD(a1->eYY) = v26;
      return 1LL;
    }
  }
  if ( bGetNtoW_Win31((struct MATRIX *)&v52, a2, a3, (struct DCOBJ *)a4, a5, a7) )
  {
    v13 = *a4;
    v44 = &v46;
    v45 = 0;
    v14 = *(_DWORD *)(*((_QWORD *)v13 + 122) + 340LL) & 0x802;
    if ( (_DWORD)v14 == 2050 || (a5 & 2) != 0 )
    {
      v15 = v52;
      v48 = v54;
      v47 = v53;
      goto LABEL_6;
    }
    if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v44, (struct MATRIX *)&v52, (struct MATRIX *)(v13 + 80), 0) )
    {
      v15 = _mm_mul_ps(v46, (__m128)_xmm);
LABEL_6:
      v16 = *(_QWORD *)a3;
      v46 = v15;
      v17 = *(_DWORD *)(v16 + 48);
      if ( (v17 & 4) == 0 )
      {
        v18 = a2->lfEscapement;
        if ( (v17 & 0x200000) != 0 )
        {
          v38 = lNormAngle(v18);
          v14 = v38;
          v18 = 900 * ((int)v38 / 900 % 4);
        }
        if ( v18 && ((a5 & 1) == 0 || v43[39]) )
        {
          v27 = bParityViolatingXform(a4);
          *((_QWORD *)&v50 + 1) = 0LL;
          v28 = -v18;
          v51 = 0;
          if ( !v27 )
            v28 = v18;
          v29 = (__m128i)COERCE_UNSIGNED_INT((float)v28);
          *(float *)v29.m128i_i32 = *(float *)v29.m128i_i32 / 10.0;
          LODWORD(v49) = efCos((unsigned int)_mm_cvtsi128_si32(v29));
          HIDWORD(v49) = v49;
          v30 = efSin((unsigned int)_mm_cvtsi128_si32(v29));
          *(_QWORD *)&v50 = 0LL;
          DWORD2(v49) = v30;
          DWORD1(v49) = v30 ^ _xmm;
          v56 = v48;
          v55[0] = v46;
          v55[1] = v47;
          if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v44, (struct MATRIX *)v55, (struct MATRIX *)&v49, 0) )
            return 0LL;
        }
        v43 = (unsigned int *)*((_QWORD *)*a4 + 6);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14);
        v20 = v43[10];
        if ( (v20 & 1) != 0 && (v20 = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)v20 > 1) )
          v21 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
        else
          v21 = v43[536];
        v22 = W32GetCurrentThreadDpiAwarenessContext(v20);
        if ( (v43[10] & 1) != 0 && (v22 & 0xF) - 1 > 1 )
          v23 = (v22 >> 8) & 0x1FF;
        else
          v23 = v43[537];
        if ( v21 != v23 )
        {
          v39 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v43);
          v40 = v39 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v43);
          v41 = *((_OWORD *)*a4 + 20);
          v42 = *((_DWORD *)*a4 + 88);
          v50 = *((_OWORD *)*a4 + 21);
          v51 = v42;
          v49 = v41;
          if ( EFLOAT::bIsZero((EFLOAT *)((char *)&v49 + 4)) && EFLOAT::bIsZero((EFLOAT *)((char *)&v49 + 8)) )
          {
            v46.m128_f32[1] = v46.m128_f32[1] / v40;
            v46.m128_f32[2] = v46.m128_f32[2] * v40;
          }
          else
          {
            v46.m128_f32[0] = v46.m128_f32[0] * v40;
            v46.m128_f32[3] = v46.m128_f32[3] / v40;
          }
        }
      }
      *a1 = (struct _FD_XFORM)v46;
      return 1LL;
    }
  }
  return 0LL;
}
