__int64 __fastcall GreTransferSpriteStateToDwmState(Gre::Base *a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // esi
  HDEV v4; // r15
  __int64 v5; // r13
  __int64 v6; // r13
  unsigned int v7; // edi
  __int64 v8; // rbx
  Gre::Base *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  HSPRITE DwmSpriteObj; // rax
  __int64 v14; // rdx
  struct DWMSPRITE *v15; // rdi
  __int64 *v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  BOOL v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // r8
  void *v27; // rax
  __int64 v28; // rdx
  Gre::Base *v29; // rcx
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  int v31; // r9d
  int v32; // edx
  __int64 v33; // r12
  int v34; // r15d
  __int64 v35; // r8
  void *v36; // rax
  int updated; // eax
  struct SFMLOGICALSURFACE *v38; // rbx
  __int64 v39; // r9
  __int64 v40; // r9
  __int64 v41; // r9
  unsigned int v42; // ecx
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rbx
  struct _SURFOBJ *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r14
  int v51; // eax
  BOOL (__stdcall *v52)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  bool v53; // zf
  int (*v54)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rax
  __int64 v55; // rcx
  struct _EPROCESS *HwndProcess; // rax
  struct Gre::Base::SESSION_GLOBALS *v57; // rax
  struct Gre::Base::SESSION_GLOBALS *v58; // r14
  _QWORD *v59; // rcx
  _QWORD *v60; // rbx
  __int64 v61; // r8
  _QWORD *v62; // rbx
  _QWORD *v63; // rsi
  int v64; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v65; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v66; // [rsp+68h] [rbp-98h] BYREF
  int v67; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v68; // [rsp+70h] [rbp-90h] BYREF
  int v69; // [rsp+74h] [rbp-8Ch] BYREF
  int (*v70)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // [rsp+78h] [rbp-88h]
  struct DWMSPRITE *v71; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v72[2]; // [rsp+88h] [rbp-78h] BYREF
  struct SFMLOGICALSURFACE *v73; // [rsp+90h] [rbp-70h]
  Gre::Base *v74; // [rsp+98h] [rbp-68h]
  __int64 v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h] BYREF
  Gre::Base *v77; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v78[8]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v79[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v80[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v81[9]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v82[4]; // [rsp+170h] [rbp+70h] BYREF
  struct tagRECT v83; // [rsp+180h] [rbp+80h] BYREF

  v2 = a2;
  v75 = a2;
  v74 = a1;
  v77 = a1;
  v69 = 0;
  v3 = 1;
  v4 = (HDEV)a1;
  ENTER_GRE_DWM_CRIT(a1, &v69);
  v5 = (__int64)(v4 + 20);
  if ( *((_DWORD *)v4 + 35) )
    v5 = **((_QWORD **)v4 + 18) + 80LL;
  v6 = *(_QWORD *)(v5 + 8);
  v68 = 0;
  v66 = 0;
  v65 = 0;
  v67 = 0;
  do
  {
    if ( !v6 )
    {
      v7 = v3;
      if ( *((_DWORD *)v4 + 35) )
      {
        v62 = (_QWORD *)*((_QWORD *)v4 + 19);
        if ( v62 )
        {
          do
          {
            v63 = (_QWORD *)v62[1];
            if ( *v62 && (unsigned int)UserIsWindowOnDesktopAndComposed(*v62, v2) )
            {
              GdiHintSpriteShape(v4, (HWND)*v62, 0LL, 0, 0);
              GdiDeleteSprite(v4, (HWND)*v62, v62);
            }
            v62 = v63;
          }
          while ( v63 );
        }
      }
      else
      {
        v8 = *((_QWORD *)v4 + 11);
        if ( v8 )
        {
          do
          {
            v11 = *(_QWORD *)(v8 + 72);
            v12 = *(_QWORD *)(v8 + 24);
            if ( v11 && (unsigned int)UserIsWindowOnDesktopAndComposed(v11, v2) )
            {
              if ( *(_QWORD *)(v8 + 240) )
                GdiHintSpriteShape(v4, *(HWND *)(v8 + 72), 0LL, 0, 0);
              GdiDeleteSprite(v4, *(HWND *)(v8 + 72), (void *)v8);
            }
            v8 = v12;
          }
          while ( v12 );
        }
      }
      goto LABEL_7;
    }
    v10 = *(Gre::Base **)(v6 + 72);
    if ( !v10 || !(unsigned int)UserIsWindowOnDesktopAndComposed(v10, v2) )
    {
      v6 = *(_QWORD *)(v6 + 24);
      continue;
    }
    if ( *((_DWORD *)v4 + 35) )
    {
      if ( (*(_DWORD *)v6 & 0x20) == 0 )
      {
        v41 = *(_QWORD *)(v6 + 8);
        v42 = 0;
        v43 = *(_DWORD *)(v41 + 20);
        if ( v43 )
        {
          while ( (**(_DWORD **)(v41 + 8LL * v42 + 24) & 0x20) == 0 )
          {
            if ( ++v42 >= v43 )
              goto LABEL_18;
          }
          v6 = *(_QWORD *)(v41 + 8LL * v42 + 24);
        }
      }
    }
LABEL_18:
    DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(*(Gre::Base **)(v6 + 72), v2, v4, 0);
    v71 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v71, DwmSpriteObj);
    v15 = v71;
    if ( v71 )
    {
      v16 = *(__int64 **)(v6 + 16);
      v3 = 1;
      v17 = *((_QWORD *)v71 + 18);
      v73 = (struct SFMLOGICALSURFACE *)v17;
      v18 = *v16;
      *((_DWORD *)v71 + 14) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v18 + 2560);
      *((_DWORD *)v15 + 15) = *(_DWORD *)(v18 + 2564) + *(_DWORD *)(v6 + 116);
      *((_DWORD *)v15 + 16) = *(_DWORD *)(v6 + 112) + *(_DWORD *)(v18 + 2560);
      *((_DWORD *)v15 + 17) = *(_DWORD *)(v18 + 2564) + *(_DWORD *)(v6 + 116);
      *((_QWORD *)v15 + 9) = *(_QWORD *)(v6 + 224);
      *((_DWORD *)v15 + 20) = *(_DWORD *)(v6 + 232);
      v19 = (*(_DWORD *)v6 & 1) == 0
         && (*(_DWORD *)v6 & 0x10) == 0
         && *(_DWORD *)(v6 + 80) < *(_DWORD *)(v6 + 88)
         && *(_DWORD *)(v6 + 84) < *(_DWORD *)(v6 + 92);
      *((_DWORD *)v15 + 35) = v19 | *((_DWORD *)v15 + 35) & 0xFFFFFFFE;
      v20 = *(_QWORD *)(v6 + 128);
      if ( v20 )
      {
        *((_DWORD *)v15 + 16) += *(_DWORD *)(v20 + 32);
        *((_DWORD *)v15 + 17) += *(_DWORD *)(*(_QWORD *)(v6 + 128) + 36LL);
        v44 = *(_QWORD *)(v6 + 240);
        if ( v44 )
        {
          LOBYTE(v14) = 5;
          v45 = HmgReferenceCheckLock(v44, v14, 0LL);
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, v4, (struct _SURFOBJ *)(v45 + 24));
          v46 = *(_DWORD *)(v17 + 252) | 1;
          *(_DWORD *)(v17 + 252) = v46;
          *(_DWORD *)(v17 + 252) = v46 ^ ((unsigned __int8)v46 ^ (unsigned __int8)(*(_DWORD *)v6 >> 1)) & 0x40;
        }
        else
        {
          SpCreateSurface(&v76, v4, *(_QWORD *)(v6 + 128) + 32LL);
          v47 = v76;
          if ( v76 )
          {
            SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v17, v4, (struct _SURFOBJ *)(v76 + 24));
            v48 = *(struct _SURFOBJ **)(v17 + 184);
            v80[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v80, v48);
            if ( v80[0] )
            {
              v82[0] = 0;
              v82[1] = 0;
              v49 = *(_QWORD *)(v6 + 128);
              v50 = *(_QWORD *)(v17 + 184);
              v82[2] = *(_DWORD *)(v49 + 32);
              v51 = *(_DWORD *)(v49 + 36);
              v72[0] = 0;
              v72[1] = 0;
              v82[3] = v51;
              if ( (*(_DWORD *)(v50 + 88) & 0x400) != 0 )
                v52 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v4 + 352);
              else
                v52 = EngCopyBits;
              v70 = v52;
              v53 = (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v77) == 0;
              v54 = v70;
              if ( !v53 )
                v54 = RedirCopyBits;
              v55 = *((_QWORD *)v15 + 5);
              v70 = v54;
              HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(v55);
              SURFACE::vAppContainerOwner((SURFACE *)(v50 - 24), HwndProcess);
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD *))v70)(
                *(_QWORD *)(v17 + 184),
                *(_QWORD *)(v6 + 128),
                0LL,
                0LL,
                v82,
                v72);
            }
            SURFREFVIEW::bUnMap((SURFREFVIEW *)v80);
          }
          else
          {
            v3 = 0;
          }
          if ( v47 )
            DEC_SHARE_REF_CNT(v47);
          if ( !v3 )
            goto LABEL_33;
        }
      }
      memset_0(v81, 0, 0x88uLL);
      v64 = 39168;
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v79, (struct DWMSPRITE *)((char *)v15 + 88));
      UserGetMiniWinInfo(*((_QWORD *)v15 + 5), (struct tagMINIWINDOWINFO *)v81, &v64);
      v21 = *((_QWORD *)v15 + 5);
      v22 = *(_QWORD *)v15;
      v23 = *((_DWORD *)v15 + 35) & 1;
      v24 = *(_DWORD *)(v17 + 252) & 1;
      v25 = v23 | *(_DWORD *)(v17 + 252) & 0xC | (2
                                                * (v24 | *((_DWORD *)v15 + 35) & 0x40 | (4
                                                                                       * (*((_DWORD *)v15 + 35) & 0xE))));
      v27 = (void *)UserReferenceDwmApiPort(v23, v24, v26);
      if ( (int)DwmAsyncCreateSprite(v27, v22, v21, (__int128 *)((char *)v15 + 56), v25, v81, v64) < 0 )
      {
        v3 = 0;
      }
      else
      {
        v3 = 1;
        if ( *(_QWORD *)(v17 + 184) || (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v6 + 72), v28) )
        {
          *(_DWORD *)(v17 + 252) |= 8u;
          v30 = Gre::Base::Globals(v29);
          SFMLOGICALSURFACE::StartSfmStateTracking((SFMLOGICALSURFACE *)v17, v4, *((struct SfmState **)v30 + 809), v31);
          SFMLOGICALSURFACE::GetRedirectionInfo(
            (SFMLOGICALSURFACE *)v17,
            (enum _HLSURF_REDIRECTIONSTYLE *)&v67,
            &v66,
            &v65,
            0LL,
            0LL);
          v32 = *(_DWORD *)(v17 + 252);
          v33 = *((_QWORD *)v15 + 13);
          v34 = *((_DWORD *)v15 + 29);
          *((_QWORD *)v15 + 13) = 0LL;
          v36 = (void *)UserReferenceDwmApiPort(v32 & 1, v32 & 0xC, v35);
          updated = DwmAsyncUpdateSprite(v36, (__int64)v15 + 72, (__int64)v81, v67, v66, v65, v34 >= 1, v33);
          v38 = v73;
          v3 = updated >= 0;
          *((_DWORD *)v73 + 63) &= ~8u;
          if ( updated >= 0 )
          {
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v78, (struct SFMLOGICALSURFACE *)((char *)v38 + 256));
            v83.right = *((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 14);
            v83.bottom = *((_DWORD *)v15 + 17) - *((_DWORD *)v15 + 15);
            *(_QWORD *)&v83.left = 0LL;
            vSpUpdateDirtyRgn(v15, v38, 0LL, (const struct _RECTL *)&v83, &v68, 0);
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v78);
            v39 = *((_QWORD *)v38 + 23);
            if ( v39 )
              v40 = *(_QWORD *)(v39 + 8);
            else
              v40 = 0LL;
            v3 = bSpDwmNotifyDirty(*(HSPRITE *)v15, v38, v68, v40);
          }
          v4 = (HDEV)v74;
        }
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v79);
    }
    else
    {
      v3 = 0;
    }
LABEL_33:
    v6 = *(_QWORD *)(v6 + 24);
    v2 = v75;
    if ( v15 )
      _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
  }
  while ( v3 );
  v57 = Gre::Base::Globals(v10);
  v58 = v57;
  v7 = 0;
  v59 = (_QWORD *)(*((_QWORD *)v57 + 38) + 80LL);
  v60 = (_QWORD *)*v59;
  if ( (_QWORD *)*v59 != v59 )
  {
    do
    {
      v61 = (unsigned __int64)(v60 - 3) & -(__int64)(v60 != 0LL);
      v60 = *(_QWORD **)(v61 + 0x18);
      GreDeleteSprite((Gre::Base *)v4, 0LL, *(void **)v61, 1);
    }
    while ( v60 != (_QWORD *)(*((_QWORD *)v58 + 38) + 80LL) );
  }
LABEL_7:
  LEAVE_GRE_DWM_CRIT((Gre::Base *)v4, v69);
  return v7;
}
