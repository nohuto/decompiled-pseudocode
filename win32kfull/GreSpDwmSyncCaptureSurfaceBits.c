/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C026AB80
 * Callers:
 *     xxxPrintWindow @ 0x1C01BE184 (xxxPrintWindow.c)
 * Callees:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0008058 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0018890 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C001F240 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0083D50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0088198 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, HDC a2, float a3, int a4, int a5, int a6, int a7)
{
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // rbx
  __int64 v12; // rcx
  int v13; // eax
  HSURF v14; // rbx
  BOOL updated; // ebx
  _QWORD v16[2]; // [rsp+58h] [rbp-81h] BYREF
  __int64 v17; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v18[8]; // [rsp+70h] [rbp-69h] BYREF
  int v19[4]; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v20[32]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-31h] BYREF
  int v22; // [rsp+B0h] [rbp-29h]
  int v23; // [rsp+B4h] [rbp-25h]
  __int16 v24; // [rsp+B8h] [rbp-21h]
  struct tagRECT v25; // [rsp+D8h] [rbp-1h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v16, a2);
  if ( !v16[0] )
    goto LABEL_5;
  *(_QWORD *)&v25.left = *(_QWORD *)(v16[0] + 8LL * (*(_DWORD *)(v16[0] + 40LL) & 1) + 1016);
  v25.bottom = v25.top + a7;
  v25.right = v25.left + a6;
  ERECTL::vOrder((ERECTL *)&v25);
  v10 = Gre::Base::Globals(v9);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v18, *((HSEMAPHORE *)v10 + 10));
  v17 = *((_QWORD *)v10 + 15);
  GreAcquireSemaphore(v17);
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v24 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v16, 0);
  if ( (v20[24] & 1) == 0 )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
LABEL_4:
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v18);
LABEL_5:
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return 0LL;
  }
  v12 = *(_QWORD *)(v16[0] + 496LL);
  if ( !v12 )
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
    if ( v21 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v21);
    goto LABEL_4;
  }
  v13 = *(_DWORD *)(v12 + 56);
  v14 = *(HSURF *)(v12 + 32);
  v19[0] = 0;
  v19[1] = 0;
  v19[2] = v13;
  v19[3] = *(_DWORD *)(v12 + 60);
  ERECTL::operator*=(&v25.left, v19);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
  if ( v21 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v21);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v18);
  if ( IsRectEmptyInl(&v25) || KeAreApcsDisabled() )
    goto LABEL_5;
  updated = bSpDwmUpdateSurface(a1, 0LL, (struct XDCOBJ *)v16, v14, a3, a4, a5, (struct ERECTL *)&v25, 0LL);
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return updated;
}
