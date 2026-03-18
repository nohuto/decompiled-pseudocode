/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00CD42C
 * Callers:
 *     GreCreateSprite @ 0x1C00CD35C (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0133A6C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C001C6FC (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C007B35C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA2C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00A71EC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C8A3C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C00CCB14 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C00CCB9C (DwmAsyncCreateSprite.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     DwmAsyncZorderSprite @ 0x1C00D5098 (DwmAsyncZorderSprite.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0135688 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

struct SPRITE *__fastcall GreCreateSpriteInternal(
        Gre::Base *a1,
        HWND a2,
        struct _RECTL *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  HWND v13; // rdi
  Gre::Base *v14; // rbx
  Gre::Base *v15; // r14
  struct Gre::Base::SESSION_GLOBALS *v16; // r15
  struct PDEVOBJ *v17; // rdx
  __int64 v18; // rdx
  HSPRITE DwmSpriteObj; // rbx
  DWMSPRITE *v20; // rdi
  __int64 *v21; // rbx
  unsigned __int16 *v22; // rdx
  HSPRITE NeighborSprite; // r13
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  void *v27; // rax
  Gre::Base *v28; // rbx
  Gre::Base *v29; // rcx
  struct Gre::Base::SESSION_GLOBALS *v30; // rax
  __int64 v31; // rcx
  void *v32; // rax
  struct DWMSPRITE *v34; // r8
  int v35; // [rsp+20h] [rbp-E0h]
  int v36; // [rsp+40h] [rbp-C0h]
  _BYTE v37[4]; // [rsp+44h] [rbp-BCh] BYREF
  HDEV v38; // [rsp+48h] [rbp-B8h]
  HWND v39; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v40; // [rsp+58h] [rbp-A8h] BYREF
  Gre::Base *v41; // [rsp+60h] [rbp-A0h]
  _BYTE v42[32]; // [rsp+68h] [rbp-98h] BYREF
  DWMSPRITE *v43; // [rsp+88h] [rbp-78h]
  _BYTE v44[32]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h]
  _BYTE v46[144]; // [rsp+C0h] [rbp-40h] BYREF

  v40 = a11;
  v13 = a2;
  v39 = a2;
  v14 = a1;
  v38 = (HDEV)a1;
  v15 = 0LL;
  v36 = 1;
  v16 = Gre::Base::Globals(a1);
  if ( !a6 || !(unsigned int)IsDwmActive() )
    return GdiCreateSprite(v14, v13, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v37, v17, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v16 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v16 + 9), 7LL);
  if ( !(unsigned int)IsDwmActive() )
    goto LABEL_26;
  memset_0(v46, 0, 0x88uLL);
  v36 = 0;
  if ( a4 )
    v18 = *((_QWORD *)a4 + 6);
  else
    v18 = gdwRitInputDesktopId;
  DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj((Gre::Base *)v13, v18, (HDEV)v14, a8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v42);
  v43 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v42, DwmSpriteObj);
  v20 = v43;
  if ( v43 )
  {
    *((_DWORD *)v43 + 29) = 0;
    v21 = (__int64 *)*((_QWORD *)v20 + 18);
    if ( a3 )
      *(struct _RECTL *)((char *)v20 + 56) = *a3;
    v22 = v40;
    *((_DWORD *)v20 + 35) = (2 * (a8 & 1)) | *((_DWORD *)v20 + 35) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v21 + 63) = (*((_DWORD *)v21 + 63) ^ (4 * a9)) & 4 ^ (*((_DWORD *)v21 + 63) & 0xFFFFFFEF | (16 * (a8 & 1)));
    *((_DWORD *)v20 + 35) ^= (*((_DWORD *)v20 + 35) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v20, v22);
    v41 = *(Gre::Base **)v20;
    NeighborSprite = (HSPRITE)hspGetNeighborSprite(v41, 0, 1);
    if ( !v39 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v46, (char *)v20 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v46;
    }
    if ( (*((_DWORD *)v21 + 63) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v40);
      v24 = *v21;
      v21[10] = (__int64)v40;
      EtwTraceLifetimeAccum(v24, 1LL);
    }
    v25 = *((_DWORD *)v20 + 35) & 1;
    v26 = v25 | *((_DWORD *)v21 + 63) & 0xC | (2
                                             * (*((_DWORD *)v21 + 63) & 1 | *((_DWORD *)v20 + 35) & 0x40 | (4 * (*((_DWORD *)v20 + 35) & 0xE))));
    v27 = (void *)UserReferenceDwmApiPort(v25);
    v35 = v26;
    v28 = v41;
    if ( (int)DwmAsyncCreateSprite(v27, (__int64)v41, (__int64)v39, (__int128 *)&a3->left, v35, (__int128 *)a4, a5) < 0 )
    {
      v34 = v43;
      if ( v43 )
        _InterlockedDecrement((volatile signed __int32 *)v43 + 3);
      v14 = (Gre::Base *)v38;
      v43 = 0LL;
      vspDestroyDwmSpriteObjInternal(v38, 0LL, v34);
      v20 = v43;
      goto LABEL_23;
    }
    v30 = Gre::Base::Globals(v29);
    if ( NeighborSprite && *(_QWORD *)(*((_QWORD *)v30 + 38) + 144LL) )
    {
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v44);
      v45 = 0LL;
      DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v44, NeighborSprite);
      v32 = (void *)UserReferenceDwmApiPort(v31);
      DwmAsyncZorderSprite(v32);
      if ( v45 )
        _InterlockedDecrement((volatile signed __int32 *)(v45 + 12));
      v45 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v44);
    }
    v15 = v28;
    *((_DWORD *)v20 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v20 = v43;
  }
  v14 = (Gre::Base *)v38;
LABEL_23:
  if ( v20 )
    _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
  v43 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v42);
  v13 = v39;
LABEL_26:
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v37);
  if ( v36 )
    return GdiCreateSprite(v14, v13, a3);
  return v15;
}
