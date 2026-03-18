/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C0150B6C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C012451C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01247EC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0151214 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0151CF0 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C02A5964 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C02A59A4 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
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
  struct ESTROBJ *v11; // rbx
  __int64 v13; // r12
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r14
  RFONTOBJ *v17; // rcx
  struct RFONTOBJ *v19; // rdx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v21; // rdi
  __int64 v22; // rax
  int *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _GLYPHDATA *v26; // rax
  struct _GLYPHDATA *v27; // r15
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  struct RFONTOBJ *v32; // r8
  struct _GLYPHDATA *v33; // rax
  struct _GLYPHDATA *v34; // rax
  __int64 v35; // [rsp+68h] [rbp+48h] BYREF
  __int64 v36; // [rsp+70h] [rbp+50h]

  v9 = 0;
  v11 = a3;
  if ( a3 )
    v13 = *((_QWORD *)a3 + 26);
  else
    v13 = 0LL;
  if ( a8 )
  {
    if ( !*(_DWORD *)(*(_QWORD *)a2 + 304LL) )
    {
      v14 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 708LL) )
      {
        if ( a4 >= gqlTTSystem && a4 <= (unsigned __int16)word_1C0337C8A )
        {
          v19 = (struct RFONTOBJ *)(unsigned int)((a4 - gqlTTSystem) >> 31);
          LODWORD(v19) = (a4 - gqlTTSystem) % 32;
          a3 = (struct ESTROBJ *)((a4 - gqlTTSystem) / 32);
          if ( ((0x80000000 >> (char)v19) & *(_DWORD *)(qword_1C0337C90 + 4LL * (_QWORD)a3)) != 0 )
          {
            if ( !*(_QWORD *)(v14 + 720) )
              return RFONTOBJ::pgdDefault(this, v19);
            if ( v11 && (*((_DWORD *)v11 + 58) & 0x1000) == 0 )
            {
              ESTROBJ::bPartitionInit(v11, a6, 0, 0);
              v14 = *(_QWORD *)this;
            }
            v35 = *(_QWORD *)(v14 + 720);
            if ( v35
              && (!a9
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, a3))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, a3)),
                  (v21 = EudcMetrics) != 0LL) )
            {
              if ( v11 )
              {
                v22 = a5;
                ++*((_DWORD *)v11 + 62);
                *(_DWORD *)(v13 + 4 * v22) = 1;
                *a7 = 0;
              }
            }
            else
            {
              v21 = RFONTOBJ::pgdDefault(this, v19);
            }
            v35 = 0LL;
            goto LABEL_30;
          }
        }
      }
    }
  }
  v15 = *(_QWORD *)this;
  LODWORD(v16) = *(_DWORD *)(*(_QWORD *)this + 840LL);
  if ( (_DWORD)v16 )
  {
    v24 = (unsigned int)(v16 - 1);
    v25 = *(_QWORD *)(*(_QWORD *)(v15 + 744) + 8 * v24);
    v35 = v25;
    if ( v25 && (*(_DWORD *)(*(_QWORD *)(v25 + 128) + 52LL) & 0xA) == 8 )
    {
      v16 = (unsigned int)v24;
      v26 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, a3)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, a3);
      v27 = v26;
      if ( v26 )
      {
        if ( v26->fxD )
        {
          if ( v11 )
          {
            *(_DWORD *)(v13 + 4LL * a5) = v16 + 4;
            ++*(_DWORD *)(*((_QWORD *)v11 + 33) + 4 * v16);
LABEL_40:
            *a7 = 0;
          }
LABEL_41:
          v35 = 0LL;
          goto LABEL_43;
        }
      }
    }
    v35 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
    v15 = *(_QWORD *)this;
  }
  v17 = *(RFONTOBJ **)(v15 + 728);
  if ( v17 )
  {
    v35 = *(_QWORD *)(v15 + 728);
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, a3);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, a3);
    v27 = EudcMetricsPlus;
    if ( !EudcMetricsPlus || !EudcMetricsPlus->fxD )
    {
      v35 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
      goto LABEL_8;
    }
    if ( v11 )
    {
      *(_DWORD *)(v13 + 4LL * a5) = 2;
      ++*((_DWORD *)v11 + 63);
      goto LABEL_40;
    }
    goto LABEL_41;
  }
LABEL_8:
  if ( !(_DWORD)v16 )
  {
LABEL_9:
    if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
    {
      v35 = *(_QWORD *)(*(_QWORD *)this + 736LL);
      if ( a9 )
        v34 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, a3);
      else
        v34 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, a3);
      v21 = v34;
      if ( v34 && v34->fxD )
      {
        if ( v11 )
        {
          *(_DWORD *)(v13 + 4LL * a5) = 3;
          v23 = a7;
          ++*((_DWORD *)v11 + 64);
          *v23 = 0;
        }
        v35 = 0LL;
LABEL_30:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
        return v21;
      }
      v35 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
    }
    return 0LL;
  }
  v29 = 0LL;
  v36 = 0LL;
  while ( 1 )
  {
    v30 = *(_QWORD *)this;
    v31 = *(_QWORD *)(v29 + *(_QWORD *)(*(_QWORD *)this + 744LL));
    v35 = v31;
    if ( v31 )
    {
      if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                            v17,
                            a4,
                            *(struct PFF **)(v30 + 128),
                            *(struct PFF **)(v31 + 128)) )
      {
        v33 = a9
            ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, v32)
            : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, v32);
        v27 = v33;
        if ( v33 )
        {
          if ( v33->fxD )
            break;
        }
      }
    }
    v35 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
    ++v9;
    v29 = v36 + 8;
    v36 += 8LL;
    if ( v9 >= (unsigned int)v16 )
      goto LABEL_9;
  }
  if ( v11 )
  {
    *(_DWORD *)(v13 + 4LL * a5) = v9 + 4;
    ++*(_DWORD *)(*((_QWORD *)v11 + 33) + 4LL * v9);
    *a7 = 0;
  }
  v35 = 0LL;
LABEL_43:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
  return v27;
}
