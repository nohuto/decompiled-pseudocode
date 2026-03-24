/*
 * XREFs of xxxResetDisplayDevice @ 0x1C0075F20
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C001845C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C0075A10 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C011ADB4 (VideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C01399B4 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C0015148 (DwmAsyncNotifyDisplayModeChange.c)
 *     ReferenceDwmApiPort @ 0x1C0015180 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0015228 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C0084AF4 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0084DFC (PopAndFreeAlwaysW32ThreadLock.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1C0091584 (ApiSetEditionEndDeferWinEventNotify.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1C0091620 (ApiSeEditionDeferWinEventNotify.c)
 *     CacheRotationInfo @ 0x1C0099B8C (CacheRotationInfo.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00A9A18 (-ResetSystemColors@@YAXXZ.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C00AC040 (IsPostIAMShellHookMessageExSupported.c)
 *     SnapshotMonitorRects @ 0x1C00AE000 (SnapshotMonitorRects.c)
 *     IsCreateBitmapStripSupported @ 0x1C00B6404 (IsCreateBitmapStripSupported.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B71C0 (PostIAMShellHookMessageEx.c)
 *     CreateBitmapStrip @ 0x1C00B729C (CreateBitmapStrip.c)
 *     DestroyMonitorDCs @ 0x1C00C3150 (DestroyMonitorDCs.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C00C7464 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0124580 (McTemplateK0_EtwWriteTransfer.c)
 *     PopW32ThreadLock @ 0x1C01FC6B0 (PopW32ThreadLock.c)
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
    if ( qword_1C0257B28 )
      v9 = qword_1C0257B28();
    else
      v9 = -1073741637;
    if ( v9 >= 0 && qword_1C0257B30 )
      qword_1C0257B30();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
    ApiSetEditionEndDeferWinEventNotify();
    if ( qword_1C0257B38 )
      v10 = qword_1C0257B38();
    else
      v10 = -1073741637;
    if ( v10 >= 0 && qword_1C0257B40 )
      qword_1C0257B40(a1, v6 != *((_WORD *)gpsi + 3498), a3);
    ResetSystemColors();
    if ( (int)IsCreateBitmapStripSupported() >= 0 )
      CreateBitmapStrip();
    if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
    {
      ReferenceDwmApiPort();
      DwmAsyncNotifyDisplayModeChange();
    }
    if ( qword_1C0257B68 )
      v12 = qword_1C0257B68();
    else
      v12 = -1073741637;
    if ( v12 >= 0 && qword_1C0257B70 )
      qword_1C0257B70(a1);
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
    v13 = qword_1C0257B78 ? qword_1C0257B78() : -1073741637;
    if ( v13 < 0 )
      goto LABEL_55;
    v14 = (int)qword_1C0257B80;
    if ( qword_1C0257B80 )
      v14 = qword_1C0257B80(a1);
    if ( v14 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v11, &ChangeDisplayModeDeferral, 0LL);
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
      *(_QWORD *)(a1 + 264) = v3;
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL);
      if ( qword_1C0257B98 )
        v15 = qword_1C0257B98();
      else
        v15 = -1073741637;
      if ( v15 >= 0 && qword_1C0257BA0 )
        qword_1C0257BA0(a1, 0LL, 2LL);
      if ( v3 )
        PopW32ThreadLock(&v19);
    }
    else
    {
LABEL_55:
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL);
      if ( qword_1C0257BA8 )
        v16 = qword_1C0257BA8();
      else
        v16 = -1073741637;
      if ( v16 >= 0 && qword_1C0257BB0 )
        qword_1C0257BB0(a1, v3, v6, 0LL);
      if ( v3 )
        PopAndFreeAlwaysW32ThreadLock(&v19);
    }
    if ( qword_1C0257BB8 )
      v17 = qword_1C0257BB8();
    else
      v17 = -1073741637;
    if ( v17 >= 0 && qword_1C0257BC0 )
      qword_1C0257BC0(a1, 1LL);
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 104) )
    {
      if ( qword_1C0257BC8 )
        v8 = qword_1C0257BC8();
      if ( v8 >= 0 && qword_1C0257BD0 )
        qword_1C0257BD0(*(_QWORD *)(gpqForeground + 104), 31LL, 0LL);
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
