/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C00140E4
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C00140B0 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C02C20E0 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0057ED0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x1C0058454 (GreDwmUseDeviceBitmaps.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateBitmapFromDxSurface(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // r14
  __int64 v11; // rbx
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // r15
  Gre::Base *v14; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // r8
  _BYTE v19[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v20[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v21[40]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v22; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-30h]
  int v24; // [rsp+D8h] [rbp-28h]
  _QWORD v25[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v26[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v27; // [rsp+118h] [rbp+18h]
  __int64 v28; // [rsp+120h] [rbp+20h]
  _BYTE v29[32]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v30; // [rsp+150h] [rbp+50h]
  char v31; // [rsp+198h] [rbp+98h] BYREF

  v7 = 0LL;
  if ( !a2 || !a3 || a3 * (unsigned __int64)a2 > 0xFFFFFFFF || !a1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( !v20[0]
    || *(_DWORD *)(v20[0] + 32LL) == 1
    || (v11 = *(_QWORD *)(v20[0] + 48LL), (*(_DWORD *)(v11 + 40) & 0x8000) != 0) )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return 0LL;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v31);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v19, (struct XDCOBJ *)v20);
  v13 = Gre::Base::Globals(v12);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v13 + 9));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v13 + 9));
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v25);
  v28 = 0LL;
  v27 = 0LL;
  v25[0] = 0LL;
  v15 = *(_DWORD *)(v11 + 40);
  v22 = 0LL;
  v24 = 1;
  if ( (v15 & 1) != 0 )
  {
    Gre::Base::Globals(v14);
    *(_QWORD *)&v22 = *(_QWORD *)(v11 + 48);
    v23 = v11;
    GreAcquireSemaphore(v22);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v22, 11LL);
  }
  if ( (unsigned int)GreDwmUseDeviceBitmaps() )
  {
    v16 = 0LL;
    if ( (*(_DWORD *)(v11 + 2140) & 0x100) == 0 )
      v16 = **(_QWORD **)(v11 + 1776);
    CreateCompatibleSurface(
      v29,
      *(_QWORD *)(v20[0] + 48LL),
      *(unsigned int *)(v11 + 2076),
      v16,
      a2,
      a3,
      1,
      0,
      0,
      0,
      1,
      a6,
      0,
      a4,
      a5,
      a7);
    if ( v30 )
    {
      LOBYTE(v17) = 5;
      HmgSetOwner(*(_QWORD *)(v30 + 32), 2147483650LL, v17);
      v7 = *(_QWORD *)(v30 + 32);
      if ( v30 )
        DEC_SHARE_REF_CNT(v30);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v29);
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
  if ( v25[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v25);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v13 + 9));
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v19);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v31);
  if ( v20[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v20);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v21);
  return v7;
}
