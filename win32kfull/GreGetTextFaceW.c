/*
 * XREFs of GreGetTextFaceW @ 0x1C011A714
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C011A610 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00F5628 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C011AC70 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C011C60C (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextFaceW(__int64 a1, __int64 a2, void *a3, int a4)
{
  void *v4; // r13
  unsigned int v6; // r15d
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  struct UMPDOBJ *v10; // rdx
  DC *v11; // r9
  int v12; // ebx
  DC *v13; // r9
  __int64 v14; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // edi
  __int64 v21; // rdx
  int v22; // edi
  int v23; // edi
  Gre::Base *v24; // rcx
  __int64 v25; // rdi
  struct PFE *v26; // rax
  int v27; // ecx
  const wchar_t *v28; // r14
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rsi
  const wchar_t *v32; // r15
  int v33; // r12d
  __int64 v34; // rax
  __int64 v35; // rsi
  const wchar_t *v36; // r15
  int i; // r12d
  __int64 v38; // rax
  struct _DC_ATTR *v39; // rax
  __int64 v40; // rbx
  unsigned int v42; // [rsp+30h] [rbp-40h] BYREF
  int v43; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v44; // [rsp+38h] [rbp-38h] BYREF
  __int64 v45; // [rsp+40h] [rbp-30h] BYREF
  __int64 v46; // [rsp+48h] [rbp-28h] BYREF
  struct _POINTL v47; // [rsp+50h] [rbp-20h] BYREF
  __int64 v48; // [rsp+58h] [rbp-18h] BYREF
  DC *v49; // [rsp+60h] [rbp-10h] BYREF
  __int64 v50; // [rsp+68h] [rbp-8h]
  int v51; // [rsp+B8h] [rbp+48h]

  v51 = a2;
  v4 = a3;
  v50 = 0LL;
  v6 = 0;
  LOBYTE(a2) = 1;
  v49 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( !v49 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v14);
LABEL_21:
    v11 = v49;
    goto LABEL_22;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (v8 = *ThreadWin32Thread) != 0 && (v9 = (_QWORD *)(v8 + 40), (_QWORD *)*v9 != v9) )
    v10 = (struct UMPDOBJ *)(*v9 - 40LL);
  else
    v10 = 0LL;
  v11 = v49;
  if ( *((_WORD *)v49 + 6) == 1 )
  {
    *((_QWORD *)v49 + 271) = v10;
    *((_DWORD *)v49 + 544) = 0xFFFF;
    v11 = v49;
  }
  else if ( *((struct UMPDOBJ **)v49 + 271) != v10 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v49, v10);
    goto LABEL_16;
  }
  if ( HIDWORD(v50) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v11 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_13:
      _InterlockedAdd((volatile signed __int32 *)v11 + 3, 0xFFFFFFFF);
LABEL_17:
      v13 = 0LL;
      v49 = 0LL;
      goto LABEL_82;
    }
    v12 = *((_DWORD *)v11 + 528);
    if ( v12 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v11 = v49;
      goto LABEL_13;
    }
    goto LABEL_21;
  }
LABEL_22:
  if ( !v11 )
    return v6;
  if ( (*((_DWORD *)v11 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v50) )
    {
LABEL_28:
      *((_DWORD *)v11 + 11) |= 2u;
      v11 = v49;
      LODWORD(v50) = 1;
      goto LABEL_29;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v49);
    if ( !UserAttr || DC::SaveAttributes(v49, UserAttr) )
    {
      v11 = v49;
      goto LABEL_28;
    }
LABEL_16:
    _InterlockedAdd((volatile signed __int32 *)v49 + 3, 0xFFFFFFFF);
    goto LABEL_17;
  }
LABEL_29:
  if ( (*((_DWORD *)v11 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v11);
    v11 = v49;
  }
  if ( !v11 )
    return v6;
  v45 = *((_QWORD *)v11 + 6);
  if ( (*(_DWORD *)(v45 + 40) & 0x40) == 0 )
  {
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v45);
    v11 = v49;
  }
  LOBYTE(v10) = 10;
  v16 = *(_QWORD *)(*((_QWORD *)v11 + 122) + 296LL);
  v17 = HmgShareLock(v16, v10);
  v46 = v17;
  v19 = v17;
  if ( !v17 )
    goto LABEL_79;
  if ( (*(_DWORD *)(v17 + 28) & 1) != 0 )
  {
    UserGetHDEV(v18);
    v20 = *(_DWORD *)(v19 + 24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v19);
    v19 = 0LL;
    if ( !v45 )
      goto LABEL_79;
    v22 = v20 - 4;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
          v16 = *(_QWORD *)(v45 + 1440);
      }
      else
      {
        v16 = *(_QWORD *)(v45 + 1432);
      }
    }
    else
    {
      v16 = *(_QWORD *)(v45 + 1424);
    }
    LOBYTE(v21) = 10;
    v19 = HmgShareLock(v16, v21);
    v46 = v19;
  }
  if ( !v19 )
  {
LABEL_81:
    v13 = v49;
LABEL_82:
    if ( v13 )
    {
      if ( (_DWORD)v50 && (*((_DWORD *)v13 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v50) )
        {
          v39 = XDCOBJ::GetUserAttr((XDCOBJ *)&v49);
          if ( v39 )
            DC::RestoreAttributes(v49, v39);
          v13 = v49;
        }
        *((_DWORD *)v13 + 11) &= ~2u;
        v13 = v49;
        LODWORD(v50) = 0;
      }
      v43 = 0;
      v40 = *(_QWORD *)v13;
      HmgDecrementExclusiveReferenceCountEx(v13, HIDWORD(v50), &v43);
      if ( v43 )
        GrepDeleteDC(v40, 0x2000000LL);
    }
    return v6;
  }
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
LABEL_79:
    if ( v19 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v19);
    goto LABEL_81;
  }
  v25 = *((_QWORD *)Gre::Base::Globals(v24) + 6);
  v48 = v25;
  GreAcquireSemaphore(v25);
  v44 = 0;
  v42 = 0;
  v47 = 0LL;
  v26 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v46, (struct XDCOBJ *)&v49, &v44, &v47, &v42, 0);
  if ( v26 )
  {
    v27 = 0;
    if ( (v42 & 2) == 0 || (v28 = (const wchar_t *)(v19 + 304), !*(_WORD *)(v19 + 304)) )
    {
      v29 = *((_QWORD *)v26 + 4);
      v28 = (const wchar_t *)(v29 + *(int *)(v29 + 8));
      v27 = (*(_DWORD *)(v29 + 48) >> 27) & 1;
    }
    if ( v4 )
    {
      v30 = v51;
      if ( v51 >= 1 )
      {
        v31 = -1LL;
        if ( a4 && v27 )
        {
          v32 = v28;
          v33 = 0;
          if ( *v28 )
          {
            do
            {
              if ( !_wcsicmp((const wchar_t *)(v19 + 304), v32) )
                break;
              v34 = -1LL;
              do
                ++v34;
              while ( v32[v34] );
              v33 += v34 + 1;
              v32 = &v28[v33];
            }
            while ( *v32 );
            v4 = a3;
            v30 = v51;
          }
          if ( *v32 )
            v28 = v32;
        }
        do
          ++v31;
        while ( v28[v31] );
        v6 = v31 + 1;
        if ( v30 < (int)v31 + 1 )
          v6 = v30;
        memmove(v4, v28, 2LL * (int)v6);
        *((_WORD *)v4 + (int)v6 - 1) = 0;
      }
    }
    else
    {
      v35 = -1LL;
      if ( a4 && v27 )
      {
        v36 = v28;
        for ( i = 0; *v36; v36 = &v28[i] )
        {
          if ( !_wcsicmp((const wchar_t *)(v19 + 304), v36) )
            break;
          v38 = -1LL;
          do
            ++v38;
          while ( v36[v38] );
          i += v38 + 1;
        }
        if ( *v36 )
          v28 = v36;
      }
      do
        ++v35;
      while ( v28[v35] );
      v6 = v35 + 1;
    }
    if ( v25 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v25);
    }
    goto LABEL_79;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v48);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v19);
  DCOBJ::~DCOBJ((DCOBJ *)&v49);
  return 0LL;
}
