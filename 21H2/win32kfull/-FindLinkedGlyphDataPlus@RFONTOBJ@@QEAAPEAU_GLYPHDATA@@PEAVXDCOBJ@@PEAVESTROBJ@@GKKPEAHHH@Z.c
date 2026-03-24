/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C00E7758
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00E7468 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C00E7B2C (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00E7B58 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C00E941C (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C0137AB0 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0152D9C (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0158C60 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bIsPerFontEUDC@PFFOBJ@@QEBAHXZ @ 0x1C016D404 (-bIsPerFontEUDC@PFFOBJ@@QEBAHXZ.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::FindLinkedGlyphDataPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        int a8,
        int a9)
{
  unsigned int v9; // r13d
  int v10; // edi
  struct ESTROBJ *v11; // rbx
  __int64 v13; // r12
  __int64 v14; // r9
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned int v22; // edx
  struct RFONTOBJ *v23; // r8
  struct _GLYPHDATA *v24; // rax
  struct _GLYPHDATA *v25; // r15
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  RFONTOBJ *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r9
  struct RFONTOBJ *v31; // r8
  struct _GLYPHDATA *v32; // rax
  struct _GLYPHDATA *v33; // rax
  int *v34; // rax
  __int64 v35; // [rsp+20h] [rbp-10h] BYREF
  __int64 v36; // [rsp+78h] [rbp+48h] BYREF
  __int64 v37; // [rsp+80h] [rbp+50h]

  v9 = 0;
  v10 = a4;
  v11 = a3;
  if ( a3 )
    v13 = *((_QWORD *)a3 + 26);
  else
    v13 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 304LL) )
  {
    if ( a8 )
    {
      v14 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 708LL) )
      {
        if ( (unsigned __int16)v10 >= gqlTTSystem && (unsigned __int16)v10 <= (unsigned __int16)word_1C033D5CA )
        {
          a3 = (struct ESTROBJ *)(0x80000000 >> ((v10 - gqlTTSystem) % 32));
          if ( ((unsigned int)a3 & *(_DWORD *)(qword_1C033D5D0 + 4LL * ((v10 - gqlTTSystem) / 32))) != 0 )
          {
            if ( !*(_QWORD *)(v14 + 720) )
              return RFONTOBJ::pgdDefault(this);
            if ( v11 && (*((_DWORD *)v11 + 58) & 0x1000) == 0 )
            {
              ESTROBJ::bPartitionInit(v11, a6, 0, 0);
              v14 = *(_QWORD *)this;
            }
            v36 = *(_QWORD *)(v14 + 720);
            if ( v36
              && (!a9
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, v10, a3))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, v10, a3)),
                  (v17 = EudcMetrics) != 0LL) )
            {
              if ( v11 )
              {
                v18 = a5;
                ++*((_DWORD *)v11 + 62);
                *(_DWORD *)(v13 + 4 * v18) = 1;
                *a7 = 0;
              }
            }
            else
            {
              v17 = RFONTOBJ::pgdDefault(this);
            }
            v36 = 0LL;
            goto LABEL_24;
          }
        }
      }
    }
  }
  v19 = *(_QWORD *)this;
  LODWORD(v20) = *(_DWORD *)(*(_QWORD *)this + 840LL);
  if ( (_DWORD)v20 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v19 + 744) + 8LL * (unsigned int)(v20 - 1));
    v36 = v21;
    if ( v21 )
    {
      v35 = *(_QWORD *)(v21 + 128);
      if ( (unsigned int)PFFOBJ::bIsPerFontEUDC((PFFOBJ *)&v35) )
      {
        v20 = v22;
        v24 = a9
            ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, v10, v23)
            : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, v10, v23);
        v25 = v24;
        if ( v24 )
        {
          if ( v24->fxD )
          {
            if ( !v11 )
            {
LABEL_36:
              v36 = 0LL;
LABEL_37:
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
              return v25;
            }
            *(_DWORD *)(v13 + 4LL * a5) = v20 + 4;
            ++*(_DWORD *)(*((_QWORD *)v11 + 33) + 4 * v20);
LABEL_35:
            *a7 = 0;
            goto LABEL_36;
          }
        }
      }
    }
    v36 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
    v19 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)(v19 + 728) )
  {
    v36 = *(_QWORD *)(v19 + 728);
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, v10, a3);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, v10, a3);
    v25 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( !v11 )
        goto LABEL_36;
      *(_DWORD *)(v13 + 4LL * a5) = 2;
      ++*((_DWORD *)v11 + 63);
      goto LABEL_35;
    }
    v36 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
  }
  if ( (_DWORD)v20 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v36);
      v28 = *(_QWORD *)this;
      v30 = *(_QWORD *)(v29 + *(_QWORD *)(*(_QWORD *)this + 744LL));
      v36 = v30;
      if ( v30 )
      {
        if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                              v27,
                              v10,
                              *(struct PFF **)(v28 + 128),
                              *(struct PFF **)(v30 + 128)) )
        {
          v32 = a9
              ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, v10, v31)
              : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, v10, v31);
          v25 = v32;
          if ( v32 )
          {
            if ( v32->fxD )
              break;
          }
        }
      }
      v36 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
      ++v9;
      v37 += 8LL;
      if ( v9 >= (unsigned int)v20 )
        goto LABEL_58;
    }
    if ( v11 )
    {
      *(_DWORD *)(v13 + 4LL * a5) = v9 + 4;
      ++*(_DWORD *)(*((_QWORD *)v11 + 33) + 4LL * v9);
      *a7 = 0;
    }
    v36 = 0LL;
    goto LABEL_37;
  }
LABEL_58:
  if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
  {
    v36 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    if ( a9 )
      v33 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, v10, a3);
    else
      v33 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, v10, a3);
    v17 = v33;
    if ( v33 && v33->fxD )
    {
      if ( v11 )
      {
        *(_DWORD *)(v13 + 4LL * a5) = 3;
        v34 = a7;
        ++*((_DWORD *)v11 + 64);
        *v34 = 0;
      }
      v36 = 0LL;
LABEL_24:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
      return v17;
    }
    v36 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
  }
  return 0LL;
}
