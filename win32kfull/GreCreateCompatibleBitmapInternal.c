/*
 * XREFs of GreCreateCompatibleBitmapInternal @ 0x1C007BB00
 * Callers:
 *     CreateSpb @ 0x1C000D094 (CreateSpb.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 *     _DrawIconEx @ 0x1C003B618 (_DrawIconEx.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C005DF10 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C0060888 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiCreateCompatibleBitmap @ 0x1C00D3CF0 (NtGdiCreateCompatibleBitmap.c)
 *     RecolorDeskPattern @ 0x1C00F5B00 (RecolorDeskPattern.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C01166A8 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BD154 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z @ 0x1C01FEA38 (-CreateScreenBitmap@@YAPEAUHBITMAP__@@HHI@Z.c)
 *     MNCreateAnimationBitmap @ 0x1C0201E28 (MNCreateAnimationBitmap.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C0223520 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02270EC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0228074 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxSnapWindow @ 0x1C022AF08 (xxxSnapWindow.c)
 *     CreateCompatiblePublicDC @ 0x1C02421AC (CreateCompatiblePublicDC.c)
 *     GreEscCreateScaledCompatibleBitmap @ 0x1C02AA3F0 (GreEscCreateScaledCompatibleBitmap.c)
 *     ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DFBC8 (-GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEA.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0055118 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C007C5E0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008D3E0 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E2260 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F7D4 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F858 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreCreateCompatibleBitmapInternal(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned __int16 *a6)
{
  __int64 v6; // r12
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v11; // rdi
  int v12; // esi
  BOOL v13; // r13d
  int v14; // r14d
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v17; // rcx
  __int64 v18; // rax
  struct UMPDOBJ *v19; // rax
  DC *v20; // rdx
  int v21; // ebx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v23; // rbx
  struct SURFACE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 *v27; // rax
  __int64 v28; // r8
  DC *v29; // rbx
  __int64 v30; // r14
  struct Gre::Base::SESSION_GLOBALS *v31; // rdi
  struct SURFACE *v32; // rdi
  Gre::Base *v33; // rcx
  int v34; // eax
  __int64 v35; // r13
  DC *v36; // rsi
  __int64 *v37; // rax
  unsigned int v38; // edi
  float v39; // xmm6_4
  float v40; // xmm8_4
  unsigned __int16 ScaledLogPixels; // ax
  int v42; // eax
  float v43; // xmm0_4
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rbx
  DC *v52; // rax
  __int64 v53; // rbx
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 *v59; // rdi
  struct SURFACE *v60; // rax
  __int64 v61; // rsi
  struct SURFACE *v62; // rbx
  Gre::Base *v63; // rcx
  struct Gre::Base::SESSION_GLOBALS *v64; // rbx
  char v65; // di
  __int64 v66; // rax
  __int64 v67; // rax
  Gre::Base *v68; // rcx
  struct Gre::Base::SESSION_GLOBALS *v69; // rbx
  DC *v70; // rcx
  struct _DC_ATTR *v71; // rax
  __int64 v72; // rbx
  int v73; // [rsp+20h] [rbp-E0h]
  DC *v74; // [rsp+80h] [rbp-80h] BYREF
  __int64 v75; // [rsp+88h] [rbp-78h]
  DC *v76[2]; // [rsp+90h] [rbp-70h] BYREF
  int v77; // [rsp+A0h] [rbp-60h] BYREF
  int v78[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  __int128 v79; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-40h]
  unsigned int v81; // [rsp+C8h] [rbp-38h]
  int v82; // [rsp+CCh] [rbp-34h]
  DC *v83[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v84; // [rsp+E0h] [rbp-20h]
  __int64 v85; // [rsp+E8h] [rbp-18h]
  __int64 v86; // [rsp+F0h] [rbp-10h]
  HDC v87; // [rsp+F8h] [rbp-8h]
  int v88; // [rsp+100h] [rbp+0h]
  __int64 v89; // [rsp+108h] [rbp+8h] BYREF
  float v90; // [rsp+110h] [rbp+10h]
  float v91; // [rsp+114h] [rbp+14h]
  float v92; // [rsp+11Ch] [rbp+1Ch]
  _BYTE v93[16]; // [rsp+120h] [rbp+20h] BYREF
  char v94; // [rsp+1A8h] [rbp+A8h] BYREF
  int v95; // [rsp+1B0h] [rbp+B0h] BYREF
  BOOL v96; // [rsp+1B8h] [rbp+B8h]

  v6 = a2;
  v8 = 0LL;
  v9 = (int)a3;
  v95 = 0;
  v76[0] = (DC *)__PAIR64__(a3, v6);
  v11 = 0LL;
  v12 = 0;
  v96 = (a4 & 0x1000000) == 0;
  if ( (a4 & 0x2000000) != 0 )
  {
    if ( (a4 & 0x1000000) != 0 )
    {
      v12 = 1;
      v95 = 1;
    }
    else
    {
      DbgPrint("GreCreateCompatibleBitmap: got CCB_KMSECTIONVIEW without CCB_NOVIDEOMEMORY...ignoring CCB_KMSECTIONVIEW\n");
      v8 = 0LL;
    }
  }
  v88 = a4 & 0x4000000;
  v13 = (a4 & 0x4000000) != 0;
  v14 = (a4 >> 27) & 1;
  LODWORD(v89) = v13;
  if ( (int)v6 <= 0 || (int)v9 <= 0 || (unsigned __int64)(v9 * v6) > 0x3FFFFFFF )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  if ( !a1 )
    return GreCreateBitmap((unsigned int)v6, (unsigned int)v9, 1LL, 1LL, 0LL);
  LOBYTE(v8) = 1;
  v75 = 0LL;
  v74 = (DC *)HmgLockEx(a1, v8, 0LL);
  if ( !v74 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet(v17);
LABEL_30:
    v20 = v74;
    goto LABEL_31;
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread
    && (v18 = *ThreadWin32Thread) != 0
    && (v17 = *(Gre::Base **)(v18 + 40), v17 != (Gre::Base *)(v18 + 40)) )
  {
    v19 = (Gre::Base *)((char *)v17 - 40);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = v74;
  if ( *((_WORD *)v74 + 6) == 1 )
  {
    *((_QWORD *)v74 + 271) = v19;
    *((_DWORD *)v74 + 544) = 0xFFFF;
    v20 = v74;
  }
  else if ( *((struct UMPDOBJ **)v74 + 271) != v19 )
  {
    XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v74, v19);
    goto LABEL_26;
  }
  if ( HIDWORD(v75) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 6) + 40LL) & 0x8000) == 0 )
    {
LABEL_22:
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
      v74 = 0LL;
LABEL_23:
      DCOBJ::~DCOBJ((DCOBJ *)&v74);
      return 0LL;
    }
    v21 = *((_DWORD *)v20 + 528);
    if ( v21 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      v20 = v74;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
LABEL_31:
  if ( !v20 )
    goto LABEL_23;
  if ( (*((_DWORD *)v20 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v75) )
    {
LABEL_37:
      *((_DWORD *)v20 + 11) |= 2u;
      v20 = v74;
      LODWORD(v75) = 1;
      goto LABEL_38;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v74);
    if ( !UserAttr || DC::SaveAttributes(v74, UserAttr) )
    {
      v20 = v74;
      goto LABEL_37;
    }
LABEL_26:
    _InterlockedDecrement((volatile signed __int32 *)v74 + 3);
    v74 = 0LL;
    DCOBJ::~DCOBJ((DCOBJ *)&v74);
    return 0LL;
  }
LABEL_38:
  if ( (*((_DWORD *)v20 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v20);
    v20 = v74;
  }
  if ( !v20 )
    goto LABEL_23;
  v23 = *((_QWORD *)v20 + 6);
  if ( (*(_DWORD *)(v23 + 40) & 0x8000) == 0 )
  {
    v31 = Gre::Base::Globals(v17);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v31 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v31 + 10));
    v32 = (struct SURFACE *)*((_QWORD *)v74 + 62);
    if ( !v32 )
      v32 = SURFACE::pdibDefault;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v93, (struct XDCOBJ *)&v74);
    v34 = *(_DWORD *)(v23 + 40);
    v83[1] = 0LL;
    v79 = 0LL;
    v84 = 256;
    v86 = 0LL;
    v85 = 0LL;
    v83[0] = 0LL;
    v81 = 1;
    if ( (v34 & 1) != 0 )
    {
      Gre::Base::Globals(v33);
      *(_QWORD *)&v79 = *(_QWORD *)(v23 + 48);
      v80 = v23;
      GreAcquireSemaphore(v79);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v79, 11LL);
    }
    v35 = 0LL;
    v36 = v74;
    if ( *((_DWORD *)v74 + 8) == 1 )
    {
      v37 = (__int64 *)*((_QWORD *)v32 + 16);
      v33 = (Gre::Base *)*((unsigned int *)v32 + 24);
      v38 = *((_DWORD *)v32 + 24);
      if ( !v37 )
        goto LABEL_63;
    }
    else
    {
      v38 = *(_DWORD *)(v23 + 2076);
      if ( (*(_DWORD *)(v23 + 2140) & 0x100) != 0 )
        goto LABEL_63;
      v37 = *(__int64 **)(v23 + 1776);
    }
    v35 = *v37;
LABEL_63:
    v39 = 0.0;
    v40 = 0.0;
    if ( a6 )
    {
      v33 = (Gre::Base *)*a6;
      if ( (_WORD)v33 == 96 )
        goto LABEL_70;
      ScaledLogPixels = GreGetScaledLogPixels(v33);
      v36 = v74;
      v39 = (float)ScaledLogPixels / 96.0;
      v40 = v39;
    }
    else
    {
      v42 = *((_DWORD *)v74 + 130);
      if ( (v42 & 1) == 0 || (v42 & 2) != 0 )
        goto LABEL_70;
      v39 = *((float *)v74 + 131);
      v43 = *((float *)v74 + 132);
      v90 = v39;
      v91 = v43;
      v92 = v43;
      v40 = v43;
    }
    if ( v39 != 0.0 )
    {
LABEL_71:
      v77 = v6;
      v78[0] = v9;
      bFToL(v33, &v77, 6LL);
      bFToL(v44, v78, v45);
      LODWORD(v6) = v77;
      LODWORD(v9) = v78[0];
LABEL_72:
      if ( v88 )
      {
        if ( (*(_DWORD *)(v23 + 40) & 0x4000000) != 0 )
        {
          if ( a5 )
          {
            v46 = *(_QWORD *)(v23 + 1768);
            if ( v46 )
            {
              *(_QWORD *)(v46 + 104) = *a5;
              v36 = v74;
            }
          }
        }
      }
      CreateCompatibleSurface(&v89, *((_QWORD *)v36 + 6), v38, v35, v6, v9, v96, v95, v89, 0, 0, 0, v14, 0, 0, 0LL);
      v51 = v89;
      if ( v89 )
      {
        if ( v39 != 0.0 || v40 != 0.0 )
        {
          v52 = v76[0];
          *(_DWORD *)(v89 + 116) |= 0x800u;
          *(_QWORD *)(v51 + 668) = v52;
          *(float *)(v51 + 660) = v39;
          *(float *)(v51 + 664) = v40;
        }
        LOBYTE(v49) = 5;
        HmgSetOwner(*(_QWORD *)(v51 + 32), 2147483650LL, v49);
        v30 = *(_QWORD *)(v51 + 32);
      }
      else
      {
        v30 = 0LL;
      }
      if ( v51 )
        DEC_SHARE_REF_CNT(v51);
      if ( v83[0] && HIBYTE(v84) )
      {
        v53 = *((_QWORD *)v83[0] + 6);
        if ( (v81 & 0x1000) != 0 )
        {
          DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v79);
          if ( (v81 & 0x10) != 0 )
          {
            *((_DWORD *)v83[0] + 9) &= ~0x4000u;
            DC::pSurface(v83[0], *(struct SURFACE **)(v53 + 2528));
          }
          DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v79);
        }
        DLODCOBJ::vUnlock((DLODCOBJ *)v83);
        v83[0] = 0LL;
      }
      v54 = v81;
      if ( (v81 & 0x1000) != 0 )
      {
        GreDecLockCount(v48, v47, v49, v50);
        v81 &= ~0x1000u;
        v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        if ( v55 )
        {
          *(_QWORD *)(v55 + 320) = 0LL;
          *(_QWORD *)(v55 + 312) = 0LL;
        }
        v54 = v81;
      }
      else if ( (v81 & 0x800000) != 0 )
      {
        GreDecLockCount(v48, v47, v49, v50);
        v54 = v81 & 0xFF7FFFFF;
        v81 &= ~0x800000u;
      }
      if ( (_QWORD)v79 )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
        GreReleaseSemaphoreInternal(v79);
        v54 = v81;
      }
      if ( (v54 & 8) != 0 )
        v81 = v54 & 0xFFFFFFF7;
      if ( *((_QWORD *)&v79 + 1) )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
        GreReleaseSemaphoreInternal(*((_QWORD *)&v79 + 1));
      }
      if ( v86 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v76, v87);
        LOBYTE(v56) = 5;
        v57 = HmgShareLock(v85, v56);
        LOBYTE(v58) = 5;
        v59 = (__int64 *)v57;
        v60 = (struct SURFACE *)HmgShareLock(v86, v58);
        v61 = *v59;
        v62 = v60;
        DC::pSurface(v76[0], v60);
        DEC_SHARE_REF_CNT(v59);
        DEC_SHARE_REF_CNT(v62);
        GreDereferenceObject(v61, 1LL);
        v63 = v76[0];
        v87 = 0LL;
        v85 = 0LL;
        *((_DWORD *)v76[0] + 9) |= v82;
        v64 = Gre::Base::Globals(v63);
        if ( (*((_DWORD *)v76[0] + 9) & 0x200) != 0 )
        {
          v65 = 0;
          if ( !(unsigned int)GreGetLockCount(v76[0])
            && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v64 + 15)) )
          {
            GreAcquireSemaphoreSharedInternal(*((_QWORD *)v64 + 15));
            EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v64 + 15));
            v65 = 1;
          }
          DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v94);
          LOBYTE(v73) = 5;
          v66 = HmgShareUnlockRemoveObject(v86, 0LL, 0LL, 0LL, v73);
          if ( v66 )
            SURFACE::bDeleteSurface(v66, 0LL, 1LL);
          *((_QWORD *)v76[0] + 63) = 0LL;
          DC::vClearRendering(v76[0]);
          v86 = 0LL;
          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v94);
          if ( v65 )
          {
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
            GreReleaseSemaphoreInternal(*((_QWORD *)v64 + 15));
          }
        }
        else
        {
          LOBYTE(v73) = 5;
          v67 = HmgShareUnlockRemoveObject(v86, 0LL, 0LL, 0LL, v73);
          if ( v67 )
            SURFACE::bDeleteSurface(v67, 0LL, 1LL);
          *((_QWORD *)v76[0] + 63) = 0LL;
          v86 = 0LL;
        }
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
        GreReleaseSemaphoreInternal(*((_QWORD *)v64 + 10));
        if ( v76[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v76);
      }
      if ( v83[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v83);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v93);
      v69 = Gre::Base::Globals(v68);
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
      GreReleaseSemaphoreInternal(*((_QWORD *)v69 + 10));
      goto LABEL_121;
    }
LABEL_70:
    if ( v40 == 0.0 )
      goto LABEL_72;
    goto LABEL_71;
  }
  v24 = XDCOBJ::pSurfaceEff((XDCOBJ *)&v74);
  if ( *(_DWORD *)(v25 + 32) == 1 )
  {
    v26 = *((unsigned int *)v24 + 24);
    v27 = (__int64 *)*((_QWORD *)v24 + 16);
    if ( !v27 )
      goto LABEL_48;
  }
  else
  {
    v26 = *(unsigned int *)(v23 + 2076);
    if ( (*(_DWORD *)(v23 + 2140) & 0x100) != 0 )
      goto LABEL_48;
    v27 = *(__int64 **)(v23 + 1776);
  }
  v11 = *v27;
LABEL_48:
  CreateCompatibleSurface(v76, v23, v26, v11, v6, v9, v96, v12, v13, 0, 0, 0, v14, 0, 0, 0LL);
  v29 = v76[0];
  if ( v76[0] )
  {
    LOBYTE(v28) = 5;
    HmgSetOwner(*((_QWORD *)v76[0] + 4), 2147483650LL, v28);
    v30 = *((_QWORD *)v29 + 4);
  }
  else
  {
    v30 = 0LL;
  }
  if ( v29 )
    DEC_SHARE_REF_CNT(v29);
LABEL_121:
  v70 = v74;
  if ( v74 )
  {
    if ( (_DWORD)v75 && (*((_DWORD *)v74 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v75) )
      {
        v71 = XDCOBJ::GetUserAttr((XDCOBJ *)&v74);
        v70 = v74;
        if ( v71 )
        {
          DC::RestoreAttributes(v74, v71);
          v70 = v74;
        }
      }
      *((_DWORD *)v70 + 11) &= ~2u;
      v70 = v74;
      LODWORD(v75) = 0;
    }
    v95 = 0;
    v72 = *(_QWORD *)v70;
    HmgDecrementExclusiveReferenceCountEx(v70, HIDWORD(v75), &v95);
    if ( v95 )
      GrepDeleteDC(v72, 0x2000000LL);
  }
  return v30;
}
