/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C00EA5BC
 * Callers:
 *     zzzComposeDesktop @ 0x1C00EC878 (zzzComposeDesktop.c)
 * Callees:
 *     UserGetMiniWinInfo @ 0x1C0008C0C (UserGetMiniWinInfo.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0012998 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0012A28 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C0012AC0 (DwmAsyncUpdateSprite.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0012D88 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     UserGetHwndProcess @ 0x1C0013060 (UserGetHwndProcess.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0013098 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0015600 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0015774 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0015C80 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0015E5C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0016760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C001755C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0091470 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BD148 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BD17C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00BE3CC (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00EAD24 (UserIsWindowOnDesktopAndComposed.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C00ED6E8 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00EE608 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     GreDeleteSprite @ 0x1C00EF428 (GreDeleteSprite.c)
 *     DwmAsyncCreateSprite @ 0x1C0114CC0 (DwmAsyncCreateSprite.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C011919C (UserIsWindowWithNoRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C016A6E4 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  HDEV v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // edx
  HSPRITE DwmSpriteObj; // rbx
  __int64 v12; // rdx
  struct DWMSPRITE *v13; // r13
  __int64 *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _SURFOBJ *v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rbx
  BOOL (__stdcall *v27)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  unsigned __int64 HwndProcess; // rax
  __int64 v29; // rcx
  int v30; // ebx
  void *v31; // rax
  int v32; // edx
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rcx
  int v38; // ebx
  BOOL v39; // edi
  void *v40; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v42; // rbx
  __int64 v43; // r9
  __int64 v44; // r9
  _QWORD *v45; // rbx
  _QWORD *v46; // r14
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // r14
  struct DwmState *v50; // rbx
  __int64 v51; // r8
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v54; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v55; // [rsp+68h] [rbp-98h] BYREF
  int v56; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v57; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  struct SFMLOGICALSURFACE *v62; // [rsp+90h] [rbp-70h]
  _BYTE v63[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v64[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h]
  _QWORD v66[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v67[32]; // [rsp+C0h] [rbp-40h] BYREF
  struct DWMSPRITE *v68; // [rsp+E0h] [rbp-20h]
  _BYTE v69[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int128 v71[9]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v72; // [rsp+1A0h] [rbp+A0h] BYREF
  int v73; // [rsp+1A8h] [rbp+A8h]
  int v74; // [rsp+1ACh] [rbp+ACh]
  struct tagRECT v75; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = a2;
  v65 = a2;
  v60 = a1;
  v58 = 0;
  v3 = (HDEV)a1;
  v61 = a1;
  v4 = 1;
  ENTER_GRE_DWM_CRIT(a1, &v58);
  v5 = (__int64)(v3 + 22);
  if ( *((_DWORD *)v3 + 37) )
    v5 = **((_QWORD **)v3 + 19) + 88LL;
  v6 = *(_QWORD *)(v5 + 8);
  v57 = 0;
  v55 = 0;
  v54 = 0;
  v56 = 0;
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 72);
    if ( v7 && (unsigned int)UserIsWindowOnDesktopAndComposed(v7, v2) )
    {
      if ( *((_DWORD *)v3 + 37) )
      {
        if ( (*(_DWORD *)v6 & 0x20) == 0 )
        {
          v8 = *(_QWORD *)(v6 + 8);
          v9 = 0;
          v10 = *(_DWORD *)(v8 + 20);
          if ( v10 )
          {
            while ( (**(_DWORD **)(v8 + 8LL * v9 + 24) & 0x20) == 0 )
            {
              if ( ++v9 >= v10 )
                goto LABEL_14;
            }
            v6 = *(_QWORD *)(v8 + 8LL * v9 + 24);
          }
        }
      }
LABEL_14:
      DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*(HWND *)(v6 + 72), v2, v3, 0);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v67);
      v68 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v67, DwmSpriteObj);
      v13 = v68;
      if ( v68 )
      {
        v14 = *(__int64 **)(v6 + 16);
        v15 = *((_QWORD *)v68 + 21);
        v4 = 1;
        v62 = (struct SFMLOGICALSURFACE *)v15;
        v16 = *v14;
        *((_DWORD *)v68 + 14) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v16 + 2584);
        *((_DWORD *)v13 + 15) = *(_DWORD *)(v16 + 2588) + *(_DWORD *)(v6 + 116);
        *((_DWORD *)v13 + 16) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v16 + 2584);
        *((_DWORD *)v13 + 17) = *(_DWORD *)(v16 + 2588) + *(_DWORD *)(v6 + 116);
        *((_QWORD *)v13 + 9) = *(_QWORD *)(v6 + 224);
        *((_DWORD *)v13 + 20) = *(_DWORD *)(v6 + 232);
        if ( (*(_DWORD *)v6 & 1) != 0
          || (*(_DWORD *)v6 & 0x10) != 0
          || *(_DWORD *)(v6 + 80) >= *(_DWORD *)(v6 + 88)
          || (v17 = 1, *(_DWORD *)(v6 + 84) >= *(_DWORD *)(v6 + 92)) )
        {
          v17 = 0;
        }
        *((_DWORD *)v13 + 41) = v17 | *((_DWORD *)v13 + 41) & 0xFFFFFFFE;
        v18 = *(_QWORD *)(v6 + 128);
        if ( !v18 )
          goto LABEL_36;
        *((_DWORD *)v13 + 16) += *(_DWORD *)(v18 + 32);
        *((_DWORD *)v13 + 17) += *(_DWORD *)(*(_QWORD *)(v6 + 128) + 36LL);
        v19 = *(_QWORD *)(v6 + 240);
        if ( v19 )
        {
          LOBYTE(v12) = 5;
          v20 = HmgReferenceCheckLock(v19, v12, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, v3, (struct _SURFOBJ *)(v20 + 24));
          *(_DWORD *)(v15 + 252) |= 1u;
          *(_DWORD *)(v15 + 252) ^= ((unsigned __int8)*(_DWORD *)(v15 + 252) ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
          goto LABEL_36;
        }
        SpCreateSurface((SURFREF *)v69, (__int64)v3, (_DWORD *)(*(_QWORD *)(v6 + 128) + 32LL));
        v22 = v70;
        if ( v70 )
        {
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, v3, (struct _SURFOBJ *)(v70 + 24));
          v23 = *(struct _SURFOBJ **)(v15 + 184);
          v66[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v66, v23);
          if ( v66[0] )
          {
            v24 = *(_QWORD *)(v6 + 128);
            v72 = 0LL;
            v73 = *(_DWORD *)(v24 + 32);
            v25 = *(_DWORD *)(v24 + 36);
            v59 = 0LL;
            v26 = *(_QWORD *)(v15 + 184);
            v74 = v25;
            if ( (*(_DWORD *)(v26 + 88) & 0x400) != 0 )
              v27 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v3 + 355);
            else
              v27 = EngCopyBits;
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v61) )
              v27 = RedirCopyBits;
            HwndProcess = UserGetHwndProcess(*((_QWORD *)v13 + 5));
            SURFACE::vAppContainerOwner((SURFACE *)(v26 - 24), HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v27)(
              *(_QWORD *)(v15 + 184),
              *(_QWORD *)(v6 + 128),
              0LL,
              0LL,
              &v72,
              &v59);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v66);
          v22 = v70;
        }
        else
        {
          v4 = 0;
        }
        if ( v22 )
          DEC_SHARE_REF_CNT(v22, v21);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v69);
        if ( v4 )
        {
LABEL_36:
          memset(v71, 0, 0x88uLL);
          v53 = 39168;
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v64, (struct DWMSPRITE *)((char *)v13 + 88));
          UserGetMiniWinInfo(*((_QWORD *)v13 + 5), (struct tagMINIWINDOWINFO *)v71, &v53);
          v29 = *(_DWORD *)(v15 + 252) & 0xC;
          v30 = v29 | *((_DWORD *)v13 + 41) & 1 | (2
                                                 * (*(_DWORD *)(v15 + 252) & 1 | *((_DWORD *)v13 + 41) & 0x40 | (4 * (*((_DWORD *)v13 + 41) & 0xE))));
          v31 = (void *)UserReferenceDwmApiPort(v29);
          if ( (int)DwmAsyncCreateSprite(v31, v30, (__int64)v71, v53) < 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 1;
            if ( *(_QWORD *)(v15 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72)) )
            {
              *(_DWORD *)(v15 + 252) |= 8u;
              SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v15, v3, gpSfmState);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v15,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v56,
                &v55,
                &v54,
                0LL,
                0LL);
              v32 = *(_DWORD *)(v15 + 252);
              v33 = *((_DWORD *)v13 + 41);
              v34 = *((_QWORD *)v13 + 13);
              *((_QWORD *)v13 + 13) = 0LL;
              v35 = *(_QWORD *)v15;
              v36 = *(_QWORD *)v13;
              v37 = v32 & 1;
              v38 = v32 & 0xC | v33 & 1 | (2 * (v37 | v33 & 0x40 | (4 * (v33 & 0xE))));
              v39 = *((_DWORD *)v13 + 29) >= 1;
              v40 = (void *)UserReferenceDwmApiPort(v37);
              updated = DwmAsyncUpdateSprite(v40, v36, v35, v38, (__int64)v13 + 72, v71, v56, v55, v54, v39, v34);
              v42 = v62;
              v4 = updated >= 0;
              *((_DWORD *)v62 + 63) &= ~8u;
              if ( updated >= 0 )
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v63, (struct SFMLOGICALSURFACE *)((char *)v42 + 256));
                v75.right = *((_DWORD *)v13 + 16) - *((_DWORD *)v13 + 14);
                v75.bottom = *((_DWORD *)v13 + 17) - *((_DWORD *)v13 + 15);
                *(_QWORD *)&v75.left = 0LL;
                vSpUpdateDirtyRgn(v13, v42, 0LL, (struct _RECTL *)&v75, &v57, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v63);
                v43 = *((_QWORD *)v42 + 23);
                if ( v43 )
                  v44 = *(_QWORD *)(v43 + 8);
                else
                  v44 = 0LL;
                v4 = bSpDwmNotifyDirty(*(HSPRITE *)v13, v42, v57, v44);
              }
              v3 = (HDEV)v60;
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v64);
        }
        v13 = v68;
      }
      else
      {
        v4 = 0;
      }
      v6 = *(_QWORD *)(v6 + 24);
      if ( v13 )
        _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
      v68 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v67);
      v2 = v65;
      goto LABEL_53;
    }
    v6 = *(_QWORD *)(v6 + 24);
