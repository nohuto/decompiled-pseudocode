/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1C00F2FEC
 * Callers:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C001E500 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C004EEA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C0268C70 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0029DD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C002A404 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C002D794 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(Gre::Base *a1, ULONG a2, UINT_PTR a3)
{
  struct Gre::Base::SESSION_GLOBALS *v6; // rsi
  SFMLOGICALSURFACE *v7; // rbx
  unsigned int v8; // ebx
  SFMLOGICALSURFACE *v10; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+28h] [rbp-D8h]
  _BYTE v12[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v14; // [rsp+40h] [rbp-C0h] BYREF

  v6 = Gre::Base::Globals(a1);
  memset_0(&v14, 0, sizeof(v14));
  v14.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v14.Token.GdiSysMem.dwDirtyFlags = a2;
  v14.Token.Flip.FenceValue = (UINT64)a1;
  v14.Token.Flip.dxgContext = a3;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v13, (struct _EX_PUSH_LOCK *)(*((_QWORD *)v6 + 809) + 32LL));
  v10 = 0LL;
  v11 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v10, (HLSURF)a1);
  v7 = v10;
  if ( v10 )
  {
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v12, (SFMLOGICALSURFACE *)((char *)v10 + 256));
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*((_DWORD *)v7 + 61), 2),
      a2,
      v14.Token.Flip.FenceValue,
      v14.Token.Flip.dxgContext);
    if ( __CFSHR__(*((_DWORD *)v7 + 61), 2) )
    {
      v8 = SfmTokenArray::AddNotificationToken(*((SfmTokenArray **)v6 + 809), &v14);
      if ( !v8 )
        SfmSignalTokenEvent();
    }
    else
    {
      v8 = SfmTokenArray::AddNotificationToken((SFMLOGICALSURFACE *)((char *)v7 + 216), &v14);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v12);
  }
  else
  {
    v8 = -1073741816;
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(&v10);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v13);
  return v8;
}
