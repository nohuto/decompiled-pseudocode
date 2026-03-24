/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00BFB1C
 * Callers:
 *     GreCreateSprite @ 0x1C003874C (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00EB5DC (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C0012D00 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0015944 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0015E5C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BD784 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00BE06C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE140 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C00BE560 (DwmAsyncZorderSprite.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C00EDA60 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C0114940 (DwmAsyncCreateSprite.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0115830 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0131850 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0169E84 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

unsigned __int16 *__fastcall GreCreateSpriteInternal(
        HDEV a1,
        struct PDEVOBJ *a2,
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
  unsigned __int16 *v11; // r14
  __int64 v16; // rdx
  HSPRITE DwmSpriteObj; // rbx
  DWMSPRITE *v18; // rdi
  __int64 *v19; // rbx
  unsigned __int16 *v20; // rdx
  HSPRITE NeighborSprite; // r13
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  void *v25; // rax
  unsigned __int16 *v26; // rbx
  __int64 v27; // rcx
  void *v28; // rax
  __int64 v29; // r9
  struct DWMSPRITE *v30; // r8
  int v32; // [rsp+20h] [rbp-E0h]
  _BYTE v33[4]; // [rsp+44h] [rbp-BCh] BYREF
  struct PDEVOBJ *v34; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v35; // [rsp+50h] [rbp-B0h]
  HDEV v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h]
  _BYTE v39[32]; // [rsp+70h] [rbp-90h] BYREF
  DWMSPRITE *v40; // [rsp+90h] [rbp-70h]
  _BYTE v41[32]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-48h]
  _BYTE v43[144]; // [rsp+C0h] [rbp-40h] BYREF

  v11 = 0LL;
  v34 = a2;
  v36 = a1;
  v35 = a11;
  if ( !a6 || !g_pDwmState )
    return (unsigned __int16 *)GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v33, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v43, 0, 0x88uLL);
  if ( a4 )
    v16 = *((_QWORD *)a4 + 6);
  else
    v16 = gdwRitInputDesktopId;
  DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj((HWND)a2, v16, a1, a8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v39);
  v40 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v39, DwmSpriteObj);
  v18 = v40;
  if ( v40 )
  {
    *((_DWORD *)v40 + 29) = 0;
    v19 = (__int64 *)*((_QWORD *)v18 + 21);
    if ( a3 )
      *(struct tagRECT *)((char *)v18 + 56) = *a3;
    v20 = v35;
    *((_DWORD *)v18 + 41) = (2 * (a8 & 1)) | *((_DWORD *)v18 + 41) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v19 + 63) = (*((_DWORD *)v19 + 63) ^ (4 * a9)) & 4 ^ (*((_DWORD *)v19 + 63) & 0xFFFFFFEF | (16 * (a8 & 1)));
    *((_DWORD *)v18 + 41) ^= (*((_DWORD *)v18 + 41) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v18, v20);
    v35 = *(unsigned __int16 **)v18;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)v35, 0, 1);
    if ( !v34 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v43, (char *)v18 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v43;
    }
    if ( (*((_DWORD *)v19 + 63) & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v37);
      v22 = *v19;
      v19[10] = v37;
      EtwTraceLifetimeAccum(v22, 1LL);
      if ( v38 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
    }
    v23 = *((_DWORD *)v18 + 41) & 1;
    v24 = v23 | *((_DWORD *)v19 + 63) & 0xC | (2
                                             * (*((_DWORD *)v19 + 63) & 1 | *((_DWORD *)v18 + 41) & 0x40 | (4 * (*((_DWORD *)v18 + 41) & 0xE))));
    v25 = (void *)UserReferenceDwmApiPort(v23);
    v32 = v24;
    v26 = v35;
    if ( (int)DwmAsyncCreateSprite(v25, v32, (__int64)a4, a5) < 0 )
    {
      v30 = v40;
      if ( v40 )
        _InterlockedDecrement((volatile signed __int32 *)v40 + 3);
      v40 = 0LL;
      vspDestroyDwmSpriteObjInternal(v36, 0LL, v30);
    }
    else
    {
      if ( NeighborSprite && *((_QWORD *)g_pDwmState + 18) )
      {
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v41);
        v42 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v41, NeighborSprite);
        v28 = (void *)UserReferenceDwmApiPort(v27);
        DwmAsyncZorderSprite(v28, (__int64)v26, (__int64)NeighborSprite, v29);
        if ( v42 )
          _InterlockedDecrement((volatile signed __int32 *)(v42 + 12));
        v42 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v41);
      }
      v11 = v26;
      *((_DWORD *)v18 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    if ( v40 )
      _InterlockedDecrement((volatile signed __int32 *)v40 + 3);
  }
  v40 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v39);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v33);
  return v11;
}
