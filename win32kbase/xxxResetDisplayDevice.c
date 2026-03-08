/*
 * XREFs of xxxResetDisplayDevice @ 0x1C0016410
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0011DE0 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C00D93A8 (VideoPortCalloutThread.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DB90 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C017CCD4 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0014608 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C00163DC (IsPostIAMShellHookMessageExSupported.c)
 *     ReferenceDwmApiPort @ 0x1C00167E0 (ReferenceDwmApiPort.c)
 *     IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0016D1C (IsDwmAsyncNotifyDisplayModeChangeSupported.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C0016D48 (DwmAsyncNotifyDisplayModeChange.c)
 *     IsCreateBitmapStripSupported @ 0x1C0017470 (IsCreateBitmapStripSupported.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ApiSetEditionEndDeferWinEventNotify @ 0x1C00AD874 (ApiSetEditionEndDeferWinEventNotify.c)
 *     ApiSeEditionDeferWinEventNotify @ 0x1C00AD970 (ApiSeEditionDeferWinEventNotify.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00C8EE0 (-ResetSystemColors@@YAXXZ.c)
 *     DestroyMonitorDCs @ 0x1C00D0790 (DestroyMonitorDCs.c)
 *     ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C00D2A2C (-UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  struct CMonitorTopology *v5; // rcx
  unsigned __int16 v8; // r14
  struct CMonitorTopology *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int updated; // edi
  __int64 v14; // rax
  void *v15; // rdx
  __int64 v17; // rcx
  struct CMonitorTopology *v18; // rax
  int CurrentProcessSessionId; // [rsp+40h] [rbp-30h] BYREF
  struct CMonitorTopology *v20; // [rsp+48h] [rbp-28h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]
  char v23; // [rsp+98h] [rbp+28h] BYREF

  v5 = 0LL;
  v8 = *((_WORD *)gpsi + 3498);
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !a2 )
  {
    if ( a1 && (v9 = *(struct CMonitorTopology **)(a1 + 256)) != 0LL )
    {
      *(_QWORD *)(a1 + 256) = 0LL;
      v5 = v9;
      v20 = v9;
    }
    else if ( qword_1C02D8030 )
    {
      if ( (int)qword_1C02D8030() >= 0 && qword_1C02D8038 )
        qword_1C02D8038(&v20);
      v5 = v20;
    }
  }
  if ( v5 && qword_1C02D65C8 )
    qword_1C02D65C8(v5, &v21, _lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_);
  DestroyMonitorDCs();
  ApiSeEditionDeferWinEventNotify();
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v23);
  updated = zzzUpdateUserScreen(v11, v10, v12);
  if ( updated >= 0 && qword_1C02D70B0 && (int)qword_1C02D70B0() >= 0 && qword_1C02D70B8 )
    qword_1C02D70B8();
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v23);
  ApiSetEditionEndDeferWinEventNotify();
  if ( updated < 0 )
  {
    CMonitorTopology::UnlockAndRelease(&v20, (struct _TL *)&v21);
    return (unsigned int)updated;
  }
  else
  {
    if ( qword_1C02D70C0 && (int)qword_1C02D70C0() >= 0 && qword_1C02D70C8 )
      qword_1C02D70C8(a1, v8 != *((_WORD *)gpsi + 3498), a3);
    ResetSystemColors();
    if ( (int)IsCreateBitmapStripSupported() >= 0 && qword_1C02D70E8 )
      qword_1C02D70E8();
    if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
    {
      v14 = ReferenceDwmApiPort();
      DwmAsyncNotifyDisplayModeChange(v14);
    }
    if ( qword_1C02D70F0 && (int)qword_1C02D70F0() >= 0 && qword_1C02D70F8 )
      qword_1C02D70F8(a1);
    if ( a1 )
    {
      v15 = *(void **)(a1 + 256);
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15, 0xFFFFFFFF) == 1 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
        *(_QWORD *)(a1 + 256) = 0LL;
      }
    }
    if ( a3 && qword_1C02D7100 && (int)qword_1C02D7100() >= 0 && qword_1C02D7108 && (unsigned int)qword_1C02D7108(a1) )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        McTemplateK0_EtwWriteTransfer(v17, &ChangeDisplayModeDeferral, 0LL);
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 64LL) |= 2u;
      v18 = v20;
      if ( v20 )
      {
        *(_QWORD *)(a1 + 256) = v20;
        _InterlockedAdd((volatile signed __int32 *)v18, 1u);
      }
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C02D7118 )
        qword_1C02D7118(a1, 35LL, 1LL);
      if ( qword_1C02D7120 && (int)qword_1C02D7120() >= 0 && qword_1C02D7128 )
        qword_1C02D7128(a1, 0LL, 0LL, 2LL);
    }
    else
    {
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C02D7118 )
        qword_1C02D7118(a1, 35LL, 0LL);
      if ( qword_1C02D7130 && (int)qword_1C02D7130() >= 0 && qword_1C02D7138 )
        qword_1C02D7138(a1, v20, v8, 0LL, a4);
    }
    CMonitorTopology::UnlockAndRelease(&v20, (struct _TL *)&v21);
    if ( qword_1C02D7140 && (int)qword_1C02D7140() >= 0 && qword_1C02D7148 )
      qword_1C02D7148(a1, 1LL);
    if ( gpqForeground
      && *(_QWORD *)(gpqForeground + 112)
      && qword_1C02D7150
      && (int)qword_1C02D7150() >= 0
      && qword_1C02D7158 )
    {
      qword_1C02D7158(*(_QWORD *)(gpqForeground + 112), 31LL, 0LL);
    }
    if ( !a3 )
    {
      if ( qword_1C02D6E18 )
        qword_1C02D6E18();
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId);
    return 0LL;
  }
}
