/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C02019C0
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017F340 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FAA30 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C0201834 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C343C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C3A14 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C0014EA4 (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x1C0171980 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1C0201D68 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rbx
  int CCDMonitorID; // eax
  unsigned int v8; // esi
  __int64 v9; // r11
  int TtmDevice; // eax
  unsigned int v11; // edi
  __int64 v13; // rax

  if ( *(_DWORD *)(*((_QWORD *)this + 30) + 16LL) )
  {
    v13 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = -1073741637LL;
    return 3221225659LL;
  }
  else
  {
    if ( !*((_QWORD *)this + 56) )
    {
      v5 = (unsigned __int16 *)operator new[](0x208uLL, 0x4D677844u, 256LL);
      v6 = v5;
      if ( v5 )
      {
        if ( MONITOR_MGR::_UsingCCDNameForTTM )
          CCDMonitorID = DXGMONITOR::GetCCDMonitorID(this, 1u, 260, v5);
        else
          CCDMonitorID = RtlStringCchCopyUnicodeString(
                           (char *)v5,
                           260LL,
                           (const struct _UNICODE_STRING *)(*((_QWORD *)this + 25) + 48LL));
        v8 = CCDMonitorID;
        if ( CCDMonitorID < 0 )
        {
          WdLogSingleEntry1(2LL, CCDMonitorID);
        }
        else
        {
          v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
          TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                        v9,
                        (*((unsigned __int8 *)this + 176) >> 1) & 1 | (*((_DWORD *)this + 78) != 1 ? 2 : 0),
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 216LL));
          v8 = TtmDevice;
          if ( TtmDevice >= 0 )
          {
            v11 = 0;
LABEL_9:
            operator delete(v6);
            return v11;
          }
          WdLogSingleEntry3(2LL, this, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL), TtmDevice);
        }
        v11 = v8;
      }
      else
      {
        v11 = -1073741801;
        WdLogSingleEntry1(2LL, -1073741801LL);
      }
      if ( !v6 )
        return v11;
      goto LABEL_9;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    return 0LL;
  }
}
