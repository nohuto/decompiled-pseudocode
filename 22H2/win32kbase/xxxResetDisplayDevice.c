/*
 * XREFs of xxxResetDisplayDevice @ 0x1C00138D0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0012540 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0135D48 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C014F504 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00121BC (-ResetSystemColors@@YAXXZ.c)
 *     DestroyMonitorDCs @ 0x1C00122F0 (DestroyMonitorDCs.c)
 *     ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C00123C0 (-UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0013D88 (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C0013DB4 (DwmAsyncNotifyDisplayModeChange.c)
 *     IsCreateBitmapStripSupported @ 0x1C0013DE0 (IsCreateBitmapStripSupported.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C0013E0C (IsPostIAMShellHookMessageExSupported.c)
 *     ReferenceDwmApiPort @ 0x1C0047A70 (ReferenceDwmApiPort.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1C00D0DD0 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     CacheRotationInfo @ 0x1C00D60D8 (CacheRotationInfo.c)
 *     CreateBitmapStrip @ 0x1C00D60FC (CreateBitmapStrip.c)
 *     PostIAMShellHookMessageEx @ 0x1C00D6188 (PostIAMShellHookMessageEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  struct CMonitorTopology *v5; // rcx
  unsigned __int16 v8; // r14
  struct CMonitorTopology *v9; // rax
  int updated; // edi
  __int64 v12; // rax
  CMonitorTopology *v13; // rcx
  __int64 v14; // rcx
  struct CMonitorTopology *v15; // rax
  int CurrentProcessSessionId; // [rsp+40h] [rbp-30h] BYREF
  struct CMonitorTopology *v17; // [rsp+48h] [rbp-28h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  char v20; // [rsp+98h] [rbp+28h] BYREF

  v5 = 0LL;
  v8 = *((_WORD *)gpsi + 3498);
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !a2 )
  {
    if ( a1 && (v9 = *(struct CMonitorTopology **)(a1 + 264)) != 0LL )
    {
      *(_QWORD *)(a1 + 264) = 0LL;
      v5 = v9;
      v17 = v9;
    }
    else if ( qword_1C0296EA8 )
    {
      if ( (int)qword_1C0296EA8() >= 0 && qword_1C0296EB0 )
        qword_1C0296EB0(&v17);
      v5 = v17;
    }
  }
  if ( v5 && qword_1C0295450 )
    qword_1C0295450(v5, &v18, CMonitorTopology::Release);
  DestroyMonitorDCs();
  if ( qword_1C02964A0 && (int)qword_1C02964A0() >= 0 && qword_1C02964A8 )
    qword_1C02964A8();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v20);
  updated = zzzUpdateUserScreen();
  if ( updated >= 0 && qword_1C0295F38 && (int)qword_1C0295F38() >= 0 && qword_1C0295F40 )
    qword_1C0295F40();
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v20);
  if ( qword_1C02964B0 && (int)qword_1C02964B0() >= 0 && qword_1C02964B8 )
    qword_1C02964B8();
  if ( updated >= 0 )
  {
    if ( qword_1C0295F48 && (int)qword_1C0295F48() >= 0 && qword_1C0295F50 )
      qword_1C0295F50(a1, v8 != *((_WORD *)gpsi + 3498), a3);
    ResetSystemColors();
    if ( (int)IsCreateBitmapStripSupported() >= 0 )
      CreateBitmapStrip();
    if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
    {
      v12 = ReferenceDwmApiPort();
      DwmAsyncNotifyDisplayModeChange(v12);
    }
    if ( qword_1C0295F78 && (int)qword_1C0295F78() >= 0 && qword_1C0295F80 )
      qword_1C0295F80(a1);
    if ( a1 )
    {
      v13 = *(CMonitorTopology **)(a1 + 264);
      if ( v13 )
      {
        CMonitorTopology::Release(v13);
        *(_QWORD *)(a1 + 264) = 0LL;
      }
    }
    if ( a3 && qword_1C0295F88 && (int)qword_1C0295F88() >= 0 && qword_1C0295F90 && (unsigned int)qword_1C0295F90(a1) )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v14, &ChangeDisplayModeDeferral, 0LL);
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
      v15 = v17;
      if ( v17 )
      {
        *(_QWORD *)(a1 + 264) = v17;
        _InterlockedAdd((volatile signed __int32 *)v15, 1u);
      }
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL);
      if ( qword_1C0295FA8 && (int)qword_1C0295FA8() >= 0 && qword_1C0295FB0 )
        qword_1C0295FB0(a1, 0LL, 0LL, 2LL);
    }
    else
    {
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL);
      if ( qword_1C0295FB8 && (int)qword_1C0295FB8() >= 0 && qword_1C0295FC0 )
        qword_1C0295FC0(a1, v17, v8, 0LL, a4);
    }
    CMonitorTopology::UnlockAndRelease(&v17, (struct _TL *)&v18);
    if ( qword_1C0295FC8 && (int)qword_1C0295FC8() >= 0 && qword_1C0295FD0 )
      qword_1C0295FD0(a1, 1LL);
    if ( gpqForeground
      && *(_QWORD *)(gpqForeground + 112)
      && qword_1C0295FD8
      && (int)qword_1C0295FD8() >= 0
      && qword_1C0295FE0 )
    {
      qword_1C0295FE0(*(_QWORD *)(gpqForeground + 112), 31LL, 0LL);
    }
    if ( !a3 )
      CacheRotationInfo();
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId);
    return 0LL;
  }
  else
  {
    CMonitorTopology::UnlockAndRelease(&v17, (struct _TL *)&v18);
    return (unsigned int)updated;
  }
}
