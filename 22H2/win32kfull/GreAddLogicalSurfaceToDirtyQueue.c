/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BB50C
 * Callers:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0078BB0 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00D8400 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02661A8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C007C7E0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00D5418 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(Gre::Base *a1, ULONG a2, UINT_PTR a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rsi
  unsigned int v7; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B0h]
  int v13; // [rsp+58h] [rbp-A8h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v14; // [rsp+60h] [rbp-A0h] BYREF

  v6 = Gre::Base::Globals(a1);
  memset_0(&v14, 0, sizeof(v14));
  v14.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v14.Token.GdiSysMem.dwDirtyFlags = a2;
  v14.Token.Flip.FenceValue = (UINT64)a1;
  v14.Token.Flip.dxgContext = a3;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v10, (struct _EX_PUSH_LOCK *)(*((_QWORD *)v6 + 809) + 32LL));
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v11);
  v12 = 0LL;
  v13 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v11, (HLSURF)a1);
  if ( v12 )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v9, (struct _EX_PUSH_LOCK *)(v12 + 256));
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*(_DWORD *)(v12 + 244), 2),
      a2,
      v14.Token.Flip.FenceValue,
      v14.Token.Flip.dxgContext);
    if ( __CFSHR__(*(_DWORD *)(v12 + 244), 2) )
    {
      v7 = SfmTokenArray::AddNotificationToken(*((SfmTokenArray **)v6 + 809), &v14);
      if ( !v7 )
        SfmSignalTokenEvent();
    }
    else
    {
      v7 = SfmTokenArray::AddNotificationToken((SfmTokenArray *)(v12 + 216), &v14);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v9);
  }
  else
  {
    v7 = -1073741816;
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v11);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v10);
  return v7;
}
