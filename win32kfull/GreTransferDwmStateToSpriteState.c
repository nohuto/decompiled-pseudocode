__int64 __fastcall GreTransferDwmStateToSpriteState(Gre::Base *a1, __int64 a2, HDC a3)
{
  unsigned int v4; // r15d
  Gre::Base *v5; // rcx
  Gre::Base *v6; // rcx
  struct SURFACE *v7; // r13
  HDC DisplayDC; // r12
  __int64 *v9; // rax
  __int64 v10; // r14
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rbx
  HLSURF v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r14
  int IsWindowWithNoRedirectionBitmap; // eax
  unsigned __int64 v21; // rcx
  unsigned int v22; // r9d
  HDC v23; // rax
  __int64 v24; // r13
  unsigned int v25; // eax
  HWND v26; // rdx
  LONG v27; // ecx
  HDC v28; // r14
  LONG v29; // eax
  int v30; // ecx
  HWND v31; // rdx
  void *v32; // rbx
  void *v33; // rax
  int v34; // [rsp+50h] [rbp-49h]
  int v35; // [rsp+60h] [rbp-39h] BYREF
  struct tagSIZE v36; // [rsp+68h] [rbp-31h] BYREF
  struct tagPOINT v37; // [rsp+70h] [rbp-29h] BYREF
  HDC v38; // [rsp+78h] [rbp-21h]
  struct SURFACE *v39; // [rsp+80h] [rbp-19h]
  struct tagSIZE v40; // [rsp+88h] [rbp-11h] BYREF
  struct tagPOINT v41; // [rsp+90h] [rbp-9h] BYREF
  __int64 v42; // [rsp+98h] [rbp-1h]
  __int64 v43; // [rsp+A0h] [rbp+7h]
  struct tagPOINT v44; // [rsp+A8h] [rbp+Fh] BYREF
  struct Gre::Base::SESSION_GLOBALS *v45; // [rsp+B0h] [rbp+17h]
  Gre::Base *v46; // [rsp+B8h] [rbp+1Fh] BYREF

  v42 = a2;
  v35 = 0;
  v38 = a3;
  v43 = 0LL;
  v4 = 1;
  v46 = a1;
  ENTER_GRE_DWM_CRIT(a1, &v35);
  if ( !IsDwmActive(v5) )
    goto LABEL_8;
  v7 = 0LL;
  DisplayDC = 0LL;
  v39 = 0LL;
  v45 = Gre::Base::Globals(v6);
  v9 = (__int64 *)(*((_QWORD *)v45 + 38) + 80LL);
  v10 = *v9;
  while ( (__int64 *)v10 != v9 )
  {
    v12 = v10 - 24;
    v13 = -v10;
    v14 = v12 & -(__int64)(v13 != 0);
    v15 = *(_QWORD *)(v14 + 0x90);
    if ( (*(_DWORD *)(v14 + 0x48) & 0x400000) != 0 )
    {
      v10 = *(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x18);
      GreDeleteSprite(a1, 0LL, *(void **)v14, 1);
      goto LABEL_12;
    }
    if ( !(unsigned int)UserIsWindowOnDesktopAndComposed(*(_QWORD *)((v12 & -(__int64)(v13 != 0)) + 0x28), v42) )
    {
      v10 = *(_QWORD *)(v14 + 24);
      goto LABEL_12;
    }
    if ( GdiCreateSprite((HDEV)a1, *(HWND *)(v14 + 40), (struct tagRECT *)(v14 + 56)) )
    {
      v19 = *(_QWORD *)(v15 + 184);
      v4 = 1;
      if ( v19 )
      {
        v39 = SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)v15, v16, v18);
        v7 = v39;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, (HDEV)a1, 0LL);
LABEL_19:
        v21 = *(_QWORD *)(v14 + 72) - v43;
        if ( !v21 )
          v21 = *(unsigned int *)(v14 + 80) - (unsigned __int64)(unsigned int)v43;
        if ( !v21 )
        {
          *(_DWORD *)(v14 + 72) = 4;
          *(_DWORD *)(v14 + 76) = 16711680;
        }
        if ( v19 )
        {
          v22 = *(_DWORD *)(v15 + 252);
          if ( (v22 & 1) != 0 )
          {
            GdiHintSpriteShape((HDEV)a1, *(HWND *)(v14 + 40), *(HBITMAP *)(v19 + 8), (v22 >> 6) & 1, 1);
            GdiUpdateSprite(
              (HDEV)a1,
              *(HWND *)(v14 + 40),
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              *(_DWORD *)(v14 + 80),
              (struct _BLENDFUNCTION *)(v14 + 76),
              *(_DWORD *)(v14 + 72) | 0x20000000,
              0LL);
          }
          else
          {
            v37 = 0LL;
            v44 = 0LL;
            v36 = 0LL;
            if ( !DisplayDC )
              DisplayDC = (HDC)GreCreateDisplayDC(a1, 0LL);
            v23 = v38;
            if ( v38 )
            {
              if ( DisplayDC )
              {
                *((_DWORD *)v7 + 28) |= 0x4000000u;
                v24 = GreSelectBitmap(v23, *(_QWORD *)(v19 + 8));
                if ( v24 )
                {
                  v25 = *(_DWORD *)(v14 + 80);
                  v34 = *(_DWORD *)(v14 + 72) | 0x20000000;
                  v26 = *(HWND *)(v14 + 40);
                  v37 = *(struct tagPOINT *)(v14 + 56);
                  v36.cx = *(_DWORD *)(v19 + 32);
                  v27 = *(_DWORD *)(v19 + 36);
                  v28 = v38;
                  v36.cy = v27;
                  GdiUpdateSprite(
                    (HDEV)a1,
                    v26,
                    0LL,
                    DisplayDC,
                    &v37,
                    &v36,
                    v38,
                    &v44,
                    v25,
                    (struct _BLENDFUNCTION *)(v14 + 76),
                    v34,
                    0LL);
                  GreSelectBitmap(v28, v24);
                }
              }
            }
            v7 = v39;
          }
          SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)v15, v7);
        }
        else
        {
          v29 = *(_DWORD *)(v14 + 56);
          v30 = *(_DWORD *)(v14 + 72);
          v40 = 0LL;
          v31 = *(HWND *)(v14 + 40);
          v41.x = v29;
          v41.y = *(_DWORD *)(v14 + 60);
          GdiUpdateSprite(
            (HDEV)a1,
            v31,
            0LL,
            0LL,
            &v41,
            &v40,
            0LL,
            0LL,
            *(_DWORD *)(v14 + 80),
            (struct _BLENDFUNCTION *)(v14 + 76),
            v30 | 0x20000000,
            0LL);
        }
        goto LABEL_36;
      }
      IsWindowWithNoRedirectionBitmap = UserIsWindowWithNoRedirectionBitmap(*(_QWORD *)(v14 + 40), (__int64)v16);
      v18 = 0LL;
      if ( IsWindowWithNoRedirectionBitmap )
        goto LABEL_19;
    }
    else
    {
      v4 = 0;
    }
LABEL_36:
    v10 = *(_QWORD *)(v14 + 24);
    v32 = *(void **)v14;
    v33 = (void *)UserReferenceDwmApiPort(v17, v16, v18);
    DwmAsyncDestroySprite(v33, (__int64)v32);
    vspDestroyDwmSpriteObjInternal((HDEV)a1, 0, (struct DWMSPRITE *)v14);
LABEL_12:
    v9 = (__int64 *)(*((_QWORD *)v45 + 38) + 80LL);
  }
  if ( (*((_DWORD *)a1 + 10) & 0x20000) != 0 )
    vFixupMetaSpriteList((struct PDEVOBJ *)&v46);
  if ( DisplayDC )
    GreDeleteDC(DisplayDC);
LABEL_8:
  LEAVE_GRE_DWM_CRIT(a1, v35);
  return v4;
}
