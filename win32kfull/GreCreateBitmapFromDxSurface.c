/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C0013394
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C0013360 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C02C48F0 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C007C5E0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreDwmUseDeviceBitmaps @ 0x1C007CA44 (GreDwmUseDeviceBitmaps.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
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
  __int64 v10; // r14
  __int64 v11; // rbx
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // r15
  Gre::Base *v14; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v20; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v21[8]; // [rsp+90h] [rbp-49h] BYREF
  _QWORD v22[2]; // [rsp+98h] [rbp-41h] BYREF
  __int128 v23; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-21h]
  int v25; // [rsp+C0h] [rbp-19h]
  _QWORD v26[2]; // [rsp+C8h] [rbp-11h] BYREF
  __int16 v27; // [rsp+D8h] [rbp-1h]
  __int64 v28; // [rsp+E0h] [rbp+7h]
  __int64 v29; // [rsp+E8h] [rbp+Fh]
  char v30; // [rsp+130h] [rbp+57h] BYREF

  v10 = 0LL;
  if ( !a2 || !a3 || a3 * (unsigned __int64)a2 > 0xFFFFFFFF || !a1 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( !v22[0]
    || *(_DWORD *)(v22[0] + 32LL) == 1
    || (v11 = *(_QWORD *)(v22[0] + 48LL), (*(_DWORD *)(v11 + 40) & 0x8000) != 0) )
  {
    DCOBJ::~DCOBJ((DCOBJ *)v22);
    return 0LL;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v21, (struct XDCOBJ *)v22);
  v13 = Gre::Base::Globals(v12);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v13 + 9));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v13 + 9));
  v15 = *(_DWORD *)(v11 + 40);
  v23 = 0LL;
  v26[1] = 0LL;
  v27 = 256;
  v29 = 0LL;
  v28 = 0LL;
  v26[0] = 0LL;
  v25 = 1;
  if ( (v15 & 1) != 0 )
  {
    Gre::Base::Globals(v14);
    *(_QWORD *)&v23 = *(_QWORD *)(v11 + 48);
    v24 = v11;
    GreAcquireSemaphore(v23);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v23, 11LL);
  }
  if ( (unsigned int)GreDwmUseDeviceBitmaps() )
  {
    v16 = 0LL;
    if ( (*(_DWORD *)(v11 + 2140) & 0x100) == 0 )
      v16 = **(_QWORD **)(v11 + 1776);
    CreateCompatibleSurface(
      &v20,
      *(_QWORD *)(v22[0] + 48LL),
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
    v18 = v20;
    if ( v20 )
    {
      LOBYTE(v17) = 5;
      HmgSetOwner(*(_QWORD *)(v20 + 32), 2147483650LL, v17);
      v10 = *(_QWORD *)(v18 + 32);
      DEC_SHARE_REF_CNT(v18);
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v23);
  if ( v26[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v26);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v13 + 9));
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v21);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
  if ( v22[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  return v10;
}
