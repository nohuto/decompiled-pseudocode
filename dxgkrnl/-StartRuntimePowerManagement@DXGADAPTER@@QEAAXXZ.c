/*
 * XREFs of ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C020F0E4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C000E594 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0020BD4 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1C020F21C (-DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ.c)
 */

void __fastcall DXGADAPTER::StartRuntimePowerManagement(DXGADAPTER *this)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  NTSTATUS v4; // eax
  __int64 v5; // rbx

  if ( !*((_QWORD *)this + 379) )
    return;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL);
  if ( *((int *)this + 638) >= 0x2000 && v2 >= 0x5006 )
  {
    DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(this);
LABEL_5:
    *((_BYTE *)this + 3465) = 1;
    DXGADAPTER::DdiPowerRuntimeControlRequest(
      this,
      &GUID_DXGKDDI_POWER_MANAGEMENT_PREPARE_TO_START,
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_6;
  }
  if ( v2 >= 0x3008 )
    goto LABEL_5;
LABEL_6:
  if ( !*((_BYTE *)this + 3464) )
  {
    v3 = *((_DWORD *)this + 793);
    if ( v3 != -1 )
      DXGADAPTER::SetPowerComponentActiveCBInternal(this, v3, 0, 0);
  }
  PoFxStartDevicePowerManagement(*((_QWORD *)this + 379));
  if ( v2 >= 0x3008 )
    DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STARTED, 0LL, 0LL, 0LL, 0LL, 0LL);
  v4 = PoRegisterPowerSettingCallback(
         *((PDEVICE_OBJECT *)this + 27),
         &GUID_MONITOR_POWER_ON,
         (PPOWER_SETTING_CALLBACK)DXGADAPTER::PowerSettingCallback,
         this,
         (PVOID *)this + 438);
  if ( v4 < 0 )
  {
    v5 = v4;
    WdLogSingleEntry1(2LL, v4);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PoRegisterPowerSettingCallback failed with status:0x%I64x",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
