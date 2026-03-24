/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026D53C
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C02779C0 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0016760 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0016788 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C002A998 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     GreCreateSprite @ 0x1C003874C (GreCreateSprite.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E8E0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BD784 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00BD7CC (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE140 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     GreUpdateSprite @ 0x1C00BE800 (GreUpdateSprite.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00EC030 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     GreDeleteSprite @ 0x1C00EF0D8 (GreDeleteSprite.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C01378E8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0169EC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // r12
  void **v5; // r15
  int v6; // ebx
  HSPRITE v7; // rsi
  __int64 DisplayDC; // r14
  __int64 v10; // rdi
  HDEV HDEV; // r13
  struct PDEVOBJ *v12; // rdx
  int v13; // eax
  HSPRITE v14; // rax
  struct DWMSPRITE *v15; // r12
  struct SFMLOGICALSURFACE *v16; // r15
  struct _SURFOBJ *v17; // rdx
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v19; // edi
  DYNAMICMODECHANGESHARELOCK *v20; // rcx
  _BYTE v21[4]; // [rsp+80h] [rbp-1A8h] BYREF
  _BYTE v22[4]; // [rsp+84h] [rbp-1A4h] BYREF
  struct tagSIZE v23; // [rsp+88h] [rbp-1A0h] BYREF
  HDC *v24; // [rsp+90h] [rbp-198h]
  __int64 v25; // [rsp+98h] [rbp-190h] BYREF
  unsigned int v26; // [rsp+A0h] [rbp-188h]
  void **v27; // [rsp+A8h] [rbp-180h]
  HDEV v28; // [rsp+B0h] [rbp-178h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-170h] BYREF
  struct SFMLOGICALSURFACE *v30; // [rsp+C0h] [rbp-168h] BYREF
  _QWORD v31[2]; // [rsp+C8h] [rbp-160h] BYREF
  __int128 v32; // [rsp+D8h] [rbp-150h] BYREF
  __int64 v33; // [rsp+E8h] [rbp-140h]
  _BYTE v34[32]; // [rsp+F0h] [rbp-138h] BYREF
  struct DWMSPRITE *v35; // [rsp+110h] [rbp-118h]
  _QWORD v36[7]; // [rsp+118h] [rbp-110h] BYREF
  _BYTE v37[112]; // [rsp+150h] [rbp-D8h] BYREF
  struct tagRECT v38; // [rsp+1C0h] [rbp-68h] BYREF
  _QWORD v39[2]; // [rsp+1D0h] [rbp-58h] BYREF

  v4 = a4;
  v24 = a4;
  v5 = a3;
  v27 = a3;
  v26 = a2;
  v6 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  v7 = 0LL;
  DisplayDC = 0LL;
  if ( !v36[0] )
    goto LABEL_2;
  v10 = *(_QWORD *)(v36[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v21);
  v29 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  HDEV = (HDEV)UserGetHDEV();
  v28 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v22, v12, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v37, (struct PDEVOBJ *)&v28);
  if ( HDEV && ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !g_pDwmState )
    {
      v6 = -1073741637;
LABEL_26:
      if ( v7 )
      {
        GreDeleteSprite(HDEV, 0LL, v7, 1);
        v7 = 0LL;
      }
      if ( DisplayDC )
      {
        GreDeleteDC(DisplayDC);
        DisplayDC = 0LL;
      }
      goto LABEL_30;
    }
    v25 = v10;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v10 + 40);
      if ( (v13 & 0x400) == 0 && (v13 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v25) )
        {
          v38.left = *(_DWORD *)(v10 + 2584);
          v38.top = *(_DWORD *)(v10 + 2588);
          v38.right = v38.left + *(_DWORD *)(*(_QWORD *)(v10 + 2592) + 172LL);
          v38.bottom = v38.top + *(_DWORD *)(*(_QWORD *)(v10 + 2592) + 176LL);
          v14 = (HSPRITE)GreCreateSprite(HDEV, 0LL, &v38, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0LL);
          v7 = v14;
          if ( v14 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v34, 0LL, v14);
            v15 = v35;
            if ( v35 )
            {
              v30 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v35 + 21);
              v16 = v30;
              vSpDwmUpdateSpriteVisibility(v35, 0);
              v23 = *(struct tagSIZE *)(*(_QWORD *)(v10 + 2592) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, v15, v16, &v23, &v30) )
              {
                v17 = (struct _SURFOBJ *)*((_QWORD *)v16 + 23);
                v31[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v31, v17);
                v39[0] = 0LL;
                v39[1] = v23;
                v25 = 0LL;
                v32 = 0LL;
                v33 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v28) )
                {
                  v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v16 + 23) + 88LL) & 1) != 0 )
                {
                  v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)HDEV + 354);
                }
                else
                {
                  v18 = EngBitBlt;
                }
                v19 = v26;
                LODWORD(v32) = v26 & 0xFFFFFF;
                LODWORD(v33) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, __int64 *, _QWORD, __int128 *, _QWORD, int))v18)(
                  *((_QWORD *)v16 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v39,
                  &v25,
                  0LL,
                  &v32,
                  0LL,
                  61680);
                GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v19, 0LL, 0x20400001u, &v38, 0LL, 1, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
                if ( DisplayDC )
                {
                  *(_DWORD *)(*((_QWORD *)v16 + 23) + 88LL) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v16 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v31);
              }
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v34);
              v5 = v27;
            }
            else
            {
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v34);
            }
            v4 = v24;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_26;
LABEL_30:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v37);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *v5 = v7;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = (HDC)DisplayDC;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v22);
  SEMOBJ::vUnlock((SEMOBJ *)&v29);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v20);
LABEL_2:
  DCOBJ::~DCOBJ((DCOBJ *)v36);
  return (unsigned int)v6;
}