LABEL_53:
    if ( !v4 )
      break;
  }
  if ( v4 )
  {
    if ( *((_DWORD *)v3 + 37) )
    {
      v45 = (_QWORD *)*((_QWORD *)v3 + 20);
      if ( v45 )
      {
        do
        {
          v46 = (_QWORD *)v45[1];
          if ( *v45 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v45, v2) )
          {
            GdiHintSpriteShape(v3, (HWND)*v45, 0LL, 0, 0);
            GdiDeleteSprite(v3, (HWND)*v45, v45);
          }
          v45 = v46;
        }
        while ( v46 );
      }
    }
    else
    {
      v47 = *((_QWORD *)v3 + 12);
      if ( v47 )
      {
        do
        {
          v48 = *(_QWORD *)(v47 + 72);
          v49 = *(_QWORD *)(v47 + 24);
          if ( v48 && (unsigned int)UserIsWindowOnDesktopAndComposed(v48, v2) )
          {
            if ( *(_QWORD *)(v47 + 240) )
              GdiHintSpriteShape(v3, *(HWND *)(v47 + 72), 0LL, 0, 0);
            GdiDeleteSprite(v3, *(HWND *)(v47 + 72), (void *)v47);
          }
          v47 = v49;
        }
        while ( v49 );
      }
    }
  }
  else
  {
    v50 = (struct DwmState *)*((_QWORD *)g_pDwmState + 10);
    while ( v50 != (struct DwmState *)((char *)g_pDwmState + 80) )
    {
      v51 = ((unsigned __int64)v50 - 24) & -(__int64)(v50 != 0LL);
      v50 = *(struct DwmState **)(v51 + 0x18);
      GreDeleteSprite(v3, 0LL, *(void **)v51, 1);
    }
  }
  LEAVE_GRE_DWM_CRIT((__int64)v3, v58);
  return v4;
}
