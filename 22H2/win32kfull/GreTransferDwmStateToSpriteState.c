/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C00587CC
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C005861C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 * Callees:
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C000B35C (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C001C6FC (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C001D3D8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C001D4CC (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C005AC34 (UserIsWindowOnDesktopAndComposed.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0079E88 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C007A73C (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C007A88C (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B180 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C007B35C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C007B51C (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     DwmAsyncDestroySprite @ 0x1C00C88F8 (DwmAsyncDestroySprite.c)
 *     GreDeleteSprite @ 0x1C00C8F74 (GreDeleteSprite.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C027FE10 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(Gre::Base *a1, __int64 a2, HDC a3)
{
  unsigned int v4; // r15d
  Gre::Base *v5; // rcx
  struct SURFACE *v6; // r13
  HDC DisplayDC; // r12
  __int64 *v8; // rax
  __int64 v9; // r14
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbx
  HLSURF v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  unsigned int v20; // r9d
  HDC v21; // rax
  __int64 v22; // r13
  unsigned int v23; // eax
  HWND v24; // rdx
  LONG v25; // ecx
  HDC v26; // r14
  LONG v27; // eax
  int v28; // ecx
  HWND v29; // rdx
  void *v30; // rax
  int v31; // [rsp+50h] [rbp-49h]
  unsigned int v32; // [rsp+60h] [rbp-39h] BYREF
  struct tagSIZE v33; // [rsp+68h] [rbp-31h] BYREF
  struct tagPOINT v34; // [rsp+70h] [rbp-29h] BYREF
  HDC v35; // [rsp+78h] [rbp-21h]
  struct SURFACE *v36; // [rsp+80h] [rbp-19h]
  struct tagSIZE v37; // [rsp+88h] [rbp-11h] BYREF
  struct tagPOINT v38; // [rsp+90h] [rbp-9h] BYREF
  __int64 v39; // [rsp+98h] [rbp-1h]
  __int64 v40; // [rsp+A0h] [rbp+7h]
  struct tagPOINT v41; // [rsp+A8h] [rbp+Fh] BYREF
  struct Gre::Base::SESSION_GLOBALS *v42; // [rsp+B0h] [rbp+17h]
  Gre::Base *v43; // [rsp+B8h] [rbp+1Fh] BYREF

  v39 = a2;
  v32 = 0;
  v35 = a3;
  v40 = 0LL;
  v4 = 1;
  v43 = a1;
  ENTER_GRE_DWM_CRIT(a1, &v32);
  if ( !(unsigned int)IsDwmActive() )
    goto LABEL_8;
  v6 = 0LL;
  DisplayDC = 0LL;
  v36 = 0LL;
  v42 = Gre::Base::Globals(v5);
  v8 = (__int64 *)(*((_QWORD *)v42 + 38) + 80LL);
  v9 = *v8;
  while ( (__int64 *)v9 != v8 )
  {
    v11 = v9 - 24;
    v12 = -v9;
    v13 = v11 & -(__int64)(v12 != 0);
    v14 = *(_QWORD *)(v13 + 0x90);
    if ( (*(_DWORD *)(v13 + 0x48) & 0x400000) != 0 )
    {
      v9 = *(_QWORD *)((v11 & -(__int64)(v12 != 0)) + 0x18);
      GreDeleteSprite((HDEV)a1, 0LL, *(void **)v13, 1);
      goto LABEL_12;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)((v11 & -(__int64)(v12 != 0)) + 0x28), v39) )
    {
      v9 = *(_QWORD *)(v13 + 24);
      goto LABEL_12;
    }
    if ( GdiCreateSprite(a1, *(HWND *)(v13 + 40), (struct _RECTL *)(v13 + 56)) )
    {
      v18 = *(_QWORD *)(v14 + 184);
      v4 = 1;
      if ( v18 )
      {
        v36 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v14, v15, v17);
        v6 = v36;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v14, (HDEV)a1, 0LL);
LABEL_19:
        v19 = *(_QWORD *)(v13 + 72) - v40;
        if ( !v19 )
          v19 = *(unsigned int *)(v13 + 80) - (unsigned __int64)(unsigned int)v40;
        if ( !v19 )
        {
          *(_DWORD *)(v13 + 72) = 4;
          *(_DWORD *)(v13 + 76) = 16711680;
        }
        if ( v18 )
        {
          v20 = *(_DWORD *)(v14 + 252);
          if ( (v20 & 1) != 0 )
          {
            GdiHintSpriteShape((HDEV)a1, *(HWND *)(v13 + 40), *(HBITMAP *)(v18 + 8), (v20 >> 6) & 1, 1);
            GdiUpdateSprite(
              a1,
              *(HWND *)(v13 + 40),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v13 + 80),
              (struct _BLENDFUNCTION *)(v13 + 76),
              *(_DWORD *)(v13 + 72) | 0x20000000,
              0LL);
          }
          else
          {
            v34 = 0LL;
            v41 = 0LL;
            v33 = 0LL;
            if ( !DisplayDC )
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
            v21 = v35;
            if ( v35 )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v6 + 28) |= 0x4000000u;
                v22 = GreSelectBitmap(v21, *(_QWORD *)(v18 + 8));
                if ( v22 )
                {
                  v23 = *(_DWORD *)(v13 + 80);
                  v31 = *(_DWORD *)(v13 + 72) | 0x20000000;
                  v24 = *(HWND *)(v13 + 40);
                  v34 = *(struct tagPOINT *)(v13 + 56);
                  v33.cx = *(_DWORD *)(v18 + 32);
                  v25 = *(_DWORD *)(v18 + 36);
                  v26 = v35;
                  v33.cy = v25;
                  GdiUpdateSprite(
                    a1,
                    v24,
                    0LL,
                    DisplayDC,
                    (struct _POINTL *)&v34,
                    &v33,
                    v35,
                    (struct _POINTL *)&v41,
                    v23,
                    (struct _BLENDFUNCTION *)(v13 + 76),
                    v31,
                    0LL);
                  GreSelectBitmap(v26, v22);
                }
              }
            }
            v6 = v36;
          }
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v14, v6);
        }
        else
        {
          v27 = *(_DWORD *)(v13 + 56);
          v28 = *(_DWORD *)(v13 + 72);
          v37 = 0LL;
          v29 = *(HWND *)(v13 + 40);
          v38.x = v27;
          v38.y = *(_DWORD *)(v13 + 60);
          GdiUpdateSprite(
            a1,
            v29,
            0LL,
            0LL,
            (struct _POINTL *)&v38,
            &v37,
            0LL,
            0LL,
            *(_DWORD *)(v13 + 80),
            (struct _BLENDFUNCTION *)(v13 + 76),
            v28 | 0x20000000,
            0LL);
        }
        goto LABEL_36;
      }
      if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v13 + 40), (__int64)v15) )
        goto LABEL_19;
    }
    else
    {
      v4 = 0;
    }
LABEL_36:
    v9 = *(_QWORD *)(v13 + 24);
    v30 = (void *)UserReferenceDwmApiPort(v16);
    DwmAsyncDestroySprite(v30);
    vspDestroyDwmSpriteObjInternal((HDEV)a1, 0, (struct DWMSPRITE *)v13);
LABEL_12:
    v8 = (__int64 *)(*((_QWORD *)v42 + 38) + 80LL);
  }
  if ( (*((_DWORD *)a1 + 10) & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v43);
  if ( DisplayDC )
    GreDeleteDC(DisplayDC);
LABEL_8:
  LEAVE_GRE_DWM_CRIT(a1, v32);
  return v4;
}
