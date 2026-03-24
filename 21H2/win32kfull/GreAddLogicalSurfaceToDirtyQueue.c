/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BCFC4
 * Callers:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C001755C (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0090830 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026E1F4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00BD148 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00BD17C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00BE198 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00BEDD4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C016A6E4 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(UINT64 a1, ULONG a2, UINT_PTR a3)
{
  unsigned int v6; // ebx
  _BYTE v8[8]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v9[8]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v10[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B0h]
  int v12; // [rsp+58h] [rbp-A8h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v13; // [rsp+60h] [rbp-A0h] BYREF

  memset(&v13, 0, sizeof(v13));
  v13.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v13.Token.GdiSysMem.dwDirtyFlags = a2;
  v13.Token.Flip.FenceValue = a1;
  v13.Token.Flip.dxgContext = a3;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v9, (struct SfmState *)((char *)gpSfmState + 32));
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v10);
  v11 = 0LL;
  v12 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v10, (HLSURF)a1);
  if ( v11 )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v8, (struct _EX_PUSH_LOCK *)(v11 + 256));
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*(_DWORD *)(v11 + 244), 2),
      a2,
      v13.Token.Flip.FenceValue,
      v13.Token.Flip.dxgContext);
    if ( __CFSHR__(*(_DWORD *)(v11 + 244), 2) )
    {
      v6 = SfmTokenArray::AddNotificationToken(gpSfmState, &v13);
      if ( !v6 )
        SfmSignalTokenEvent();
    }
    else
    {
      v6 = SfmTokenArray::AddNotificationToken((SfmTokenArray *)(v11 + 216), &v13);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v8);
  }
  else
  {
    v6 = -1073741816;
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v10);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v9);
  return v6;
}
