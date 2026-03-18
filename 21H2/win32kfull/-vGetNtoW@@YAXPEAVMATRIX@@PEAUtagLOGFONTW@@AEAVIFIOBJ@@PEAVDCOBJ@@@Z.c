/*
 * XREFs of ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C00172E8
 * Callers:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0017574 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 * Callees:
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00174DC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0017528 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C014FF28 (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 */

void __fastcall vGetNtoW(struct MATRIX *a1, struct tagLOGFONTW *a2, struct IFIOBJ *a3, struct DCOBJ *a4)
{
  LONG lfHeight; // eax
  bool v9; // cc
  float v10; // xmm7_4
  float v11; // xmm0_4
  __m128i v12; // xmm7
  __m128i v13; // xmm0
  LONG lfWidth; // eax
  float v15; // xmm7_4
  float v16; // xmm8_4
  unsigned int v17; // ebx
  unsigned int lfOrientation; // edx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // xmm0_4
  unsigned int v22; // ebx
  __m128i v23; // xmm0
  float v24; // xmm10_4
  float v25; // eax
  float v26; // xmm10_4
  int v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm6_4
  struct MATRIX *v30; // [rsp+20h] [rbp-60h] BYREF
  int v31; // [rsp+2Ch] [rbp-54h]
  __int64 v32; // [rsp+A0h] [rbp+20h] BYREF

  lfHeight = a2->lfHeight;
  v9 = a2->lfHeight <= 0;
  if ( !a2->lfHeight )
  {
    lfHeight = lGetDefaultWorldHeight(a4);
    v9 = lfHeight <= 0;
  }
  if ( !v9 )
  {
    v12 = _mm_cvtsi32_si128(lfHeight);
    v13 = _mm_cvtsi32_si128(*(__int16 *)(*(_QWORD *)a3 + 60LL) + *(__int16 *)(*(_QWORD *)a3 + 62LL));
    goto LABEL_6;
  }
  v10 = 0.0;
  v11 = 0.0;
  if ( lfHeight < 0 )
  {
    v12 = _mm_cvtsi32_si128(-lfHeight);
    v13 = _mm_cvtsi32_si128(*(__int16 *)(*(_QWORD *)a3 + 56LL));
LABEL_6:
    LODWORD(v11) = _mm_cvtepi32_ps(v13).m128_u32[0];
    LODWORD(v10) = _mm_cvtepi32_ps(v12).m128_u32[0];
  }
  lfWidth = a2->lfWidth;
  v15 = v10 / v11;
  if ( lfWidth && *(__int16 *)(*(_QWORD *)a3 + 76LL) >= 0 )
    v16 = (float)(int)abs32(lfWidth) / (float)*(__int16 *)(*(_QWORD *)a3 + 76LL);
  else
    v16 = v15;
  v32 = *(_QWORD *)(*(_QWORD *)a4 + 48LL);
  if ( v32 )
  {
    v17 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v32);
    if ( v17 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v32) )
    {
      PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v32);
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v32);
    }
  }
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  lfOrientation = a2->lfOrientation;
  v19 = 3600 - lfOrientation;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) == 0 )
    v19 = lfOrientation;
  v20 = lNormAngle(v19);
  switch ( v20 )
  {
    case 0:
      *(float *)a1 = v16;
      *((float *)a1 + 3) = v15;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
        break;
      v21 = *((_DWORD *)a1 + 3) ^ _xmm;
      goto LABEL_17;
    case 900:
      *((float *)a1 + 1) = v16;
      *((float *)a1 + 2) = v15;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) == 0 )
        *((_DWORD *)a1 + 1) ^= _xmm;
      *((_DWORD *)a1 + 2) ^= _xmm;
      break;
    case 1800:
      *(float *)a1 = v16;
      v27 = *(_DWORD *)a1;
      *((float *)a1 + 3) = v15;
      *(_DWORD *)a1 = v27 ^ _xmm;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
      {
        v21 = *((_DWORD *)a1 + 3) ^ _xmm;
LABEL_17:
        *((_DWORD *)a1 + 3) = v21;
      }
      break;
    case 2700:
      *((float *)a1 + 1) = v16;
      *((float *)a1 + 2) = v15;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) != 0 )
        *((_DWORD *)a1 + 1) ^= _xmm;
      break;
    default:
      v23 = (__m128i)COERCE_UNSIGNED_INT((float)v20);
      *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 / 10.0;
      v24 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v23)));
      v25 = COERCE_FLOAT(efSin((unsigned int)_mm_cvtsi128_si32(v23)));
      *(float *)v23.m128i_i32 = v24 * v16;
      v26 = v24 * v15;
      *(_DWORD *)a1 = v23.m128i_i32[0];
      *((float *)a1 + 3) = v26;
      *((float *)a1 + 1) = v25 * v16;
      *((_DWORD *)a1 + 2) = COERCE_UNSIGNED_INT(v25 * v15) ^ _xmm;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) == 0 )
      {
        *((_DWORD *)a1 + 1) = COERCE_UNSIGNED_INT(v25 * v16) ^ _xmm;
        *((_DWORD *)a1 + 3) = LODWORD(v26) ^ _xmm;
      }
      break;
  }
  v22 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v32);
  if ( v22 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v32) )
  {
    v28 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v32);
    v29 = v28 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v32);
    if ( a2->lfWidth )
      *((float *)a1 + 1) = *((float *)a1 + 1) / v29;
    else
      *(float *)a1 = v29 * *(float *)a1;
    *((float *)a1 + 2) = v29 * *((float *)a1 + 2);
  }
  v30 = a1;
  v31 = 0;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v30);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v30, 8u);
}
