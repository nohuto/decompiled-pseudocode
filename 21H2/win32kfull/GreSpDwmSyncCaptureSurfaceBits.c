/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270200
 * Callers:
 *     xxxPrintWindow @ 0x1C01E82D0 (xxxPrintWindow.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00173F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C002DD04 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B157C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B79F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00B7A60 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

_BOOL8 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, HDC a2, float a3, int a4, int a5, int a6, int a7)
{
  BOOL updated; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rcx
  HSURF v15; // rdi
  int v16; // eax
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+70h] [rbp-98h]
  int v22; // [rsp+74h] [rbp-94h]
  _QWORD v23[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v24[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v25[32]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v26[2]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v27[64]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v28; // [rsp+118h] [rbp+10h] BYREF
  int v29; // [rsp+120h] [rbp+18h]
  int v30; // [rsp+124h] [rbp+1Ch]

  DCOBJ::DCOBJ((DCOBJ *)v23, a2);
  updated = 0;
  if ( v23[0] )
  {
    v10 = (__int64 *)(v23[0] + 1024LL);
    if ( (*(_DWORD *)(v23[0] + 40LL) & 1) == 0 )
      v10 = (__int64 *)(v23[0] + 1016LL);
    v11 = *v10;
    v12 = *v10 + a6;
    v13 = HIDWORD(*v10) + a7;
    v28 = v11;
    v30 = v13;
    v29 = v12;
    ERECTL::vOrder((ERECTL *)&v28);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v19, ghsemDynamicModeChange);
    v18 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v26);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v25, (struct XDCOBJ *)v23, 0);
    if ( (v25[24] & 1) != 0 && (v14 = *(_QWORD *)(v23[0] + 496LL)) != 0 )
    {
      v15 = *(HSURF *)(v14 + 32);
      v21 = *(_DWORD *)(v14 + 56);
      v16 = *(_DWORD *)(v14 + 60);
      v20 = 0LL;
      v22 = v16;
      ERECTL::operator*=((int *)&v28, (int *)&v20);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
      if ( v26[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v26);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v27);
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v19);
      if ( !ERECTL::bWrapped((ERECTL *)&v28) && !KeAreApcsDisabled() )
        updated = bSpDwmUpdateSurface(a1, 0LL, (struct XDCOBJ *)v23, v15, a3, a4, a5, (struct ERECTL *)&v28, 0LL);
    }
    else
    {
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
      if ( v26[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v26);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v27);
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v19);
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v23);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v24);
  return updated;
}
