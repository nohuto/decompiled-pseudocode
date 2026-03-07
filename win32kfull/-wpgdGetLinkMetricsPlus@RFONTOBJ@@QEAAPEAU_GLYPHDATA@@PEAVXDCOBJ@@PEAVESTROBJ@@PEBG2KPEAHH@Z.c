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
