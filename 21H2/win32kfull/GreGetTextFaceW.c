/*
 * XREFs of GreGetTextFaceW @ 0x1C0097620
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C0097510 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0097AA0 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E411C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C013043C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C016AB30 (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall GreGetTextFaceW(HDC a1, int a2, void *a3, int a4)
{
  unsigned int v4; // r12d
  int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rdx
  int v14; // edi
  int v15; // edi
  bool v16; // di
  struct PFE *v17; // rax
  int v18; // ecx
  const wchar_t *v19; // r15
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // r14
  const wchar_t *v23; // rsi
  int v24; // r13d
  const wchar_t *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  const wchar_t *v28; // rsi
  __int64 v29; // rax
  unsigned int v31; // [rsp+30h] [rbp-39h] BYREF
  __int64 v32; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v33; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-21h] BYREF
  struct _POINTL v35; // [rsp+50h] [rbp-19h] BYREF
  __int64 v36; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v38[80]; // [rsp+70h] [rbp+7h] BYREF

  v4 = 0;
  v37[0] = 0LL;
  v6 = 0;
  v37[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v38);
  XDCOBJ::vLock((XDCOBJ *)v37, a1);
  if ( !v37[0] )
    goto LABEL_68;
  v34 = *(_QWORD **)(v37[0] + 48LL);
  if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v34) )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v34);
  LOBYTE(v8) = 10;
  v9 = *(_QWORD *)(*(_QWORD *)(v37[0] + 976LL) + 296LL);
  v10 = HmgShareLock(v9, v8);
  v32 = v10;
  v11 = v10;
  if ( !v10 )
    goto LABEL_66;
  if ( (*(_DWORD *)(v10 + 28) & 1) != 0 )
  {
    UserGetHDEV();
    v12 = *(_DWORD *)(v11 + 24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v11);
    v11 = 0LL;
    if ( !v34 )
      goto LABEL_66;
    v14 = v12 - 4;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
          v9 = v34[181];
      }
      else
      {
        v9 = v34[180];
      }
    }
    else
    {
      v9 = v34[179];
    }
    LOBYTE(v13) = 10;
    v11 = HmgShareLock(v9, v13);
    v32 = v11;
  }
  if ( !v11 )
  {
LABEL_68:
    v4 = v6;
    goto LABEL_69;
  }
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
LABEL_66:
    if ( v11 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v11);
    goto LABEL_68;
  }
  if ( !KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || !KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    v16 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
    if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
    {
      if ( UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
      {
LABEL_27:
        v11 = v32;
        goto LABEL_28;
      }
      if ( (v16 || !(unsigned int)UserIsUserCritSecIn())
        && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
        && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        goto LABEL_27;
      }
      v11 = v32;
      goto LABEL_66;
    }
  }
LABEL_28:
  v36 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v33 = 0;
  v31 = 0;
  v35 = 0LL;
  v17 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v32, (struct XDCOBJ *)v37, &v33, &v35, &v31, 0);
  if ( v17 )
  {
    v18 = 0;
    if ( (v31 & 2) == 0 || (v19 = (const wchar_t *)(v11 + 304), !*(_WORD *)(v11 + 304)) )
    {
      v20 = *((_QWORD *)v17 + 4);
      v19 = (const wchar_t *)(v20 + *(int *)(v20 + 8));
      v18 = (*(_DWORD *)(v20 + 48) >> 27) & 1;
    }
    if ( a3 )
    {
      v21 = a2;
      if ( a2 >= 1 )
      {
        v22 = -1LL;
        if ( a4 && v18 )
        {
          v23 = v19;
          v24 = 0;
          if ( *v19 )
          {
            v25 = (const wchar_t *)(v11 + 304);
            while ( _wcsicmp(v25, v23) )
            {
              v26 = -1LL;
              do
                ++v26;
              while ( v23[v26] );
              v24 += v26 + 1;
              v23 = &v19[v24];
              v25 = (const wchar_t *)(v11 + 304);
              if ( !*v23 )
                goto LABEL_47;
            }
          }
          if ( *v23 )
            v19 = v23;
LABEL_47:
          v21 = a2;
        }
        do
          ++v22;
        while ( v19[v22] );
        v6 = v22 + 1;
        if ( v21 < v6 )
          v6 = v21;
        memmove(a3, v19, 2LL * v6);
        *((_WORD *)a3 + v6 - 1) = 0;
      }
    }
    else
    {
      v27 = -1LL;
      if ( a4 && v18 )
      {
        v28 = v19;
        if ( *v19 )
        {
          while ( _wcsicmp((const wchar_t *)(v11 + 304), v28) )
          {
            v29 = -1LL;
            do
              ++v29;
            while ( v28[v29] );
            v4 += v29 + 1;
            v28 = &v19[v4];
            if ( !*v28 )
              goto LABEL_62;
          }
        }
        if ( *v28 )
          v19 = v28;
      }
      do
LABEL_62:
        ++v27;
      while ( v19[v27] );
      v6 = v27 + 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    goto LABEL_66;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v36);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v11);
LABEL_69:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v37);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v38);
  return v4;
}
