/*
 * XREFs of GreGetTextFaceW @ 0x1C0110B2C
 * Callers:
 *     NtGdiGetTextFaceW @ 0x1C01112B0 (NtGdiGetTextFaceW.c)
 * Callees:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C00BDC38 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C010F190 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C01110BC (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C013E7C0 (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetTextFaceW(__int64 a1, int a2, void *a3, int a4)
{
  int v5; // r15d
  void *v7; // r13
  __int64 v8; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  struct UMPDOBJ *v12; // rdx
  DC *v13; // r9
  int v14; // ebx
  DC *v15; // r9
  struct _DC_ATTR *UserAttr; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // edi
  __int64 v23; // rdx
  int v24; // edi
  int v25; // edi
  Gre::Base *v26; // rcx
  __int64 v27; // rdi
  struct PFE *v28; // rax
  int v29; // ecx
  const wchar_t *v30; // r14
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rsi
  const wchar_t *v34; // r15
  int v35; // r12d
  __int64 v36; // rax
  __int64 v37; // rsi
  const wchar_t *v38; // r15
  int i; // r12d
  __int64 v40; // rax
  struct _DC_ATTR *v41; // rax
  __int64 v42; // rbx
  DC *v44; // [rsp+38h] [rbp-39h] BYREF
  __int64 v45; // [rsp+40h] [rbp-31h]
  _BYTE v46[32]; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v47; // [rsp+68h] [rbp-9h] BYREF
  int v48; // [rsp+6Ch] [rbp-5h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-1h] BYREF
  _QWORD *v50; // [rsp+78h] [rbp+7h] BYREF
  __int64 v51; // [rsp+80h] [rbp+Fh] BYREF
  struct _POINTL v52; // [rsp+88h] [rbp+17h] BYREF
  _QWORD v53[7]; // [rsp+90h] [rbp+1Fh] BYREF

  v5 = 0;
  v45 = 0LL;
  v7 = a3;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v46);
  LOBYTE(v8) = 1;
  v44 = (DC *)HmgLockEx(a1, v8, 0LL);
  if ( v44 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v10 = *ThreadWin32Thread) != 0 && (v11 = (_QWORD *)(v10 + 40), (_QWORD *)*v11 != v11) )
      v12 = (struct UMPDOBJ *)(*v11 - 40LL);
    else
      v12 = 0LL;
    v13 = v44;
    if ( *((_WORD *)v44 + 6) == 1 )
    {
      *((_QWORD *)v44 + 271) = v12;
      *((_DWORD *)v44 + 544) = 0xFFFF;
      v13 = v44;
    }
    else if ( *((struct UMPDOBJ **)v44 + 271) != v12 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v44, v12);
      goto LABEL_16;
    }
    if ( HIDWORD(v45) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v13 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_13:
        _InterlockedAdd((volatile signed __int32 *)v13 + 3, 0xFFFFFFFF);
LABEL_17:
        v15 = 0LL;
        v44 = 0LL;
        goto LABEL_84;
      }
      v14 = *((_DWORD *)v13 + 528);
      if ( v14 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v13 = v44;
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*((_DWORD *)v13 + 528) )
        goto LABEL_24;
      *((_DWORD *)v13 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v13 = v44;
LABEL_24:
  if ( !v13 )
  {
LABEL_94:
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v46);
    return (unsigned int)v5;
  }
  if ( (*((_DWORD *)v13 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v45) )
    {
LABEL_30:
      *((_DWORD *)v13 + 11) |= 2u;
      v13 = v44;
      LODWORD(v45) = 1;
      goto LABEL_31;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v44);
    if ( !UserAttr || DC::SaveAttributes(v44, UserAttr) )
    {
      v13 = v44;
      goto LABEL_30;
    }
LABEL_16:
    _InterlockedAdd((volatile signed __int32 *)v44 + 3, 0xFFFFFFFF);
    goto LABEL_17;
  }
LABEL_31:
  if ( (*((_DWORD *)v13 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v13);
    v13 = v44;
  }
  if ( !v13 )
    goto LABEL_94;
  v50 = (_QWORD *)*((_QWORD *)v13 + 6);
  if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v50) )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v50);
  LOBYTE(v17) = 10;
  v18 = *(_QWORD *)(*((_QWORD *)v44 + 122) + 296LL);
  v19 = HmgShareLock(v18, v17);
  v51 = v19;
  v21 = v19;
  if ( !v19 )
    goto LABEL_81;
  if ( (*(_DWORD *)(v19 + 28) & 1) != 0 )
  {
    UserGetHDEV(v20);
    v22 = *(_DWORD *)(v21 + 24);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v21);
    v21 = 0LL;
    if ( !v50 )
      goto LABEL_81;
    v24 = v22 - 4;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 == 1 )
          v18 = v50[180];
      }
      else
      {
        v18 = v50[179];
      }
    }
    else
    {
      v18 = v50[178];
    }
    LOBYTE(v23) = 10;
    v21 = HmgShareLock(v18, v23);
    v51 = v21;
  }
  if ( !v21 )
  {
LABEL_83:
    v15 = v44;
LABEL_84:
    if ( v15 )
    {
      if ( (_DWORD)v45 && (*((_DWORD *)v15 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v45) )
        {
          v41 = XDCOBJ::GetUserAttr((XDCOBJ *)&v44);
          if ( v41 )
            DC::RestoreAttributes(v44, v41);
          v15 = v44;
        }
        *((_DWORD *)v15 + 11) &= ~2u;
        v15 = v44;
        LODWORD(v45) = 0;
      }
      v48 = 0;
      v42 = *(_QWORD *)v15;
      HmgDecrementExclusiveReferenceCountEx(v15, HIDWORD(v45), &v48);
      if ( v48 )
        GrepDeleteDC(v42, 0x2000000LL);
    }
    goto LABEL_94;
  }
  if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 )
  {
LABEL_81:
    if ( v21 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v21);
    goto LABEL_83;
  }
  v27 = *((_QWORD *)Gre::Base::Globals(v26) + 6);
  v53[0] = v27;
  GreAcquireSemaphore(v27);
  v49 = 0;
  v47 = 0;
  v52 = 0LL;
  v28 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v51, &v44, &v49, &v52, &v47, 0);
  if ( v28 )
  {
    v29 = 0;
    if ( (v47 & 2) == 0 || (v30 = (const wchar_t *)(v21 + 304), !*(_WORD *)(v21 + 304)) )
    {
      v31 = *((_QWORD *)v28 + 4);
      v30 = (const wchar_t *)(v31 + *(int *)(v31 + 8));
      v29 = (*(_DWORD *)(v31 + 48) >> 27) & 1;
    }
    if ( v7 )
    {
      v32 = a2;
      if ( a2 >= 1 )
      {
        v33 = -1LL;
        if ( a4 && v29 )
        {
          v34 = v30;
          v35 = 0;
          if ( *v30 )
          {
            do
            {
              if ( !_wcsicmp((const wchar_t *)(v21 + 304), v34) )
                break;
              v36 = -1LL;
              do
                ++v36;
              while ( v34[v36] );
              v35 += v36 + 1;
              v34 = &v30[v35];
            }
            while ( *v34 );
            v7 = a3;
            v32 = a2;
          }
          if ( *v34 )
            v30 = v34;
        }
        do
          ++v33;
        while ( v30[v33] );
        v5 = v33 + 1;
        if ( v32 < (int)v33 + 1 )
          v5 = v32;
        memmove(v7, v30, 2LL * v5);
        *((_WORD *)v7 + v5 - 1) = 0;
      }
    }
    else
    {
      v37 = -1LL;
      if ( a4 && v29 )
      {
        v38 = v30;
        for ( i = 0; *v38; v38 = &v30[i] )
        {
          if ( !_wcsicmp((const wchar_t *)(v21 + 304), v38) )
            break;
          v40 = -1LL;
          do
            ++v40;
          while ( v38[v40] );
          i += v40 + 1;
        }
        if ( *v38 )
          v30 = v38;
      }
      do
        ++v37;
      while ( v30[v37] );
      v5 = v37 + 1;
    }
    if ( v27 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem");
      GreReleaseSemaphoreInternal(v27);
    }
    goto LABEL_81;
  }
  SEMOBJ::vUnlock((SEMOBJ *)v53);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v21);
  DCOBJ::~DCOBJ((DCOBJ *)&v44);
  return 0LL;
}
