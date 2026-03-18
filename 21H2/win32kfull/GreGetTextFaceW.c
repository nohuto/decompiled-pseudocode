/*
 * XREFs of GreGetTextFaceW @ 0x1C001C7E0
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C001C6D0 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C001CC60 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00C5360 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C011B934 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall GreGetTextFaceW(HDC a1, int a2, void *a3, int a4)
{
  unsigned int v4; // r12d
  int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  __int64 v14; // rdx
  int v15; // edi
  int v16; // edi
  bool v17; // di
  struct PFE *v18; // rax
  int v19; // ecx
  const wchar_t *v20; // r15
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // r14
  const wchar_t *v24; // rsi
  int v25; // r13d
  const wchar_t *v26; // rax
  __int64 v27; // rax
  __int64 v29; // r14
  const wchar_t *v30; // rsi
  __int64 v31; // rax
  unsigned int v32; // [rsp+30h] [rbp-39h] BYREF
  __int64 v33; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+48h] [rbp-21h] BYREF
  struct _POINTL v36; // [rsp+50h] [rbp-19h] BYREF
  __int64 v37; // [rsp+58h] [rbp-11h] BYREF
  _QWORD v38[2]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v39[80]; // [rsp+70h] [rbp+7h] BYREF

  v4 = 0;
  v38[0] = 0LL;
  v6 = 0;
  v38[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v39);
  XDCOBJ::vLock((XDCOBJ *)v38, a1);
  v9 = v38[0];
  if ( v38[0] )
  {
    v35 = *(_QWORD *)(v38[0] + 48LL);
    if ( (*(_DWORD *)(v35 + 40) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v35);
      v9 = v38[0];
    }
    LOBYTE(v8) = 10;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 976) + 296LL);
    v11 = HmgShareLock(v10, v8);
    v33 = v11;
    v12 = v11;
    if ( !v11 )
      goto LABEL_44;
    if ( (*(_DWORD *)(v11 + 28) & 1) != 0 )
    {
      UserGetHDEV();
      v13 = *(_DWORD *)(v12 + 24);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
      v12 = 0LL;
      if ( !v35 )
        goto LABEL_44;
      v15 = v13 - 4;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            v10 = *(_QWORD *)(v35 + 1440);
        }
        else
        {
          v10 = *(_QWORD *)(v35 + 1432);
        }
      }
      else
      {
        v10 = *(_QWORD *)(v35 + 1424);
      }
      LOBYTE(v14) = 10;
      v12 = HmgShareLock(v10, v14);
      v33 = v12;
    }
    if ( v12 )
    {
      if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
        && UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
      {
        if ( KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
          && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
          && KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
        {
          goto LABEL_28;
        }
        v17 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
        if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
          goto LABEL_28;
        if ( UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
        {
LABEL_27:
          v12 = v33;
LABEL_28:
          v37 = ghsemPublicPFT;
          GreAcquireSemaphore(ghsemPublicPFT);
          v34 = 0;
          v32 = 0;
          v36 = 0LL;
          v18 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v33, (struct XDCOBJ *)v38, &v34, &v36, &v32, 0);
          if ( !v18 )
          {
            SEMOBJ::vUnlock((SEMOBJ *)&v37);
            DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
            goto LABEL_47;
          }
          v19 = 0;
          if ( (v32 & 2) == 0 || (v20 = (const wchar_t *)(v12 + 304), !*(_WORD *)(v12 + 304)) )
          {
            v21 = *((_QWORD *)v18 + 4);
            v20 = (const wchar_t *)(v21 + *(int *)(v21 + 8));
            v19 = (*(_DWORD *)(v21 + 48) >> 27) & 1;
          }
          if ( a3 )
          {
            v22 = a2;
            if ( a2 >= 1 )
            {
              v23 = -1LL;
              if ( a4 && v19 )
              {
                v24 = v20;
                v25 = 0;
                if ( *v20 )
                {
                  v26 = (const wchar_t *)(v12 + 304);
                  while ( _wcsicmp(v26, v24) )
                  {
                    v27 = -1LL;
                    do
                      ++v27;
                    while ( v24[v27] );
                    v25 += v27 + 1;
                    v24 = &v20[v25];
                    v26 = (const wchar_t *)(v12 + 304);
                    if ( !*v24 )
                      goto LABEL_50;
                  }
                }
                if ( *v24 )
                  v20 = v24;
LABEL_50:
                v22 = a2;
              }
              do
                ++v23;
              while ( v20[v23] );
              v6 = v23 + 1;
              if ( v22 < v6 )
                v6 = v22;
              memmove(a3, v20, 2LL * v6);
              *((_WORD *)a3 + v6 - 1) = 0;
            }
          }
          else
          {
            v29 = -1LL;
            if ( a4 && v19 )
            {
              v30 = v20;
              if ( *v20 )
              {
                while ( _wcsicmp((const wchar_t *)(v12 + 304), v30) )
                {
                  v31 = -1LL;
                  do
                    ++v31;
                  while ( v30[v31] );
                  v4 += v31 + 1;
                  v30 = &v20[v4];
                  if ( !*v30 )
                    goto LABEL_65;
                }
              }
              if ( *v30 )
                v20 = v30;
            }
            do
LABEL_65:
              ++v29;
            while ( v20[v29] );
            v6 = v29 + 1;
          }
          if ( ghsemPublicPFT )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
            GreReleaseSemaphoreInternal(ghsemPublicPFT);
          }
          goto LABEL_44;
        }
        if ( (v17 || !(unsigned int)UserIsUserCritSecIn())
          && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
          && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
        {
          KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
          goto LABEL_27;
        }
        v12 = v33;
      }
LABEL_44:
      if ( v12 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v12);
    }
  }
  v4 = v6;
LABEL_47:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v38);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v39);
  return v4;
}
