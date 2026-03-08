/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0268520
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0272A30 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F5A0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     GreDeleteSprite @ 0x1C0024368 (GreDeleteSprite.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0027A0C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0028198 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00284A4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     GreCreateSprite @ 0x1C0028A54 (GreCreateSprite.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002D7C8 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     GreUpdateSprite @ 0x1C002F030 (GreUpdateSprite.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C007F064 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01288C4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C012F70C (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // rbx
  int v6; // r15d
  HSPRITE v7; // rdi
  HDC v8; // rsi
  __int64 v10; // r14
  Gre::Base *v11; // rcx
  __int64 v12; // rcx
  HDEV HDEV; // r13
  struct PDEVOBJ *v14; // rdx
  Gre::Base *v15; // rcx
  int v16; // eax
  struct tagMINIWINDOWINFO *v17; // r9
  HSPRITE v18; // rax
  __int64 v19; // r8
  volatile signed __int32 *v20; // rbx
  struct SFMLOGICALSURFACE *v21; // rsi
  struct _SURFOBJ *v22; // rdx
  BOOL (__stdcall *v23)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v24; // r14d
  __int64 DisplayDC; // rcx
  struct Gre::Base::SESSION_GLOBALS *v26; // r14
  _BYTE v27[4]; // [rsp+80h] [rbp-158h] BYREF
  _BYTE v28[4]; // [rsp+84h] [rbp-154h] BYREF
  __int64 v29; // [rsp+88h] [rbp-150h]
  HDC *v30; // [rsp+90h] [rbp-148h]
  struct tagSIZE v31; // [rsp+98h] [rbp-140h] BYREF
  HSPRITE v32; // [rsp+A0h] [rbp-138h]
  unsigned int v33; // [rsp+A8h] [rbp-130h]
  struct Gre::Base::SESSION_GLOBALS *v34; // [rsp+B0h] [rbp-128h]
  HDEV v35; // [rsp+B8h] [rbp-120h] BYREF
  _DWORD v36[2]; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-110h] BYREF
  _QWORD v38[2]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-F8h] BYREF
  struct DWMSPRITE *v40; // [rsp+E8h] [rbp-F0h] BYREF
  struct SFMLOGICALSURFACE *v41; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD v42[2]; // [rsp+F8h] [rbp-E0h] BYREF
  __int128 v43; // [rsp+108h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+118h] [rbp-C0h]
  _BYTE v45[80]; // [rsp+120h] [rbp-B8h] BYREF
  struct tagRECT v46; // [rsp+170h] [rbp-68h] BYREF
  _DWORD v47[2]; // [rsp+180h] [rbp-58h] BYREF
  struct tagSIZE v48; // [rsp+188h] [rbp-50h]

  v4 = a4;
  v30 = a4;
  v33 = a2;
  v6 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v7 = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  if ( !v38[0] )
    goto LABEL_2;
  v10 = *(_QWORD *)(v38[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v27);
  v34 = Gre::Base::Globals(v11);
  v37 = *((_QWORD *)v34 + 15);
  GreAcquireSemaphore(v37);
  HDEV = (HDEV)UserGetHDEV(v12);
  v35 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v28, v14, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v34 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v34 + 9), 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v45, (struct PDEVOBJ *)&v35);
  if ( HDEV && ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !IsDwmActive(v15) )
    {
      v6 = -1073741637;
LABEL_25:
      if ( v7 )
      {
        GreDeleteSprite((Gre::Base *)HDEV, 0LL, v7, 1);
        v7 = 0LL;
      }
      if ( v8 )
      {
        GreDeleteDC(v8);
        v8 = 0LL;
      }
      goto LABEL_29;
    }
    v39 = v10;
    if ( v10 )
    {
      v16 = *(_DWORD *)(v10 + 40);
      if ( (v16 & 0x400) == 0 && (v16 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v39) )
        {
          v46.left = *(_DWORD *)(v10 + 2560);
          v46.top = *(_DWORD *)(v10 + 2564);
          v46.right = v46.left + *(_DWORD *)(*(_QWORD *)(v10 + 2568) + 172LL);
          v46.bottom = v46.top + *(_DWORD *)(*(_QWORD *)(v10 + 2568) + 176LL);
          v18 = (HSPRITE)GreCreateSprite(
                           (Gre::Base *)HDEV,
                           0LL,
                           &v46,
                           v17,
                           0x9900u,
                           1,
                           (int)v17,
                           (int)v17,
                           (int)v17,
                           (int)v17,
                           (unsigned __int16 *)v17);
          v7 = v18;
          v32 = v18;
          if ( v18 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v40, 0LL, v18);
            v20 = (volatile signed __int32 *)v40;
            if ( v40 )
            {
              v41 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v40 + 18);
              v21 = v41;
              vSpDwmUpdateSpriteVisibility(v40, 0LL, v19);
              v31 = *(struct tagSIZE *)(*(_QWORD *)(v10 + 2568) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, (struct DWMSPRITE *)v20, v21, &v31, &v41) )
              {
                v22 = (struct _SURFOBJ *)*((_QWORD *)v21 + 23);
                v42[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v42, v22);
                v47[0] = 0;
                v47[1] = 0;
                v48 = v31;
                v36[0] = 0;
                v36[1] = 0;
                v43 = 0LL;
                v44 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v35) )
                {
                  v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v21 + 23) + 88LL) & 1) != 0 )
                {
                  v23 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)HDEV + 351);
                }
                else
                {
                  v23 = EngBitBlt;
                }
                v24 = v33;
                LODWORD(v43) = v33 & 0xFFFFFF;
                LODWORD(v44) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _DWORD *, _QWORD, __int128 *, _QWORD, int))v23)(
                  *((_QWORD *)v21 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v47,
                  v36,
                  0LL,
                  &v43,
                  0LL,
                  61680);
                GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v24, 0LL, 0x20400001u, &v46, 0LL, 1, 0, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
                v29 = DisplayDC;
                if ( DisplayDC )
                {
                  *(_DWORD *)(*((_QWORD *)v21 + 23) + 88LL) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v21 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v42);
              }
              _InterlockedDecrement(v20 + 3);
              v8 = (HDC)v29;
              v7 = v32;
            }
            v4 = v30;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_25;
LABEL_29:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v45);
  v26 = v34;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v26 + 9));
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (void **)MmUserProbeAddress;
  *a3 = v7;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = v8;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v28);
  SEMOBJ::vUnlock((SEMOBJ *)&v37);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v27);
LABEL_2:
  DCOBJ::~DCOBJ((DCOBJ *)v38);
  return (unsigned int)v6;
}
