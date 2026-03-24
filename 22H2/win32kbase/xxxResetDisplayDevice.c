/*
 * XREFs of xxxResetDisplayDevice @ 0x1C0077600
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00198CC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C00770F0 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C011B084 (VideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C0139C84 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C00165B8 (DwmAsyncNotifyDisplayModeChange.c)
 *     ReferenceDwmApiPort @ 0x1C00165F0 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0016698 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0043DC4 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0043E10 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C00859F4 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0085CFC (PopAndFreeAlwaysW32ThreadLock.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1C0092424 (ApiSetEditionEndDeferWinEventNotify.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1C00924C0 (ApiSeEditionDeferWinEventNotify.c)
 *     CacheRotationInfo @ 0x1C009A94C (CacheRotationInfo.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00A9F18 (-ResetSystemColors@@YAXXZ.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C00AC540 (IsPostIAMShellHookMessageExSupported.c)
 *     SnapshotMonitorRects @ 0x1C00AE340 (SnapshotMonitorRects.c)
 *     IsCreateBitmapStripSupported @ 0x1C00B6744 (IsCreateBitmapStripSupported.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B74E0 (PostIAMShellHookMessageEx.c)
 *     CreateBitmapStrip @ 0x1C00B75BC (CreateBitmapStrip.c)
 *     DestroyMonitorDCs @ 0x1C00C34E0 (DestroyMonitorDCs.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C77F4 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124850 (McTemplateK0_EtwWriteTransfer.c)
 *     PopW32ThreadLock @ 0x1C01FC5E0 (PopW32ThreadLock.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned __int16 v6; // bp
  int updated; // r14d
  int v8; // esi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h]
  int CurrentProcessSessionId; // [rsp+98h] [rbp+10h] BYREF
  char v22; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v6 = *((_WORD *)gpsi + 3498);
  v20 = 0LL;
  v19 = 0LL;
  if ( !a2 )
  {
    if ( a1 && (v3 = *(_QWORD *)(a1 + 264)) != 0 )
      *(_QWORD *)(a1 + 264) = 0LL;
    else
      v3 = SnapshotMonitorRects();
    if ( v3 )
      PushW32ThreadLock(v3, &v19, Win32FreePool);
  }
  DestroyMonitorDCs();
  ApiSeEditionDeferWinEventNotify();
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
  updated = zzzUpdateUserScreen();
  if ( updated >= 0 )
  {
    v8 = -1073741637;
    if ( qword_1C0256B28 )
      v9 = qword_1C0256B28();
    else
      v9 = -1073741637;
    if ( v9 >= 0 && qword_1C0256B30 )
      qword_1C0256B30();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
    ApiSetEditionEndDeferWinEventNotify();
    if ( qword_1C0256B38 )
      v10 = qword_1C0256B38();
    else
      v10 = -1073741637;
    if ( v10 >= 0 && qword_1C0256B40 )
      qword_1C0256B40(a1, v6 != *((_WORD *)gpsi + 3498), a3);
    ResetSystemColors();
    if ( (int)IsCreateBitmapStripSupported() >= 0 )
      CreateBitmapStrip();
    if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
    {
      ReferenceDwmApiPort();
      DwmAsyncNotifyDisplayModeChange();
    }
    if ( qword_1C0256B68 )
      v12 = qword_1C0256B68();
    else
      v12 = -1073741637;
    if ( v12 >= 0 && qword_1C0256B70 )
      qword_1C0256B70(a1);
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 264);
      if ( v11 )
      {
        Win32FreePool(v11);
        *(_QWORD *)(a1 + 264) = 0LL;
      }
    }
    if ( !a3 )
      goto LABEL_55;
    v13 = qword_1C0256B78 ? qword_1C0256B78() : -1073741637;
    if ( v13 < 0 )
      goto LABEL_55;
    v14 = (int)qword_1C0256B80;
    if ( qword_1C0256B80 )
      v14 = qword_1C0256B80(a1);
    if ( v14 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v11, &ChangeDisplayModeDeferral, 0LL);
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
      *(_QWORD *)(a1 + 264) = v3;
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL);
      if ( qword_1C0256B98 )
        v15 = qword_1C0256B98();
      else
        v15 = -1073741637;
      if ( v15 >= 0 && qword_1C0256BA0 )
        qword_1C0256BA0(a1, 0LL, 2LL);
      if ( v3 )
        PopW32ThreadLock(&v19);
    }
    else
    {
LABEL_55:
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL);
      if ( qword_1C0256BA8 )
        v16 = qword_1C0256BA8();
      else
        v16 = -1073741637;
      if ( v16 >= 0 && qword_1C0256BB0 )
        qword_1C0256BB0(a1, v3, v6, 0LL);
      if ( v3 )
        PopAndFreeAlwaysW32ThreadLock(&v19);
    }
    if ( qword_1C0256BB8 )
      v17 = qword_1C0256BB8();
    else
      v17 = -1073741637;
    if ( v17 >= 0 && qword_1C0256BC0 )
      qword_1C0256BC0(a1, 1LL);
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 104) )
    {
      if ( qword_1C0256BC8 )
        v8 = qword_1C0256BC8();
      if ( v8 >= 0 && qword_1C0256BD0 )
        qword_1C0256BD0(*(_QWORD *)(gpqForeground + 104), 31LL, 0LL);
    }
    if ( !a3 )
      CacheRotationInfo();
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  }
  else
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
    ApiSetEditionEndDeferWinEventNotify();
  }
  return (unsigned int)updated;
}
