/*
 * XREFs of GreTransferSpriteStateToDwmState @ 0x1C00597AC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 * Callees:
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C000B35C (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserGetMiniWinInfo @ 0x1C00179A4 (UserGetMiniWinInfo.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C001C570 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C001D3D8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C005AC34 (UserIsWindowOnDesktopAndComposed.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0078BB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C007A73C (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C007A88C (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B180 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007C9F4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA2C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00AD880 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00B0400 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C8A3C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     GreDeleteSprite @ 0x1C00C8F74 (GreDeleteSprite.c)
 *     DwmAsyncCreateSprite @ 0x1C00CCB9C (DwmAsyncCreateSprite.c)
 *     DwmAsyncUpdateSprite @ 0x1C00D5BA0 (DwmAsyncUpdateSprite.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00D92B0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     UserGetHwndProcess @ 0x1C0134CC8 (UserGetHwndProcess.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0134CF0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0134FB0 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall GreTransferSpriteStateToDwmState(HDEV a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  int v3; // ebx
  HDEV v5; // r12
  int *v6; // r12
  Gre::Base *v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  HSPRITE DwmSpriteObj; // rbx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  struct _SURFOBJ *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // eax
  BOOL (__stdcall *v30)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rsi
  struct _EPROCESS *HwndProcess; // rax
  __int64 v32; // rcx
  int v33; // ebx
  void *v34; // rax
  __int64 v35; // rdx
  Gre::Base *v36; // rcx
  struct Gre::Base::SESSION_GLOBALS *v37; // rax
  int v38; // r9d
  int v39; // edx
  __int64 v40; // r15
  int v41; // r14d
  void *v42; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v44; // rdi
  struct DWMSPRITE *v45; // rbx
  __int64 v46; // r9
  unsigned __int64 v47; // r9
  struct Gre::Base::SESSION_GLOBALS *v48; // r14
  unsigned int v49; // esi
  _QWORD *v50; // rcx
  _QWORD *v51; // rdi
  __int64 v52; // r8
  _QWORD *v53; // rdi
  _QWORD *v54; // rbx
  __int64 v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rbx
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v60; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v61; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v63; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v64; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  struct SFMLOGICALSURFACE *v66; // [rsp+80h] [rbp-80h]
  struct DWMSPRITE *v67; // [rsp+88h] [rbp-78h]
  HDEV v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+98h] [rbp-68h]
  _BYTE v70[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v71[8]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v72; // [rsp+B0h] [rbp-50h]
  _QWORD v73[2]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v74[32]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v75; // [rsp+E8h] [rbp-18h]
  _BYTE v76[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v77; // [rsp+110h] [rbp+10h]
  __int64 v78[18]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v79; // [rsp+1B0h] [rbp+B0h] BYREF
  int v80; // [rsp+1B8h] [rbp+B8h]
  int v81; // [rsp+1BCh] [rbp+BCh]
  struct tagRECT v82; // [rsp+1C0h] [rbp+C0h] BYREF

  v2 = a2;
  v72 = a2;
  v68 = a1;
  v3 = 1;
  v64 = 0;
  ENTER_GRE_DWM_CRIT(a1, &v64);
  v5 = a1 + 20;
  if ( *((_DWORD *)a1 + 35) )
    v5 = (HDEV)(**((_QWORD **)a1 + 18) + 80LL);
  v6 = (int *)*((_QWORD *)v5 + 1);
  v63 = 0;
  v61 = 0;
  v60 = 0;
  v62 = 0;
  while ( v6 )
  {
    v7 = (Gre::Base *)*((_QWORD *)v6 + 9);
    if ( v7 && (unsigned int)UserIsWindowOnDesktopAndComposed(v7, v2) )
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( (*v6 & 0x20) == 0 )
        {
          v8 = *((_QWORD *)v6 + 1);
          v9 = 0;
          v10 = *(_DWORD *)(v8 + 20);
          if ( v10 )
          {
            while ( (**(_DWORD **)(v8 + 8LL * v9 + 24) & 0x20) == 0 )
            {
              if ( ++v9 >= v10 )
                goto LABEL_14;
            }
            v6 = *(int **)(v8 + 8LL * v9 + 24);
          }
        }
      }
LABEL_14:
      DwmSpriteObj = hspCreateDwmSpriteObj(*((HWND *)v6 + 9), v2, a1, 0);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v74);
      v75 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v74, DwmSpriteObj);
      v13 = v75;
      v67 = (struct DWMSPRITE *)v75;
      if ( v75 )
      {
        v14 = (__int64 *)*((_QWORD *)v6 + 2);
        v3 = 1;
        v15 = *(_QWORD *)(v75 + 144);
        v66 = (struct SFMLOGICALSURFACE *)v15;
        v16 = *v14;
        *(_DWORD *)(v75 + 56) = v6[28] + *(_DWORD *)(v16 + 2560);
        *(_DWORD *)(v13 + 60) = *(_DWORD *)(v16 + 2564) + v6[29];
        v17 = v6[28] + *(_DWORD *)(v16 + 2560);
        *(_DWORD *)(v13 + 64) = v17;
        v18 = *(_DWORD *)(v16 + 2564) + v6[29];
        *(_DWORD *)(v13 + 68) = v18;
        *(_QWORD *)(v13 + 72) = *((_QWORD *)v6 + 28);
        *(_DWORD *)(v13 + 80) = v6[58];
        v19 = *v6;
        v69 = v13 + 72;
        if ( (v19 & 1) != 0 || (v19 & 0x10) != 0 || v6[20] >= v6[22] || (v20 = 1, v6[21] >= v6[23]) )
          v20 = 0;
        *(_DWORD *)(v13 + 140) = v20 | *(_DWORD *)(v13 + 140) & 0xFFFFFFFE;
        v21 = *((_QWORD *)v6 + 16);
        if ( !v21 )
          goto LABEL_36;
        *(_DWORD *)(v13 + 64) = v17 + *(_DWORD *)(v21 + 32);
        *(_DWORD *)(v13 + 68) = v18 + *(_DWORD *)(*((_QWORD *)v6 + 16) + 36LL);
        v22 = *((_QWORD *)v6 + 30);
        if ( v22 )
        {
          LOBYTE(v12) = 5;
          v23 = HmgReferenceCheckLock(v22, v12, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, a1, (struct _SURFOBJ *)(v23 + 24));
          v24 = *(_DWORD *)(v15 + 252) | 1;
          *(_DWORD *)(v15 + 252) = v24;
          *(_DWORD *)(v15 + 252) = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)((unsigned int)*v6 >> 1)) & 0x40;
          goto LABEL_36;
        }
        SpCreateSurface(v76, a1, *((_QWORD *)v6 + 16) + 32LL);
        v25 = v77;
        if ( v77 )
        {
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, a1, (struct _SURFOBJ *)(v77 + 24));
          v26 = *(struct _SURFOBJ **)(v15 + 184);
          v73[0] = 0LL;
          SURFREFVIEW::bMap((SURFREFVIEW *)v73, v26);
          if ( v73[0] )
          {
            v79 = 0LL;
            v27 = *((_QWORD *)v6 + 16);
            v28 = *(_QWORD *)(v15 + 184);
            v80 = *(_DWORD *)(v27 + 32);
            v29 = *(_DWORD *)(v27 + 36);
            v65 = 0LL;
            v81 = v29;
            if ( (*(_DWORD *)(v28 + 88) & 0x400) != 0 )
              v30 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)a1 + 352);
            else
              v30 = EngCopyBits;
            if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v68) )
              v30 = RedirCopyBits;
            HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*(_QWORD *)(v13 + 40));
            SURFACE::vAppContainerOwner((SURFACE *)(v28 - 24), HwndProcess);
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *, __int64 *))v30)(
              *(_QWORD *)(v15 + 184),
              *((_QWORD *)v6 + 16),
              0LL,
              0LL,
              &v79,
              &v65);
          }
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v73);
          v25 = v77;
        }
        else
        {
          v3 = 0;
        }
        if ( v25 )
          DEC_SHARE_REF_CNT(v25);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v76);
        if ( v3 )
        {
LABEL_36:
          memset_0(v78, 0, 0x88uLL);
          v59 = 39168;
          PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v71, (struct _EX_PUSH_LOCK *)(v13 + 88));
          UserGetMiniWinInfo(*(_QWORD *)(v13 + 40), (struct tagMINIWINDOWINFO *)v78, &v59);
          v32 = *(_DWORD *)(v13 + 140) & 1;
          v33 = v32 | *(_DWORD *)(v15 + 252) & 0xC | (2
                                                    * (*(_DWORD *)(v15 + 252) & 1 | *(_DWORD *)(v13 + 140) & 0x40 | (4 * (*(_DWORD *)(v13 + 140) & 0xE))));
          v34 = (void *)UserReferenceDwmApiPort(v32);
          if ( (int)DwmAsyncCreateSprite(v34, v33, (__int64)v78, v59) < 0 )
          {
            v3 = 0;
          }
          else
          {
            v3 = 1;
            if ( *(_QWORD *)(v15 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*((_QWORD *)v6 + 9), v35) )
            {
              *(_DWORD *)(v15 + 252) |= 8u;
              v37 = Gre::Base::Globals(v36);
              SFMLOGICALSURFACE::StartSfmStateTracking(
                (SFMLOGICALSURFACE *)v15,
                a1,
                *((struct SfmState **)v37 + 809),
                v38);
              SFMLOGICALSURFACE::GetRedirectionInfo(
                (SFMLOGICALSURFACE *)v15,
                (enum _HLSURF_REDIRECTIONSTYLE *)&v62,
                &v61,
                &v60,
                0LL,
                0LL);
              v39 = *(_DWORD *)(v15 + 252);
              v40 = *(_QWORD *)(v13 + 104);
              *(_QWORD *)(v13 + 104) = 0LL;
              v41 = *(_DWORD *)(v13 + 116);
              v42 = (void *)UserReferenceDwmApiPort(v39 & 1);
              updated = DwmAsyncUpdateSprite(v42, v69, (__int64)v78, v62, v61, v60, v41 >= 1, v40);
              v44 = v66;
              v3 = updated >= 0;
              *((_DWORD *)v66 + 63) &= ~8u;
              if ( updated >= 0 )
              {
                PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v70, (struct SFMLOGICALSURFACE *)((char *)v44 + 256));
                v45 = v67;
                *(_QWORD *)&v82.left = 0LL;
                v82.right = *((_DWORD *)v67 + 16) - *((_DWORD *)v67 + 14);
                v82.bottom = *((_DWORD *)v67 + 17) - *((_DWORD *)v67 + 15);
                vSpUpdateDirtyRgn(v67, v44, 0LL, &v82, &v63, 0);
                PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v70);
                v46 = *((_QWORD *)v44 + 23);
                if ( v46 )
                  v47 = *(_QWORD *)(v46 + 8);
                else
                  v47 = 0LL;
                v3 = bSpDwmNotifyDirty(*(HSPRITE *)v45, v44, v63, v47);
              }
            }
          }
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v71);
        }
        v13 = v75;
      }
      else
      {
        v3 = 0;
      }
      v6 = (int *)*((_QWORD *)v6 + 3);
      if ( v13 )
        _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
      v75 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v74);
      v2 = v72;
      goto LABEL_52;
    }
    v6 = (int *)*((_QWORD *)v6 + 3);
LABEL_52:
    if ( !v3 )
    {
      v48 = Gre::Base::Globals(v7);
      v49 = 0;
      v50 = (_QWORD *)(*((_QWORD *)v48 + 38) + 80LL);
      v51 = (_QWORD *)*v50;
      if ( (_QWORD *)*v50 != v50 )
      {
        do
        {
          v52 = (unsigned __int64)(v51 - 3) & -(__int64)(v51 != 0LL);
          v51 = *(_QWORD **)(v52 + 0x18);
          GreDeleteSprite(a1, 0LL, *(void **)v52, 1);
        }
        while ( v51 != (_QWORD *)(*((_QWORD *)v48 + 38) + 80LL) );
      }
      goto LABEL_70;
    }
  }
  v49 = v3;
  if ( *((_DWORD *)a1 + 35) )
  {
    v53 = (_QWORD *)*((_QWORD *)a1 + 19);
    if ( v53 )
    {
      do
      {
        v54 = (_QWORD *)v53[1];
        if ( *v53 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v53, v2) )
        {
          GdiHintSpriteShape(a1, (HWND)*v53, 0LL, 0, 0);
          GdiDeleteSprite((Gre::Base *)a1, (HWND)*v53, v53);
        }
        v53 = v54;
      }
      while ( v54 );
    }
  }
  else
  {
    v55 = *((_QWORD *)a1 + 11);
    if ( v55 )
    {
      do
      {
        v56 = *(_QWORD *)(v55 + 72);
        v57 = *(_QWORD *)(v55 + 24);
        if ( v56 && (unsigned int)UserIsWindowOnDesktopAndComposed(v56, v2) )
        {
          if ( *(_QWORD *)(v55 + 240) )
            GdiHintSpriteShape(a1, *(HWND *)(v55 + 72), 0LL, 0, 0);
          GdiDeleteSprite((Gre::Base *)a1, *(HWND *)(v55 + 72), (void *)v55);
        }
        v55 = v57;
      }
      while ( v57 );
    }
  }
LABEL_70:
  LEAVE_GRE_DWM_CRIT(a1, v64);
  return v49;
}
