/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EF60
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C017EB30 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027EFC (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage @ 0x1C00288D4 (Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage.c)
 *     DxgkStatusChangeNotify @ 0x1C00E4A50 (DxgkStatusChangeNotify.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C8C (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C017EE54 (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C017F38C (DxgkIncreaseMonitorUniqueness.c)
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C017F4A4 (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017F74C (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C017F918 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C017FB60 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0180200 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018156C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C0182204 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C01834E4 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0183F54 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C018415C (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0184440 (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0185724 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0214E58 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02F59C8 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F5EC0 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 *     ?_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z @ 0x1C02F62E0 (-_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C02F6724 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02F68D8 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F69A4 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F930C (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int MonitorDescriptorsFromRegistry; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  unsigned __int16 v13; // ax
  PVOID v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  _DWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  int v29; // eax
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // r8
  int UsageClass; // [rsp+30h] [rbp-20h] BYREF
  int v34[6]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v35; // [rsp+90h] [rbp+40h] BYREF
  bool v36; // [rsp+98h] [rbp+48h] BYREF
  bool v37; // [rsp+A8h] [rbp+58h] BYREF

  MonitorDescriptorsFromRegistry = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString) + 24) = this;
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_DWORD *)this + 33) )
  {
    MonitorDescriptorsFromRegistry = DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this);
    if ( MonitorDescriptorsFromRegistry >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a3, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry(this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  }
  v12 = (void *)*((_QWORD *)this + 14);
  if ( v12 )
  {
    operator delete[](v12);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_WORD *)this + 52) = 0;
  v13 = SourceString->Length + 2;
  *((_WORD *)this + 53) = v13;
  v14 = operator new[](v13, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 14) = v14;
  if ( !v14 )
  {
    v17 = WdLogNewEntry5_WdError(v16, v15);
    WdLogEvent5_WdError(v17);
    return 3221225495LL;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 104), SourceString);
  DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, a3);
  v20 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v20 + 16) + 348LL) & 0x40000) == 0 )
  {
    v35 = 0;
    v21 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v35);
    v20 = 0x80000000LL;
    MonitorDescriptorsFromRegistry = v21;
    if ( (int)(v21 + 0x80000000) < 0 || v21 == -1073741772 )
    {
      if ( (v19 = v35, v22 = (_DWORD *)((char *)this + 584), v21 == -1073741772) && *v22 || v21 >= 0 && *v22 != v35 )
      {
        *v22 = v35;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v19);
        MONITOR_MGR::_IssueMonitorEvent(
          *((struct _FAST_MUTEX **)this + 4),
          *((unsigned int *)this + 11),
          9,
          (unsigned int)*v22,
          *((_DWORD *)this + 108),
          (__int64)a3);
      }
    }
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v20, v19) + 304321) )
    goto LABEL_52;
  if ( *((_DWORD *)this + 148) )
  {
LABEL_36:
    Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
    if ( DXGMONITOR::EdidSupportsHDR(this) )
    {
      Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage();
      if ( (*((_DWORD *)this + 10) & 2) == 0 )
      {
        v37 = 0;
        v36 = 0;
        LOBYTE(v35) = 0;
        DXGMONITOR::_ReadDisplayHdrSupportFromPnpRegistry(this, &v37, &v36, (bool *)&v35);
      }
      if ( (unsigned int)DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore(this) == -1073741772 )
      {
        if ( (*((_DWORD *)this + 10) & 2) != 0 )
        {
          LOBYTE(v35) = 0;
          if ( (int)DXGMONITOR::_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry(this, (bool *)&v35) >= 0
            && (*((_DWORD *)this + 10) & 0x800) == 0
            && (_BYTE)v35 )
          {
            DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(this, v35);
            ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(
              *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 4) + 8LL),
              0LL,
              a3);
          }
        }
        if ( *((_BYTE *)this + 703) )
        {
          DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(this, 1);
          ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(ADAPTER_DISPLAY **)(*((_QWORD *)this + 4) + 8LL), 0LL, a3);
          WdDiagNotifyUser(0LL, 10LL, 0LL, 0LL);
        }
      }
    }
    if ( (int)DxgkIncreaseMonitorUniqueness() >= 0 )
    {
      *(_OWORD *)v34 = 0LL;
      v34[0] = 12;
      DxgkStatusChangeNotify(v34, v31, v32);
    }
    MONITOR_MGR::_IssueMonitorEvent(
      *((struct _FAST_MUTEX **)this + 4),
      *((unsigned int *)this + 11),
      11,
      1LL,
      *((_DWORD *)this + 108),
      (__int64)a3);
    return 0LL;
  }
  UsageClass = 0;
  v36 = 1;
  v37 = 0;
  LOBYTE(v35) = 1;
  if ( DXGMONITOR::_GetIntendedUsageFromDescriptor(this, (enum _DXGK_DISPLAY_USAGE *)&v36, &v37, (bool *)&v35) < 0 )
  {
    MonitorDescriptorsFromRegistry = DXGMONITOR::_ReadUsageOverridesFromPnpRegistry(
                                       this,
                                       (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass);
  }
  else
  {
    LOBYTE(v23) = v35;
    LOBYTE(v24) = v36;
    UsageClass = DXGMONITOR::GetUsageClass(v24, v23);
    if ( UsageClass != *((_DWORD *)this + 148) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26, v25);
      WdLogEvent5_WdAssertion(v27);
    }
  }
  DXGMONITOR::_ReadAppOverridesFromMonitorDataStore(this, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass);
  if ( MonitorDescriptorsFromRegistry < 0 )
    goto LABEL_52;
  v28 = UsageClass;
  if ( UsageClass == *((_DWORD *)this + 148) )
    goto LABEL_52;
  *((_BYTE *)this + 596) = v37;
  *((_DWORD *)this + 148) = v28;
  DXGMONITOR::_SaveUsageOverridesToMonitorStore(this);
  v29 = *((_DWORD *)this + 148);
  v30 = v29 == 0;
  if ( v29 )
  {
    DXGMONITOR::_DestroyTtmDevice(this);
    MONITOR_MGR::_IssueMonitorEvent(
      *((struct _FAST_MUTEX **)this + 4),
      *((unsigned int *)this + 11),
      10,
      2LL,
      *((_DWORD *)this + 108),
      (__int64)a3);
    v30 = *((_DWORD *)this + 148) == 0;
  }
  result = DXGMONITOR::_UpdateLinkInfo(this, !v30);
  if ( (int)result < 0 )
  {
LABEL_52:
    if ( !*((_DWORD *)this + 148) )
      DXGMONITOR::_CreateTtmDevice(this);
    goto LABEL_36;
  }
  return result;
}
