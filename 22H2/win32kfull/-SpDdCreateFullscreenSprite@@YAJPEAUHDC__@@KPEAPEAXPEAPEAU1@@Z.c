/*
 * XREFs of ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0265A70
 * Callers:
 *     NtGdiDdCreateFullscreenSprite @ 0x1C0270010 (NtGdiDdCreateFullscreenSprite.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C005AD50 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C006DC80 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007C9F4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00C899C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     GreDeleteSprite @ 0x1C00C8F74 (GreDeleteSprite.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     GreCreateSprite @ 0x1C00CD35C (GreCreateSprite.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     GreUpdateSprite @ 0x1C00D5F08 (GreUpdateSprite.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DWMSPRITEREF@@QEAA@XZ @ 0x1C01312C8 (--1DWMSPRITEREF@@QEAA@XZ.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0134444 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C013E544 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpDdCreateFullscreenSprite(HDC a1, unsigned int a2, void **a3, HDC *a4)
{
  HDC *v4; // r12
  void **v5; // r15
  int v6; // ebx
  HSPRITE v7; // r14
  __int64 DisplayDC; // rsi
  __int64 v10; // rdi
  Gre::Base *v11; // rcx
  __int64 v12; // rcx
  HDEV HDEV; // r13
  struct PDEVOBJ *v14; // rdx
  Gre::Base *v15; // rcx
  int v16; // eax
  HSPRITE v17; // rax
  struct DWMSPRITE *v18; // r12
  struct SFMLOGICALSURFACE *v19; // r15
  struct _SURFOBJ *v20; // rdx
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r10
  unsigned int v22; // edi
  struct Gre::Base::SESSION_GLOBALS *v23; // rdi
  _BYTE v24[4]; // [rsp+80h] [rbp-1A8h] BYREF
  _BYTE v25[4]; // [rsp+84h] [rbp-1A4h] BYREF
  struct tagSIZE v26; // [rsp+88h] [rbp-1A0h] BYREF
  HDC *v27; // [rsp+90h] [rbp-198h]
  __int64 v28; // [rsp+98h] [rbp-190h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp-188h]
  void **v30; // [rsp+A8h] [rbp-180h]
  struct Gre::Base::SESSION_GLOBALS *v31; // [rsp+B0h] [rbp-178h]
  HDEV v32; // [rsp+B8h] [rbp-170h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-168h] BYREF
  struct SFMLOGICALSURFACE *v34; // [rsp+C8h] [rbp-160h] BYREF
  _QWORD v35[2]; // [rsp+D0h] [rbp-158h] BYREF
  __int128 v36; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-138h]
  _BYTE v38[32]; // [rsp+F8h] [rbp-130h] BYREF
  struct DWMSPRITE *v39; // [rsp+118h] [rbp-110h]
  _QWORD v40[6]; // [rsp+120h] [rbp-108h] BYREF
  _BYTE v41[112]; // [rsp+150h] [rbp-D8h] BYREF
  struct tagRECT v42; // [rsp+1C0h] [rbp-68h] BYREF
  _QWORD v43[2]; // [rsp+1D0h] [rbp-58h] BYREF

  v4 = a4;
  v27 = a4;
  v5 = a3;
  v30 = a3;
  v29 = a2;
  v6 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v40, a1);
  v7 = 0LL;
  DisplayDC = 0LL;
  if ( !v40[0] )
    goto LABEL_2;
  v10 = *(_QWORD *)(v40[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
  v31 = Gre::Base::Globals(v11);
  v33 = *((_QWORD *)v31 + 15);
  GreAcquireSemaphore(v33);
  HDEV = (HDEV)UserGetHDEV(v12);
  v32 = HDEV;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v25, v14, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v31 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v31 + 9), 7LL);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v41, (struct PDEVOBJ *)&v32);
  if ( HDEV && ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    v6 = -1073741801;
    if ( !IsDwmActive(v15) )
    {
      v6 = -1073741637;
LABEL_26:
      if ( v7 )
      {
        GreDeleteSprite((Gre::Base *)HDEV, 0LL, v7, 1);
        v7 = 0LL;
      }
      if ( DisplayDC )
      {
        GreDeleteDC(DisplayDC);
        DisplayDC = 0LL;
      }
      goto LABEL_30;
    }
    v28 = v10;
    if ( v10 )
    {
      v16 = *(_DWORD *)(v10 + 40);
      if ( (v16 & 0x400) == 0 && (v16 & 0x20000) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v28) )
        {
          v42.left = *(_DWORD *)(v10 + 2560);
          v42.top = *(_DWORD *)(v10 + 2564);
          v42.right = v42.left + *(_DWORD *)(*(_QWORD *)(v10 + 2568) + 172LL);
          v42.bottom = v42.top + *(_DWORD *)(*(_QWORD *)(v10 + 2568) + 176LL);
          v17 = (HSPRITE)GreCreateSprite((Gre::Base *)HDEV, 0LL, &v42, 0LL, 0x9900u, 1, 0, 0, 0, 0, 0LL);
          v7 = v17;
          if ( v17 )
          {
            DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v38, 0LL, v17);
            v18 = v39;
            if ( v39 )
            {
              v34 = (struct SFMLOGICALSURFACE *)*((_QWORD *)v39 + 18);
              v19 = v34;
              vSpDwmUpdateSpriteVisibility(v39, 0);
              v26 = *(struct tagSIZE *)(*(_QWORD *)(v10 + 2568) + 172LL);
              if ( (unsigned int)bSpDwmCreateLogicalSurface(HDEV, v18, v19, &v26, &v34) )
              {
                v20 = (struct _SURFOBJ *)*((_QWORD *)v19 + 23);
                v35[0] = 0LL;
                SURFREFVIEW::bMap((SURFREFVIEW *)v35, v20);
                v43[0] = 0LL;
                v43[1] = v26;
                v28 = 0LL;
                v36 = 0LL;
                v37 = 0LL;
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v32) )
                {
                  v21 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))RedirBitBlt;
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v19 + 23) + 88LL) & 1) != 0 )
                {
                  v21 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)HDEV + 351);
                }
                else
                {
                  v21 = EngBitBlt;
                }
                v22 = v29;
                LODWORD(v36) = v29 & 0xFFFFFF;
                LODWORD(v37) = 0;
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, __int64 *, _QWORD, __int128 *, _QWORD, int))v21)(
                  *((_QWORD *)v19 + 23),
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v43,
                  &v28,
                  0LL,
                  &v36,
                  0LL,
                  61680);
                GreUpdateSprite(HDEV, 0LL, v7, 0LL, 0LL, 0LL, 0LL, 0LL, v22, 0LL, 0x20400001u, &v42, 0LL, 1, 0, 0);
                DisplayDC = GreCreateDisplayDC(HDEV, 1LL);
                if ( DisplayDC )
                {
                  *(_DWORD *)(*((_QWORD *)v19 + 23) + 88LL) |= 0x4000000u;
                  GreSelectBitmap(DisplayDC, *(_QWORD *)(*((_QWORD *)v19 + 23) + 8LL));
                  v6 = 0;
                }
                SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
              }
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v38);
              v5 = v30;
            }
            else
            {
              DWMSPRITEREF::~DWMSPRITEREF((DWMSPRITEREF *)v38);
            }
            v4 = v27;
          }
        }
      }
    }
  }
  if ( v6 < 0 )
    goto LABEL_26;
LABEL_30:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v41);
  v23 = v31;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v23 + 9));
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *v5 = v7;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (HDC *)MmUserProbeAddress;
  *v4 = (HDC)DisplayDC;
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v25);
  SEMOBJ::vUnlock((SEMOBJ *)&v33);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v24);
LABEL_2:
  DCOBJ::~DCOBJ((DCOBJ *)v40);
  return (unsigned int)v6;
}
