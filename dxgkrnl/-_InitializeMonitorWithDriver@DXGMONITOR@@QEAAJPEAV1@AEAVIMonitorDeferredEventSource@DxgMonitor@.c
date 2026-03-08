/*
 * XREFs of ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FB6A0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C2D18 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C0001F08 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?OnInitialized@MonitorDisplayPortState@DxgMonitor@@QEAAXXZ @ 0x1C0023F50 (-OnInitialized@MonitorDisplayPortState@DxgMonitor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEAA_NXZ @ 0x1C0180360 (-_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEAA_NXZ.c)
 *     ?ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x1C01D1B70 (-ReadBoolWithDefault@MonitorDataStore@DxgMonitor@@UEBA_NW4MonitorDataStoreBehavior@2@PEBG_N@Z.c)
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z @ 0x1C01D1BA4 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NW4MonitorDataStoreBehavior@1@PEBGAEAK@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01F9AA4 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C01FA228 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C01FC13C (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C01FC184 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C01FC7C4 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C01FEB78 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1C0214408 (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 *     ?OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1C0219CA8 (-OnInitialized@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C021A934 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021AB8C (-SetupPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C02B2CB4 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C03C4A88 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C03C7540 (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C03C7F38 (-CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x1C03CABEC (-OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_InitializeMonitorWithDriver(
        DXGMONITOR *this,
        struct DXGMONITOR *a2,
        struct DxgMonitor::IMonitorDeferredEventSource *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v8; // eax
  int DefaultMonitorProfile; // esi
  bool v10; // r8
  __int64 v11; // r8
  DXGADAPTER *v12; // rcx
  __int64 v13; // rcx
  char v14; // al
  int updated; // eax
  __int64 v16; // rdi
  DxgMonitor::MonitorMipiDsiState *v17; // rcx
  __int64 v19; // rax
  DxgMonitor::MonitorModes *v20; // rcx
  unsigned int v21; // edx
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int128 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h]
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF

  if ( *((_DWORD *)this + 78) == 1 && a2 )
    WdLogSingleEntry0(1LL);
  v8 = *((_DWORD *)this + 78);
  if ( v8 == 1 )
  {
    DefaultMonitorProfile = DxgMonitor::MonitorDescriptorState::OnInitializePhysicalMonitor(*((DxgMonitor::MonitorDescriptorState **)this
                                                                                            + 27));
    if ( DefaultMonitorProfile >= 0 )
      DefaultMonitorProfile = DXGMONITOR::OnDescriptorUpdated(this, a3, v10);
    v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL);
    if ( (*(_DWORD *)(v11 + 436) & 0x100) != 0 )
    {
      v19 = *(_QWORD *)(v11 + 2920);
      LODWORD(v25) = 0;
      v22 = 0;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *, int *))(*(_QWORD *)(v19 + 16) + 2208LL))(
             *(_QWORD *)(*(_QWORD *)(v19 + 16) + 2112LL),
             *((unsigned int *)this + 45),
             &v25,
             &v22) >= 0 )
      {
        *((_DWORD *)this + 118) = v25;
        *((_DWORD *)this + 119) = v22;
      }
    }
    goto LABEL_8;
  }
  if ( a2 )
  {
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v25, (__int64)a2, 0);
    DefaultMonitorProfile = DXGMONITOR::_CopyMonitorInformation(this, a2);
    if ( v25 )
    {
      ExReleaseResourceLite((PERESOURCE)(v25 + 24));
      KeLeaveCriticalRegion();
    }
LABEL_8:
    if ( DefaultMonitorProfile < 0 )
      return (unsigned int)DefaultMonitorProfile;
    goto LABEL_9;
  }
  if ( v8 == 5 )
  {
    DxgMonitor::MonitorDescriptorState::OnInitializeSimulatedMonitor(*((DxgMonitor::MonitorDescriptorState **)this + 27));
    DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(this);
  }
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 2820LL) >= 1105 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 40LL))(*((_QWORD *)this + 24));
  v20 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 29);
  if ( !*((_DWORD *)v20 + 30) )
  {
    DefaultMonitorProfile = DxgMonitor::MonitorModes::CreateDefaultMonitorProfile(v20);
    goto LABEL_8;
  }
LABEL_9:
  DefaultMonitorProfile = DXGMONITOR::_PrepareMonitorCCDName(this);
  if ( DefaultMonitorProfile >= 0 )
  {
    DXGMONITOR::_PrepareDefaultMonitorConfiguration(this);
    if ( *((_DWORD *)this + 78) != 1 )
      goto LABEL_18;
    *((_BYTE *)this + 176) = (DxgMonitor::MonitorDataStore::ReadBoolWithDefault(
                                *((_QWORD *)this + 26),
                                2LL,
                                (__int64)L"VMSDisabled",
                                *((_BYTE *)this + 176) >> 7) << 7) | *((_BYTE *)this + 176) & 0x7F;
    DXGMONITOR::_RetrieveMonitorConfigurationFromMonitorStore(this);
    v12 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL);
    if ( (*((_DWORD *)v12 + 109) & 0x40000) != 0 )
    {
      v21 = *((_DWORD *)this + 45);
      v23 = 0LL;
      v24 = 0LL;
      DXGADAPTER::GetVirtualMonitorInfo(v12, v21, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v23);
      *((_DWORD *)this + 116) = v23;
    }
    else
    {
      v13 = *((_QWORD *)this + 26);
      LODWORD(v25) = 0;
      v14 = DxgMonitor::MonitorDataStore::TryReadData<unsigned long>(v13, 2LL, (__int64)L"PreferredScaleFactor", &v25);
      *((_DWORD *)this + 116) = v14 != 0 ? v25 : 0;
    }
    DxgMonitor::MonitorUsageState::_EvaluateUsageState(*((DxgMonitor::MonitorUsageState **)this + 30), 0LL);
    DxgMonitor::MonitorColorState::OnInitialized(*((DxgMonitor::MonitorColorState **)this + 28));
    DxgMonitor::MonitorUsb4State::SetupPowerConnectionWithUsb4Stack(*((PVOID *)this + 33), a4);
    DxgMonitor::MonitorDisplayPortState::OnInitialized(*((DxgMonitor::MonitorDisplayPortState **)this + 34));
    updated = DXGMONITOR::_UpdateLinkInfo(this, *(_DWORD *)(*((_QWORD *)this + 30) + 16LL) != 0);
    v16 = *((_QWORD *)this + 31);
    DefaultMonitorProfile = updated;
    if ( DxgMonitor::MonitorGammaState::_IsTargetMatrix_3x4Supported((DxgMonitor::MonitorGammaState *)v16) )
    {
      *(_DWORD *)(v16 + 20) = 0;
      *(_DWORD *)(v16 + 16) = 1;
      *(_DWORD *)(v16 + 60) = 4096;
      *(_OWORD *)(v16 + 24) = 0LL;
      *(_DWORD *)(v16 + 64) = 1;
      *(_DWORD *)(v16 + 68) = 1480;
      *(_DWORD *)(v16 + 72) = -8388609;
      *(_DWORD *)(v16 + 76) = 2139095039;
      *(_DWORD *)(v16 + 40) = *(_DWORD *)(v16 + 40) & 0xFFF00000 | 0xC03;
      *(_DWORD *)(v16 + 44) = 1;
      *(_DWORD *)(v16 + 48) = 1480;
      *(_DWORD *)(v16 + 52) = -8388609;
      *(_DWORD *)(v16 + 56) = 2139095039;
    }
    v17 = (DxgMonitor::MonitorMipiDsiState *)*((_QWORD *)this + 32);
    if ( v17 )
      DxgMonitor::MonitorMipiDsiState::OnInitialized(v17);
    if ( DefaultMonitorProfile >= 0 )
LABEL_18:
      *((_BYTE *)this + 176) |= 1u;
  }
  return (unsigned int)DefaultMonitorProfile;
}
