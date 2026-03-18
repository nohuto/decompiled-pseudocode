/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C0268210
 * Callers:
 *     xxxPrintWindow @ 0x1C01BCFE4 (xxxPrintWindow.c)
 * Callees:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00081A8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C007AC00 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00F3FD0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

_BOOL8 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, HDC a2, float a3, int a4, int a5, int a6, int a7)
{
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rcx
  int v16; // eax
  HSURF v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  BOOL updated; // ebx
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+60h] [rbp-A8h] BYREF
  int v24[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v25[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v27[32]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v28[2]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v29[64]; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v30; // [rsp+118h] [rbp+10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v25, a2);
  if ( !v25[0] )
    goto LABEL_5;
  *(_QWORD *)&v30.left = *(_QWORD *)(v25[0] + 8LL * (*(_DWORD *)(v25[0] + 40LL) & 1) + 1016);
  v30.bottom = v30.top + a7;
  v30.right = v30.left + a6;
  ERECTL::vOrder((ERECTL *)&v30);
  v10 = Gre::Base::Globals(v9);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v23, *((HSEMAPHORE *)v10 + 10));
  v22 = *((_QWORD *)v10 + 15);
  GreAcquireSemaphore(v22);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v28);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v27, (struct XDCOBJ *)v25, 0);
  if ( (v27[24] & 1) == 0 )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v27);
LABEL_4:
    SEMOBJ::vUnlock((SEMOBJ *)&v22);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v23);
LABEL_5:
    DCOBJ::~DCOBJ((DCOBJ *)v25);
    return 0LL;
  }
  v15 = *(_QWORD *)(v25[0] + 496LL);
  if ( !v15 )
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v27, v11, v12, v13);
    if ( v28[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v28);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v29);
    goto LABEL_4;
  }
  v16 = *(_DWORD *)(v15 + 56);
  v17 = *(HSURF *)(v15 + 32);
  v24[0] = 0;
  v24[1] = 0;
  v24[2] = v16;
  v24[3] = *(_DWORD *)(v15 + 60);
  ERECTL::operator*=(&v30.left, v24);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v27, v18, v19, v20);
  if ( v28[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v28);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v29);
  SEMOBJ::vUnlock((SEMOBJ *)&v22);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v23);
  if ( IsRectEmptyInl(&v30) || KeAreApcsDisabled() )
    goto LABEL_5;
  updated = bSpDwmUpdateSurface(a1, 0LL, (struct XDCOBJ *)v25, v17, a3, a4, a5, (struct ERECTL *)&v30, 0LL);
  if ( v25[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v25);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v26);
  return updated;
}
