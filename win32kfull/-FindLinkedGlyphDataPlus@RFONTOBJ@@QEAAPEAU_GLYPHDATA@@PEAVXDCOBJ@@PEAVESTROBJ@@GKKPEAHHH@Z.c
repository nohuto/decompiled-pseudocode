/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C02B630C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B8154 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C014F614 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C014F714 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C014F784 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C02B7194 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C02B720C (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1C02B9180 (-bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::FindLinkedGlyphDataPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        int a8,
        int a9)
{
  unsigned __int16 v9; // di
  __int64 v12; // r12
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rax
  struct _GLYPHDATA *v21; // rax
  struct _GLYPHDATA *v22; // r14
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  unsigned int v24; // r15d
  RFONTOBJ *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct RFONTOBJ *v28; // r8
  __int64 v29; // r9
  struct _GLYPHDATA *v30; // rax
  struct _GLYPHDATA *v31; // rax
  __int64 v32; // [rsp+68h] [rbp+48h] BYREF
  __int64 v33; // [rsp+70h] [rbp+50h]

  v9 = a4;
  if ( a3 )
    v12 = *((_QWORD *)a3 + 26);
  else
    v12 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 304LL) && a8 && (unsigned int)RFONTOBJ::bIsSystemTTGlyph(this, a4) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)this + 720LL) )
      return RFONTOBJ::pgdDefault(this);
    if ( a3 && (*((_DWORD *)a3 + 58) & 0x1000) == 0 )
      ESTROBJ::bPartitionInit(a3, a6, 0, 0);
    v32 = *(_QWORD *)(*(_QWORD *)this + 720LL);
    if ( !v32
      || (!a9
        ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v32, v9, a3))
        : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v32, (struct RFONTOBJ *)v9, a3, a4)),
          (v15 = EudcMetrics) == 0LL) )
    {
      v15 = RFONTOBJ::pgdDefault(this);
      goto LABEL_21;
    }
    if ( !a3 )
    {
LABEL_21:
      v32 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
      return v15;
    }
    v16 = a5;
    ++*((_DWORD *)a3 + 62);
    *(_DWORD *)(v12 + 4 * v16) = 1;
LABEL_19:
    *a7 = 0;
    goto LABEL_21;
  }
  v17 = *(_DWORD *)(*(_QWORD *)this + 840LL);
  if ( v17 )
  {
    v18 = v17 - 1;
    v19 = v18;
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 744LL) + 8 * v18);
    v32 = v20;
    if ( v20 && (*(_DWORD *)(*(_QWORD *)(v20 + 128) + 52LL) & 0xA) == 8 )
    {
      v17 = v18;
      v21 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v32, (struct RFONTOBJ *)v9, a3, a4)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v32, v9, a3);
      v22 = v21;
      if ( v21 )
      {
        if ( v21->fxD )
        {
          if ( !a3 )
          {
LABEL_33:
            v32 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
            return v22;
          }
          *(_DWORD *)(v12 + 4LL * a5) = v17 + 4;
          ++*(_DWORD *)(*((_QWORD *)a3 + 33) + 4 * v19);
LABEL_32:
          *a7 = 0;
          goto LABEL_33;
        }
      }
    }
    v32 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
  }
  if ( *(_QWORD *)(*(_QWORD *)this + 728LL) )
  {
    v32 = *(_QWORD *)(*(_QWORD *)this + 728LL);
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v32, (struct RFONTOBJ *)v9, a3, a4);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v32, v9, a3);
    v22 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( !a3 )
        goto LABEL_33;
      *(_DWORD *)(v12 + 4LL * a5) = 2;
      ++*((_DWORD *)a3 + 63);
      goto LABEL_32;
    }
    v32 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
  }
  v24 = 0;
  if ( v17 )
  {
    v25 = 0LL;
    v33 = 0LL;
    while ( 1 )
    {
      v26 = *(_QWORD *)this;
      v27 = *(_QWORD *)((char *)v25 + *(_QWORD *)(*(_QWORD *)this + 744LL));
      v32 = v27;
      if ( v27 )
      {
        if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                              v25,
                              v9,
                              *(struct PFF **)(v26 + 128),
                              *(struct PFF **)(v27 + 128)) )
        {
          v30 = a9
              ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v32, (struct RFONTOBJ *)v9, v28, v29)
              : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v32, v9, v28);
          v22 = v30;
          if ( v30 )
          {
            if ( v30->fxD )
              break;
          }
        }
      }
      v32 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
      ++v24;
      v25 = (RFONTOBJ *)(v33 + 8);
      v33 += 8LL;
      if ( v24 >= v17 )
        goto LABEL_54;
    }
    if ( !a3 )
      goto LABEL_33;
    *(_DWORD *)(v12 + 4LL * a5) = v24 + 4;
    ++*(_DWORD *)(*((_QWORD *)a3 + 33) + 4LL * v24);
    goto LABEL_32;
  }
LABEL_54:
  if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
  {
    v32 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    if ( a9 )
      v31 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v32, (struct RFONTOBJ *)v9, a3, a4);
    else
      v31 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v32, v9, a3);
    v15 = v31;
    if ( v31 && v31->fxD )
    {
      if ( !a3 )
        goto LABEL_21;
      *(_DWORD *)(v12 + 4LL * a5) = 3;
      ++*((_DWORD *)a3 + 64);
      goto LABEL_19;
    }
    v32 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
  }
  return 0LL;
}
