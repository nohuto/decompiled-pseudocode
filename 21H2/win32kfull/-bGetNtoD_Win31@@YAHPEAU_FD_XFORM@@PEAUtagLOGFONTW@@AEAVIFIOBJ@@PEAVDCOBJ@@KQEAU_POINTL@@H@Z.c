/*
 * XREFs of ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0017698
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C0108D18 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 * Callees:
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00174DC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0017528 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00179CC (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017E64 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?bParityViolatingXform@@YAHPEAVDCOBJ@@@Z @ 0x1C0119E28 (-bParityViolatingXform@@YAHPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoD_Win31(
        struct _FD_XFORM *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        unsigned int a5,
        struct _POINTL *const a6,
        int a7)
{
  unsigned int v7; // edi
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r8
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r13d
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r15d
  unsigned int v23; // edx
  __int64 v24; // rdx
  __int64 v26; // rax
  FLOATL v27; // eax
  int v28; // eax
  int v29; // ecx
  __m128i v30; // xmm0
  int v31; // eax
  __int64 lfEscapement; // rcx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  __int64 y; // rax
  __int64 v37; // rax
  __int64 x; // rax
  signed int v39; // eax
  float v40; // xmm6_4
  __int64 v41; // rdx
  float v42; // xmm6_4
  __int128 v43; // xmm0
  int v44; // eax
  unsigned int *v45; // [rsp+38h] [rbp-D0h] BYREF
  __m128 *v46; // [rsp+40h] [rbp-C8h] BYREF
  int v47; // [rsp+4Ch] [rbp-BCh]
  __m128 v48; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v49; // [rsp+60h] [rbp-A8h]
  int v50; // [rsp+70h] [rbp-98h]
  __int128 v51; // [rsp+78h] [rbp-90h] BYREF
  __int128 v52; // [rsp+88h] [rbp-80h]
  int v53; // [rsp+98h] [rbp-70h]
  __m128 v54; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v55; // [rsp+B0h] [rbp-58h]
  int v56; // [rsp+C0h] [rbp-48h]
  _OWORD v57[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v58; // [rsp+E8h] [rbp-20h]

  v56 = 0;
  v50 = 0;
  v7 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  if ( a6->x )
  {
    v12 = *(_DWORD *)(*(_QWORD *)a3 + 48LL);
    if ( (v12 & 0x3000010) == 0 )
    {
      if ( gbDBCSCodePage
        && (v12 & 0x200000) != 0
        && ((lfEscapement = (unsigned int)a2->lfEscapement,
             (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) == 0)
          ? (v33 = (int)lNormAngle(lfEscapement) / 900)
          : (v33 = (int)(3600 - lNormAngle(lfEscapement)) / 900 % 4),
            v33) )
      {
        v34 = v33 - 1;
        if ( !v34 )
        {
          x = a6->x;
          a1->eXX = 0.0;
          a1->eYY = 0.0;
          a1->eYX = *((FLOATL *)&galFloatNeg + x);
          a1->eXY = *((FLOATL *)&galFloatNeg + a6->y);
          return 1LL;
        }
        v35 = v34 - 1;
        if ( v35 )
        {
          if ( v35 == 1 )
          {
            y = a6->y;
            a1->eXX = 0.0;
            a1->eYY = 0.0;
            a1->eXY = *((FLOATL *)&galFloat + y);
            a1->eYX = *((FLOATL *)&galFloat + a6->x);
          }
          return 1LL;
        }
        v37 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloatNeg + v37);
        v27 = *((float *)&galFloat + a6->y);
      }
      else
      {
        v26 = a6->x;
        *(_QWORD *)&a1->eXY = 0LL;
        a1->eXX = *((FLOATL *)&galFloat + v26);
        v27 = *((float *)&galFloatNeg + a6->y);
      }
      a1->eYY = v27;
      return 1LL;
    }
  }
  if ( bGetNtoW_Win31((struct MATRIX *)&v54, a2, a3, a4, a5, a7) )
  {
    v14 = *(_QWORD *)a4;
    v46 = &v48;
    v47 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 976) + 340LL) & 0x802) == 0x802 || (a5 & 2) != 0 )
    {
      v15 = v54;
      v50 = v56;
      v49 = v55;
    }
    else
    {
      if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v46, (struct MATRIX *)&v54, (struct MATRIX *)(v14 + 320), 0) )
        return v7;
      v15 = _mm_mul_ps(v48, (__m128)_xmm);
    }
    v16 = *(_QWORD *)a3;
    v48 = v15;
    v17 = *(unsigned int *)(v16 + 48);
    if ( (v17 & 4) == 0 )
    {
      v18 = a2->lfEscapement;
      if ( (v17 & 0x200000) != 0 )
      {
        v39 = lNormAngle(v18);
        v17 = (unsigned int)v39;
        v13 = (unsigned int)((v39 / 900) >> 31);
        LODWORD(v13) = v39 / 900 % 4;
        v18 = 900 * v13;
      }
      if ( v18 && ((a5 & 1) == 0 || gbDBCSCodePage) )
      {
        v28 = bParityViolatingXform(a4);
        *((_QWORD *)&v52 + 1) = 0LL;
        v29 = -v18;
        v53 = 0;
        if ( !v28 )
          v29 = v18;
        v30 = (__m128i)COERCE_UNSIGNED_INT((float)v29);
        *(float *)v30.m128i_i32 = *(float *)v30.m128i_i32 / 10.0;
        LODWORD(v51) = efCos((unsigned int)_mm_cvtsi128_si32(v30));
        HIDWORD(v51) = v51;
        v31 = efSin((unsigned int)_mm_cvtsi128_si32(v30));
        *(_QWORD *)&v52 = 0LL;
        DWORD2(v51) = v31;
        DWORD1(v51) = v31 ^ _xmm;
        v58 = v50;
        v57[0] = v48;
        v57[1] = v49;
        if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v46, (struct MATRIX *)v57, (struct MATRIX *)&v51, 0) )
          return v7;
      }
      v45 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17, v13);
      v21 = v45[10];
      if ( (v21 & 1) != 0 && (v21 = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)v21 > 1) )
        v22 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
      else
        v22 = v45[536];
      v23 = W32GetCurrentThreadDpiAwarenessContext(v21, v20);
      if ( (v45[10] & 1) != 0 && (v23 & 0xF) - 1 > 1 )
        v24 = (v23 >> 8) & 0x1FF;
      else
        v24 = v45[537];
      if ( v22 != (_DWORD)v24 )
      {
        v40 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v45, v24);
        v42 = v40 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v45, v41);
        v43 = *(_OWORD *)(*(_QWORD *)a4 + 320LL);
        v44 = *(_DWORD *)(*(_QWORD *)a4 + 352LL);
        v52 = *(_OWORD *)(*(_QWORD *)a4 + 336LL);
        v53 = v44;
        v51 = v43;
        if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)&v51 + 4))
          && (unsigned int)EFLOAT::bIsZero((EFLOAT *)((char *)&v51 + 8)) )
        {
          v48.m128_f32[1] = v48.m128_f32[1] / v42;
          v48.m128_f32[2] = v48.m128_f32[2] * v42;
        }
        else
        {
          v48.m128_f32[0] = v48.m128_f32[0] * v42;
          v48.m128_f32[3] = v48.m128_f32[3] / v42;
        }
      }
    }
    v7 = 1;
    *a1 = (struct _FD_XFORM)v48;
    return v7;
  }
  return 0LL;
}
