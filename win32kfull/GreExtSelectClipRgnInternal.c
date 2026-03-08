/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C004D240
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C000665C (_ExcludeUpdateRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C000FA18 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x1C004D220 (NtGdiExtSelectClipRgn.c)
 *     DrawTextExWorker @ 0x1C024FEBC (DrawTextExWorker.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C000FFA8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004DAE8 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0055118 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008C218 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E2260 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F7D4 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F858 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(__int64 a1, HRGN a2, int a3, int a4)
{
  HRGN v6; // rsi
  unsigned int v7; // r14d
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  struct UMPDOBJ *v11; // rdx
  int v12; // ebx
  struct _DC_ATTR *v13; // rax
  __int64 v14; // rbx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v17; // rax
  unsigned int v18; // ecx
  struct REGION *v19; // rax
  DC *v20; // rdx
  __int64 v21; // r8
  struct REGION *v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rdi
  struct SURFACE *v35; // rax
  __int64 v36; // rsi
  struct SURFACE *v37; // rbx
  Gre::Base *v38; // rcx
  struct Gre::Base::SESSION_GLOBALS *v39; // rbx
  char v40; // di
  __int64 v41; // rax
  __int64 v42; // rax
  DC *v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+38h] [rbp-C8h]
  int v45; // [rsp+40h] [rbp-C0h] BYREF
  DC *v46[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+68h] [rbp-98h]
  unsigned int v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+7Ch] [rbp-84h]
  DC *v51[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v52; // [rsp+90h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  HDC v55; // [rsp+A8h] [rbp-58h]
  struct REGION *v56[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v57; // [rsp+C0h] [rbp-40h]
  _BYTE v58[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v59[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v60; // [rsp+100h] [rbp+0h]
  char v61; // [rsp+160h] [rbp+60h] BYREF

  v6 = a2;
  v7 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  LOBYTE(a2) = 1;
  v44 = 0LL;
  v43 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v43 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v9 = *ThreadWin32Thread) != 0 && (v10 = *(_QWORD *)(v9 + 40), v10 != v9 + 40) )
      v11 = (struct UMPDOBJ *)(v10 - 40);
    else
      v11 = 0LL;
    if ( *((_WORD *)v43 + 6) == 1 )
    {
      *((_QWORD *)v43 + 271) = v11;
      *((_DWORD *)v43 + 544) = 0xFFFF;
    }
    else if ( *((struct UMPDOBJ **)v43 + 271) != v11 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v43, v11);
      goto LABEL_13;
    }
    if ( HIDWORD(v44) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v43 + 6) + 40LL) & 0x8000) == 0 )
        goto LABEL_13;
      v12 = *((_DWORD *)v43 + 528);
      if ( v12 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_13;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v43 )
    goto LABEL_14;
  if ( (*((_DWORD *)v43 + 11) & 2) != 0 )
    goto LABEL_36;
  if ( HIDWORD(v44) || (UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v43)) == 0LL || DC::SaveAttributes(v43, UserAttr) )
  {
    *((_DWORD *)v43 + 11) |= 2u;
    LODWORD(v44) = 1;
LABEL_36:
    if ( (*((_DWORD *)v43 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v43);
    if ( !v43 || !a4 && (*(_DWORD *)(HmgPentryFromPobj(v43) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_14;
    if ( *((unsigned __int16 *)v43 + 6) > 1u )
    {
      v17 = *((_QWORD *)v43 + 6);
      if ( v17 )
        v18 = *(_DWORD *)(v17 + 40);
      else
        v18 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(11LL, v18, *((unsigned __int16 *)v43 + 6));
      goto LABEL_14;
    }
    if ( !v6 )
    {
      if ( a3 == 5 )
      {
        v7 = DC::iSelect(v43, 0LL, 5);
        if ( v7 )
        {
          v51[0] = 0LL;
          v51[1] = 0LL;
          v52 = 256;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v47, (struct XDCOBJ *)&v43, 1);
          v25 = v49;
          v7 = 0;
          if ( (v49 & 1) != 0 )
          {
            if ( !*((_QWORD *)v43 + 145)
              || (*((_DWORD *)v43 + 10) & 2) == 0
              || !(unsigned int)DC::bDpiScaledSurface(v43) )
            {
              v26 = *((_QWORD *)v43 + 143);
            }
            v27 = v26 + 52;
            if ( !v26 )
              v27 = 28LL;
            if ( *(_DWORD *)v27 == 1 )
            {
              v7 = 1;
            }
            else
            {
              v28 = v26 + 48;
              if ( !v26 )
                v28 = 24LL;
              LOBYTE(v7) = *(_DWORD *)v28 > 0x38u;
              v7 += 2;
            }
          }
          if ( v51[0] && HIBYTE(v52) )
          {
            v29 = *((_QWORD *)v51[0] + 6);
            if ( (v25 & 0x1000) != 0 )
            {
              DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v47);
              if ( (v49 & 0x10) != 0 )
              {
                *((_DWORD *)v51[0] + 9) &= ~0x4000u;
                DC::pSurface(v51[0], *(struct SURFACE **)(v29 + 2528));
              }
              DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v47);
            }
            DLODCOBJ::vUnlock((DLODCOBJ *)v51);
            v25 = v49;
            v51[0] = 0LL;
          }
          if ( (v25 & 0x1000) != 0 )
          {
            GreDecLockCount();
            v49 &= ~0x1000u;
            v30 = W32GetThreadWin32Thread(KeGetCurrentThread());
            if ( v30 )
            {
              *(_QWORD *)(v30 + 320) = 0LL;
              *(_QWORD *)(v30 + 312) = 0LL;
            }
            v25 = v49;
          }
          else if ( (v25 & 0x800000) != 0 )
          {
            GreDecLockCount();
            v25 = v49 & 0xFF7FFFFF;
            v49 &= ~0x800000u;
          }
          if ( v47 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
            GreReleaseSemaphoreInternal(v47);
            v25 = v49;
          }
          if ( (v25 & 8) != 0 )
            v49 = v25 & 0xFFFFFFF7;
          if ( v48 )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
            GreReleaseSemaphoreInternal(v48);
          }
          if ( v54 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v46, v55);
            LOBYTE(v31) = 5;
            v32 = HmgShareLock(v53, v31);
            LOBYTE(v33) = 5;
            v34 = (__int64 *)v32;
            v35 = (struct SURFACE *)HmgShareLock(v54, v33);
            v36 = *v34;
            v37 = v35;
            DC::pSurface(v46[0], v35);
            DEC_SHARE_REF_CNT(v34);
            DEC_SHARE_REF_CNT(v37);
            GreDereferenceObject(v36, 1LL);
            v38 = v46[0];
            v55 = 0LL;
            v53 = 0LL;
            *((_DWORD *)v46[0] + 9) |= v50;
            v39 = Gre::Base::Globals(v38);
            if ( (*((_DWORD *)v46[0] + 9) & 0x200) != 0 )
            {
              v40 = 0;
              if ( !(unsigned int)GreGetLockCount()
                && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v39 + 15)) )
              {
                GreAcquireSemaphoreSharedInternal(*((_QWORD *)v39 + 15));
                EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v39 + 15));
                v40 = 1;
              }
              DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v61);
              v41 = HmgShareUnlockRemoveObject(v54, 0LL, 0LL, 0LL, 5);
              if ( v41 )
                SURFACE::bDeleteSurface(v41, 0LL, 1LL);
              *((_QWORD *)v46[0] + 63) = 0LL;
              DC::vClearRendering(v46[0]);
              v54 = 0LL;
              DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v61);
              if ( v40 )
              {
                EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
                GreReleaseSemaphoreInternal(*((_QWORD *)v39 + 15));
              }
            }
            else
            {
              v42 = HmgShareUnlockRemoveObject(v54, 0LL, 0LL, 0LL, 5);
              if ( v42 )
                SURFACE::bDeleteSurface(v42, 0LL, 1LL);
              *((_QWORD *)v46[0] + 63) = 0LL;
              v54 = 0LL;
            }
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
            GreReleaseSemaphoreInternal(*((_QWORD *)v39 + 10));
            if ( v46[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v46);
          }
          if ( v51[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v51);
        }
      }
      goto LABEL_15;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v56, v6, 1, 0);
    v19 = v56[0];
    if ( !v56[0] )
    {
LABEL_69:
      if ( !v57 )
      {
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v56);
        v19 = v56[0];
      }
      if ( v19 )
        _InterlockedDecrement((volatile signed __int32 *)v19 + 3);
      goto LABEL_15;
    }
    v7 = DC::iSelect(v43, v56[0], a3);
    if ( !v7 )
    {
LABEL_68:
      v19 = v56[0];
      goto LABEL_69;
    }
    v59[0] = 0LL;
    v59[1] = 0LL;
    v60 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v58, (struct XDCOBJ *)&v43, 1);
    v7 = 0;
    if ( (v58[24] & 1) == 0 )
    {
LABEL_66:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v58);
      if ( v59[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v59);
      goto LABEL_68;
    }
    v20 = v43;
    v21 = *((_QWORD *)v43 + 146);
    if ( v21 && (*((_DWORD *)v43 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v43) )
      goto LABEL_125;
    if ( !*((_QWORD *)v20 + 144) )
    {
      v22 = DC::prgnVisSnap(v20);
      goto LABEL_59;
    }
    if ( v21 )
    {
LABEL_125:
      if ( (*((_DWORD *)v20 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v20) )
        goto LABEL_59;
    }
    v22 = (struct REGION *)*((_QWORD *)v20 + 144);
LABEL_59:
    v23 = (__int64)v22 + 52;
    if ( !v22 )
      v23 = 28LL;
    if ( *(_DWORD *)v23 == 1 )
    {
      v7 = 1;
    }
    else
    {
      v24 = (__int64)v22 + 48;
      if ( !v22 )
        v24 = 24LL;
      LOBYTE(v7) = *(_DWORD *)v24 > 0x38u;
      v7 += 2;
    }
    goto LABEL_66;
  }
LABEL_13:
  _InterlockedDecrement((volatile signed __int32 *)v43 + 3);
  v43 = 0LL;
LABEL_14:
  EngSetLastError(6u);
LABEL_15:
  if ( v43 )
  {
    if ( (_DWORD)v44 && (*((_DWORD *)v43 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v44) )
      {
        v13 = XDCOBJ::GetUserAttr((XDCOBJ *)&v43);
        if ( v13 )
          DC::RestoreAttributes(v43, v13);
      }
      *((_DWORD *)v43 + 11) &= ~2u;
      LODWORD(v44) = 0;
    }
    v45 = 0;
    v14 = *(_QWORD *)v43;
    HmgDecrementExclusiveReferenceCountEx(v43, HIDWORD(v44), &v45);
    if ( v45 )
      GrepDeleteDC(v14, 0x2000000LL);
  }
  return v7;
}
