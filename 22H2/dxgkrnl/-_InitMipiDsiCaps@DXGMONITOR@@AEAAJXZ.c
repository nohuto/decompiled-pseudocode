/*
 * XREFs of ?_InitMipiDsiCaps@DXGMONITOR@@AEAAJXZ @ 0x1C0183D48
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0183AE8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     Feature_MipiDsi2__private_ReportDeviceUsage @ 0x1C002899C (Feature_MipiDsi2__private_ReportDeviceUsage.c)
 *     Feature_MonitorIoctlTesting__private_IsEnabledDeviceUsage @ 0x1C0028A00 (Feature_MonitorIoctlTesting__private_IsEnabledDeviceUsage.c)
 *     ?DdiDsiCaps@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_CAPS@@@Z @ 0x1C021ADC0 (-DdiDsiCaps@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_CAPS@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InitMipiDsiCaps(DXGMONITOR *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  ADAPTER_DISPLAY *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _FAST_MUTEX *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax

  v2 = *((_QWORD *)this + 4);
  if ( !v2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v4);
    v2 = *((_QWORD *)this + 4);
  }
  v5 = *(ADAPTER_DISPLAY **)(v2 + 8);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
    v2 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  Feature_MipiDsi2__private_ReportDeviceUsage();
  if ( ((unsigned __int8)ExIsManufacturingModeEnabled()
     || (unsigned int)Feature_MonitorIoctlTesting__private_IsEnabledDeviceUsage())
    && (v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 216LL)
                                    + 64LL)
                        + 40LL),
        *(_DWORD *)(v10 + 28) >= 0xC002u)
    && (*((_DWORD *)this + 10) & 2) != 0 )
  {
    v13 = (struct _FAST_MUTEX *)((char *)this + 1256);
    if ( this == (DXGMONITOR *)-1256LL )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10, v8);
      WdLogEvent5_WdAssertion(v14);
    }
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1256));
    v17 = (int)ADAPTER_DISPLAY::DdiDsiCaps(v5, *((_DWORD *)this + 11), (DXGMONITOR *)((char *)this + 1312));
    if ( !v13 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v18);
    }
    KeReleaseGuardedMutex(v13);
    if ( (int)v17 < 0 )
    {
      v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = v17;
      WdLogEvent5_WdWarning(v22);
    }
    return (unsigned int)v17;
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v10, v8, v9);
    WdLogEvent5_WdWarning(v11);
    return 3221225659LL;
  }
}
