__int64 __fastcall cjCopyFontDataW(__int64 a1, __int64 a2, PFEOBJ *a3, int a4, wchar_t *Src, unsigned int a6, int a7)
{
  __int64 v9; // rax
  __int64 v11; // rbx
  struct _IFIMETRICS *v12; // rsi
  unsigned int v13; // r12d
  __int64 v14; // r15
  ULONG flInfo; // ecx
  int v16; // ebp
  __m128i v17; // xmm1
  __m128i v18; // xmm6
  __int64 v19; // r13
  unsigned int v20; // eax
  unsigned int v21; // r9d
  __int64 v22; // r14
  int v23; // eax
  _DWORD *v24; // rcx
  unsigned int v25; // r8d
  const wchar_t *v26; // r8
  int v27; // eax
  struct HLFONT__ *v29; // rdx
  signed int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  __m128 v33; // xmm1
  unsigned int *v34; // rdx
  int v35; // ebp
  int v36; // edx
  struct LFONT *v37; // [rsp+48h] [rbp-50h] BYREF
  unsigned int x; // [rsp+D8h] [rbp+40h]

  v9 = *(_QWORD *)a3;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v37 = (struct LFONT *)v11;
  v12 = *(struct _IFIMETRICS **)(v9 + 32);
  v13 = *(_DWORD *)(v9 + 12) & 1;
  LODWORD(v14) = 0;
  x = v12->ptlAspect.x;
  if ( !v11 || v12->fwdWinAscender + v12->fwdWinDescender == 0 || v12->fwdUnitsPerEm == 0 )
    return 0LL;
  if ( v13 && (v12->flInfo & 0x3000010) == 0 )
  {
    PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v37);
    x = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v37);
  }
  flInfo = v12->flInfo;
  v16 = 4;
  if ( (flInfo & 0x3000010) == 0 )
  {
    v18 = (__m128i)x;
    goto LABEL_9;
  }
  if ( (flInfo & 1) != 0 || (flInfo & 2) == 0 && (flInfo & 4) == 0 && (flInfo & 8) != 0 )
  {
    PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v37);
    PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v37);
  }
  if ( v13 )
  {
    v29 = *(struct HLFONT__ **)(v11 + 1424);
    if ( v29 )
    {
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v37, v29, 0LL);
      if ( v37 )
      {
        v30 = *((_DWORD *)v37 + 69);
        if ( v30 >= 0 )
        {
          v31 = _mm_cvtsi32_si128(v30);
          v32 = _mm_cvtsi32_si128(v12->fwdWinDescender + v12->fwdWinAscender);
        }
        else
        {
          v31 = _mm_cvtsi32_si128(-v30);
          v32 = _mm_cvtsi32_si128(v12->fwdUnitsPerEm);
        }
        v33 = _mm_cvtepi32_ps(v31);
        v33.m128_f32[0] = v33.m128_f32[0] / _mm_cvtepi32_ps(v32).m128_f32[0];
        v18 = (__m128i)v33;
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v37);
        goto LABEL_9;
      }
    }
    return 0LL;
  }
  v17 = (__m128i)COERCE_UNSIGNED_INT((float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v37));
  *(float *)v17.m128i_i32 = (float)(*(float *)v17.m128i_i32 * 0.33333334) / (float)v12->fwdUnitsPerEm;
  v18 = v17;
LABEL_9:
  if ( !(unsigned int)bIFIMetricsToLogFontW2(a1, a2 + 12, v12, (unsigned int)_mm_cvtsi128_si32(v18)) )
    return 0LL;
  if ( ((v19 = *(unsigned int *)(*(_QWORD *)a3 + 128LL),
         *(_DWORD *)a2 = v19,
         v20 = PFEOBJ::dpNtmi(a3),
         v21 = 16,
         v22 = a2 + v20,
         *(_DWORD *)(a2 + 4) = v20,
         (v12->flInfo & 0x4000) != 0)
     || IsVariableFont(v12))
    && v12->cjIfiExtra > 0xC )
  {
    v34 = (ULONG *)((char *)&v12->cjThis + v12[1].dpwszStyleName);
    v14 = v34[1];
    if ( (unsigned int)v14 > v21 )
      v14 = v21;
    memmove((void *)(a2 + 360), v34, 4 * v14 + 8);
    v23 = v14;
    v21 = 16;
  }
  else
  {
    v23 = 0;
    *(_DWORD *)(a2 + 360) = 134248036;
  }
  *(_DWORD *)(a2 + 364) = v23;
  v24 = (_DWORD *)(v22 + 108);
  if ( (v12->flInfo & 0x4000) != 0 && v12->cjIfiExtra > v21 )
  {
    memmove(v24, (char *)v12 + v12[1].dpwszFaceName, 40LL * (unsigned int)v14 + 8);
  }
  else
  {
    *(_DWORD *)(v22 + 112) = 0;
    *v24 = 134245473;
  }
  if ( !(unsigned int)bIFIMetricsToTextMetricW2(a1, v22, a3, v13) )
    return 0LL;
  if ( a7 )
  {
    *(_BYTE *)(a2 + 35) = a6;
    *(_BYTE *)(v22 + 64) = a6;
    vLookupScript(a6, (unsigned __int16 *)(a2 + 296), v25);
  }
  else
  {
    *(_WORD *)(a2 + 296) = 0;
  }
  v26 = Src;
  if ( Src )
    goto LABEL_47;
  if ( a4 == 5 )
  {
    v26 = (const wchar_t *)(a2 + 104);
LABEL_47:
    wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v26, 0x1FuLL);
    *(_WORD *)(a2 + 102) = 0;
  }
  *(_DWORD *)(a2 + 8) = 0;
  v27 = v12->flInfo;
  if ( (v27 & 1) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 1) == 0
      && (*(_DWORD *)(v11 + 2152) & 0x2000) == 0
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL) == 1 )
    {
      v16 = 6;
    }
    *(_DWORD *)(a2 + 8) = v16;
  }
  else if ( (v27 & 2) != 0 )
  {
    *(_DWORD *)(a2 + 8) = 1;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    if ( v27 < 0 )
    {
      *(_DWORD *)(a2 + 8) = 2;
      v16 = 2;
    }
  }
  if ( v13 )
  {
    v35 = v16 | 2;
    v36 = 2;
    if ( (v12->flInfo & 0x3000010) == 0 )
      v36 = v35;
    *(_DWORD *)(a2 + 8) = v36;
    if ( *(_DWORD *)(v11 + 2108) == 2 && (v12->flInfo & 0x3000010) != 0 && (*(_DWORD *)(v11 + 2152) & 0x100) == 0 )
      *(_DWORD *)(a2 + 8) = v36 | 0x80000000;
  }
  return v19;
}
