/*
 * XREFs of GreTransferDwmStateToSpriteState @ 0x1C0097BB8
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0097998 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C00B2FD8 (zzzComposeDesktop.c)
 * Callees:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00807CC (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00826BC (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z @ 0x1C00829B0 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QEAAPEAVSURFACE@@PEAUHLSURF__@@H@Z.c)
 *     ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C0086D14 (-ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z.c)
 *     ?LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z @ 0x1C0089970 (-LEAVE_GRE_DWM_CRIT@@YAXVPDEVOBJ@@H@Z.c)
 *     GreDeleteSprite @ 0x1C00B3D48 (GreDeleteSprite.c)
 *     DwmAsyncDestroySprite @ 0x1C00B4008 (DwmAsyncDestroySprite.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C00B53EC (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C00B5D20 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00B5F68 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00ED388 (UserIsWindowOnDesktopAndComposed.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C00EDCCC (UserIsWindowWithNoRedirectionBitmap.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C010DA34 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z @ 0x1C027FFB0 (-vFixupMetaSpriteList@@YAXAEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreTransferDwmStateToSpriteState(HDEV a1, __int64 a2)
{
  unsigned int v3; // r13d
  HDC v4; // r12
  HDC DisplayDC; // r15
  HDC v6; // rbx
  HDC v7; // r10
  __int64 v8; // r14
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  HLSURF v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned int v18; // r9d
  __int64 v19; // r13
  int v20; // ecx
  HWND v21; // rdx
  LONG v22; // eax
  int v23; // ecx
  void *v24; // rax
  int v25; // [rsp+6Ch] [rbp-25h] BYREF
  struct tagSIZE v26; // [rsp+70h] [rbp-21h] BYREF
  struct tagPOINT v27; // [rsp+78h] [rbp-19h] BYREF
  struct SURFACE *v28; // [rsp+80h] [rbp-11h]
  struct tagSIZE v29; // [rsp+88h] [rbp-9h] BYREF
  struct tagPOINT v30; // [rsp+90h] [rbp-1h] BYREF
  HDC v31; // [rsp+98h] [rbp+7h]
  HDC v32; // [rsp+A0h] [rbp+Fh]
  __int64 v33; // [rsp+A8h] [rbp+17h]
  __int64 v34; // [rsp+B0h] [rbp+1Fh]
  struct tagPOINT v35; // [rsp+B8h] [rbp+27h] BYREF
  HDEV v36; // [rsp+C0h] [rbp+2Fh] BYREF

  v33 = a2;
  v25 = 0;
  v34 = 0LL;
  v36 = a1;
  v3 = 1;
  ENTER_GRE_DWM_CRIT((__int64)a1, &v25);
  if ( !g_pDwmState )
    goto LABEL_7;
  v4 = 0LL;
  v28 = 0LL;
  DisplayDC = 0LL;
  v6 = *(HDC *)(gpDispInfo + 56LL);
  v7 = (HDC)ghdcMem;
  v8 = *((_QWORD *)g_pDwmState + 10);
  v32 = v6;
  v31 = (HDC)ghdcMem;
  if ( (struct DwmState *)v8 == (struct DwmState *)((char *)g_pDwmState + 80) )
    goto LABEL_3;
  do
  {
    v10 = v8 - 24;
    v11 = -v8;
    v12 = v10 & -(__int64)(v11 != 0);
    v13 = *(_QWORD *)(v12 + 0x90);
    if ( (*(_DWORD *)(v12 + 0x48) & 0x400000) != 0 )
    {
      v8 = *(_QWORD *)((v10 & -(__int64)(v11 != 0)) + 0x18);
      GreDeleteSprite(a1, 0LL, *(HSPRITE *)v12, 1);
      continue;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)((v10 & -(__int64)(v11 != 0)) + 0x28), v33) )
    {
      v8 = *(_QWORD *)(v12 + 24);
      continue;
    }
    if ( GdiCreateSprite(a1, *(HWND *)(v12 + 40), (struct tagRECT *)(v12 + 56)) )
    {
      v16 = *(_QWORD *)(v13 + 184);
      v3 = 1;
      if ( v16 )
      {
        v28 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v13, v14);
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v13, a1, 0LL);
LABEL_19:
        v17 = *(_QWORD *)(v12 + 72) - v34;
        if ( !v17 )
          v17 = *(unsigned int *)(v12 + 80) - (unsigned __int64)(unsigned int)v34;
        if ( !v17 )
        {
          *(_DWORD *)(v12 + 72) = 4;
          *(_DWORD *)(v12 + 76) = 16711680;
        }
        if ( v16 )
        {
          v18 = *(_DWORD *)(v13 + 252);
          if ( (v18 & 1) != 0 )
          {
            GdiHintSpriteShape(a1, *(HWND *)(v12 + 40), *(HBITMAP *)(v16 + 8), (v18 >> 6) & 1, 1);
            GdiUpdateSprite(
              a1,
              *(HWND *)(v12 + 40),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v12 + 80),
              (struct _BLENDFUNCTION *)(v12 + 76),
              *(_DWORD *)(v12 + 72) | 0x20000000,
              0LL);
          }
          else
          {
            v27 = 0LL;
            v35 = 0LL;
            v26 = 0LL;
            if ( !DisplayDC )
            {
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
              if ( !DisplayDC )
                DisplayDC = v32;
            }
            if ( v4 || (v4 = (HDC)GreCreateDisplayDC(a1, 1LL)) != 0LL || (v4 = v31) != 0LL )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v28 + 28) |= 0x4000000u;
                v19 = GreSelectBitmap(v4, *(_QWORD *)(v16 + 8));
                if ( v19 )
                {
                  v20 = *(_DWORD *)(v12 + 72);
                  v21 = *(HWND *)(v12 + 40);
                  v27 = *(struct tagPOINT *)(v12 + 56);
                  v26 = *(struct tagSIZE *)(v16 + 32);
                  GdiUpdateSprite(
                    a1,
                    v21,
                    0LL,
                    DisplayDC,
                    &v27,
                    &v26,
                    v4,
                    &v35,
                    *(_DWORD *)(v12 + 80),
                    (struct _BLENDFUNCTION *)(v12 + 76),
                    v20 | 0x20000000,
                    0LL);
                  GreSelectBitmap(v4, v19);
                }
                v3 = 1;
              }
            }
          }
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v13, v28);
        }
        else
        {
          v22 = *(_DWORD *)(v12 + 56);
          v23 = *(_DWORD *)(v12 + 72);
          v29 = 0LL;
          v30.x = v22;
          v30.y = *(_DWORD *)(v12 + 60);
          GdiUpdateSprite(
            a1,
            *(HWND *)(v12 + 40),
            0LL,
            0LL,
            &v30,
            &v29,
            0LL,
            0LL,
            *(_DWORD *)(v12 + 80),
            (struct _BLENDFUNCTION *)(v12 + 76),
            v23 | 0x20000000,
            0LL);
        }
        goto LABEL_39;
      }
      if ( (unsigned int)UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v12 + 40)) )
        goto LABEL_19;
    }
    else
    {
      v3 = 0;
    }
LABEL_39:
    v8 = *(_QWORD *)(v12 + 24);
    v24 = (void *)UserReferenceDwmApiPort(v15);
    DwmAsyncDestroySprite(v24);
    vspDestroyDwmSpriteObjInternal(a1, 0LL, (struct DWMSPRITE *)v12);
  }
  while ( (struct DwmState *)v8 != (struct DwmState *)((char *)g_pDwmState + 80) );
  v7 = v31;
  v6 = v32;
LABEL_3:
  if ( ((_DWORD)a1[10] & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v36);
  if ( v4 && v4 != v7 )
    GreDeleteDC(v4);
  if ( DisplayDC && DisplayDC != v6 )
    GreDeleteDC(DisplayDC);
LABEL_7:
  LEAVE_GRE_DWM_CRIT((__int64)a1, v25);
  return v3;
}
