/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B8154
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C011F950 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C012031C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0120BA0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C014F614 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C014F784 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C014FD36 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C02B630C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02B6BA0 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C02B6CD4 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C02B7194 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C02B720C (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B740C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1C02B9180 (-bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C02B9A64 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::wpgdGetLinkMetricsPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 *a4,
        const unsigned __int16 *a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  unsigned int v8; // r13d
  unsigned __int16 *v13; // r14
  const unsigned __int16 *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  struct RFONTOBJ *v20; // rdx
  struct RFONTOBJ *v21; // r8
  __int64 v22; // r9
  struct RFONTOBJ *v23; // rdx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v25; // rbp
  __int64 v26; // rax
  struct _GLYPHDATA *result; // rax
  int v28; // r13d
  __int64 v29; // r12
  struct RFONTOBJ *v30; // r8
  __int64 v31; // r9
  struct RFONTOBJ *v32; // rdx
  __int64 v33; // [rsp+88h] [rbp+10h] BYREF

  v8 = a6;
  v13 = a4;
  v14 = &a5[a6];
  v16 = *(_QWORD *)(SGDGetSessionState(a5) + 32);
  if ( !a2 )
    return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)v15, v17, v18);
  v19 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 308LL)
    || !*(_DWORD *)(v16 + 13304) && !*(_QWORD *)(v16 + 13320) && !*(_QWORD *)(v16 + 13328) && !*(_DWORD *)(v19 + 304) )
  {
    return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)v15, v17, v18);
  }
  if ( a4 >= v14 )
  {
LABEL_10:
    if ( v13 == v14 )
      return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)v15, v17, v18);
  }
  else
  {
    while ( 1 )
    {
      v15 = 128LL;
      if ( (unsigned __int16)(*v13 - 128) > 0x1Fu )
        break;
      if ( ++v13 >= v14 )
        goto LABEL_10;
    }
  }
  if ( !*(_DWORD *)(v19 + 304) && *(_DWORD *)(*(_QWORD *)this + 708LL) && !*(_QWORD *)(*(_QWORD *)this + 720LL) )
    RFONTOBJ::bInitSystemTT(this, a2);
  if ( !*(_QWORD *)(*(_QWORD *)this + 848LL) )
    return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)v15, v17, v18);
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 304LL) )
  {
    if ( (unsigned int)RFONTOBJ::bIsSystemTTGlyph(this, *a4) )
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 720LL) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
        if ( a3 && (*((_DWORD *)a3 + 58) & 0x1000) == 0 )
          ESTROBJ::bPartitionInit(a3, v8, 0, 0);
        v33 = *(_QWORD *)(*(_QWORD *)this + 720LL);
        if ( v33
          && ((v23 = (struct RFONTOBJ *)*a4, !a8)
            ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v33, v23, v21, v22))
            : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v33, v23, v21, v22)),
              (v25 = EudcMetrics) != 0LL) )
        {
          if ( a3 )
          {
            v26 = *((_QWORD *)a3 + 26);
            ++*((_DWORD *)a3 + 62);
            *(_DWORD *)(v26 + 4 * (a4 - a5)) = 1;
            *a7 = 0;
          }
        }
        else
        {
          v25 = RFONTOBJ::pgdDefault(this, v20, (__int64)v21, v22);
        }
        v33 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
        return v25;
      }
      return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)v15, v17, v18);
    }
    if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, *a4) )
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 720LL) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      }
      return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)v15, v17, v18);
    }
  }
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
  if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 1) == 0 )
  {
    GreAcquireSemaphore(*(_QWORD *)(v16 + 13272));
    ++*(_DWORD *)(v16 + 13300);
    EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
    GreReleaseSemaphoreInternal(*(_QWORD *)(v16 + 13272));
    RFONTOBJ::vInitEUDC(this, a2);
    RFONTOBJ::vLockEUDCFontsGlyphCache(this, 1);
    *(_DWORD *)(*(_QWORD *)this + 712LL) |= 1u;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
  if ( a3
    && (*((_DWORD *)a3 + 58) & 0x400) == 0
    && !(unsigned int)ESTROBJ::bPartitionInit(a3, v8, *(_DWORD *)(*(_QWORD *)this + 840LL), 1) )
  {
    return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)v15, v17, v18);
  }
  v28 = a8;
  v29 = a4 - a5;
  result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, *a4, v29, a6, a7, 0, a8);
  if ( !result )
  {
    v32 = (struct RFONTOBJ *)*(unsigned __int16 *)(v16 + 13268);
    result = v28
           ? RFONTOBJ::pgdGetEudcMetricsPlus(this, v32, v30, v31)
           : RFONTOBJ::pgdGetEudcMetrics(this, v32, v30, v31);
    if ( !result )
    {
      result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, *(unsigned __int16 *)(v16 + 13268), v29, a6, a7, 1, v28);
      if ( !result )
        return RFONTOBJ::pgdDefault(this, (struct RFONTOBJ *)v15, v17, v18);
    }
  }
  return result;
}
