/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C002A9BC
 * Callers:
 *     GreCreateSprite @ 0x1C0028A54 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0127FDC (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C0027C48 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C0027CD0 (DwmAsyncCreateSprite.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0028198 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00284DC (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002968C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     DwmAsyncZorderSprite @ 0x1C002D414 (DwmAsyncZorderSprite.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002D7C8 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00D790C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00DDA98 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C010D158 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C012957C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

HSPRITE __fastcall GreCreateSpriteInternal(
        Gre::Base *a1,
        HWND a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  HWND v13; // r14
  HDEV v14; // rbx
  HSPRITE v15; // r15
  struct Gre::Base::SESSION_GLOBALS *v16; // r13
  struct PDEVOBJ *v17; // rdx
  __int64 v18; // rdx
  HSPRITE DwmSpriteObj; // rax
  DWMSPRITE *v20; // rdi
  __int64 *v21; // rbx
  int v22; // edx
  unsigned __int16 *v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  void *v26; // rax
  HSPRITE v27; // rsi
  Gre::Base *v28; // rcx
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  unsigned int CurrentProcessId; // eax
  void *v32; // rax
  struct DWMSPRITE *v33; // r8
  __int128 *v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+40h] [rbp-C0h]
  HWND v36; // [rsp+48h] [rbp-B8h] BYREF
  DWMSPRITE *v37; // [rsp+50h] [rbp-B0h] BYREF
  HSPRITE v38; // [rsp+58h] [rbp-A8h]
  char v39[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v40; // [rsp+68h] [rbp-98h] BYREF
  HDEV v41; // [rsp+70h] [rbp-90h]
  HSPRITE NeighborSprite; // [rsp+78h] [rbp-88h]
  _BYTE v43[144]; // [rsp+80h] [rbp-80h] BYREF

  v40 = a11;
  v13 = a2;
  v36 = a2;
  v14 = (HDEV)a1;
  v41 = (HDEV)a1;
  v15 = 0LL;
  LODWORD(v38) = a8;
  v35 = 1;
  v16 = Gre::Base::Globals(a1);
  if ( !a6 || !(unsigned int)IsDwmActive() )
    return (HSPRITE)GdiCreateSprite(v14, v13, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v39, v17, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v16 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v16 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    memset_0(v43, 0, 0x88uLL);
    v35 = 0;
    v18 = a4 ? *((_QWORD *)a4 + 6) : gdwRitInputDesktopId;
    DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj((Gre::Base *)v13, v18, v14, a8);
    v37 = 0LL;
    DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v37, DwmSpriteObj);
    v20 = v37;
    if ( v37 )
    {
      *((_DWORD *)v37 + 29) = 0;
      v21 = (__int64 *)*((_QWORD *)v20 + 18);
      if ( a3 )
        *(struct tagRECT *)((char *)v20 + 56) = *a3;
      v22 = (unsigned __int8)v38 & 1;
      *((_DWORD *)v20 + 35) = (2 * v22) | *((_DWORD *)v20 + 35) & 0xFFFFFFFC | (a7 != 0);
      *((_DWORD *)v21 + 63) = (*((_DWORD *)v21 + 63) ^ (4 * a9)) & 4 ^ (*((_DWORD *)v21 + 63) & 0xFFFFFFEF | (16 * v22));
      v23 = v40;
      *((_DWORD *)v20 + 35) ^= (*((_DWORD *)v20 + 35) ^ (8 * a10)) & 8;
      DWMSPRITE::vUpdateDpiScaling(v20, v23);
      v38 = *(HSPRITE *)v20;
      NeighborSprite = hspGetNeighborSprite(v38, 0, 1);
      if ( !v36 && !a4 )
      {
        vSpDwmGetMiniWinInfoForNonWindowSprite(v43, (char *)v20 + 56);
        a4 = (struct tagMINIWINDOWINFO *)v43;
      }
      if ( (*((_DWORD *)v21 + 63) & 4) != 0 )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
        v24 = *v21;
        v21[10] = (__int64)v40;
        EtwTraceLifetimeAccum(v24, 1LL);
      }
      v25 = *((_DWORD *)v20 + 35) & 1 | *((_DWORD *)v21 + 63) & 0xC | (2
                                                                     * (*((_DWORD *)v21 + 63) & 1 | *((_DWORD *)v20 + 35) & 0x40 | (4 * (*((_DWORD *)v20 + 35) & 0xE))));
      v26 = (void *)UserReferenceDwmApiPort();
      v13 = v36;
      v34 = (__int128 *)a4;
      v27 = v38;
      if ( (int)DwmAsyncCreateSprite(v26, (__int64)v38, (__int64)v36, (__int128 *)&a3->left, v25, v34, a5) < 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
        v33 = v20;
        v14 = v41;
        v20 = 0LL;
        v37 = 0LL;
        vspDestroyDwmSpriteObjInternal(v41, 0, v33);
      }
      else
      {
        v29 = Gre::Base::Globals(v28);
        if ( NeighborSprite )
        {
          if ( *(_QWORD *)(*((_QWORD *)v29 + 38) + 144LL) )
          {
            v36 = 0LL;
            DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v36, NeighborSprite);
            v32 = (void *)UserReferenceDwmApiPort();
            DwmAsyncZorderSprite(v32);
            if ( v36 )
            {
              _InterlockedDecrement((volatile signed __int32 *)v36 + 3);
              v20 = v37;
            }
          }
        }
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        v14 = v41;
        v15 = v27;
        *((_DWORD *)v20 + 28) = CurrentProcessId & 0xFFFFFFFC;
      }
      if ( v20 )
        _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v39);
  if ( v35 )
    return (HSPRITE)GdiCreateSprite(v14, v13, a3);
  return v15;
}
