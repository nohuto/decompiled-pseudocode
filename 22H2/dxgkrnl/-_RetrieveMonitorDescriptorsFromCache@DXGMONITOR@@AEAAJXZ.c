/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C02FB798
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0183AE8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000983C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0022534 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0276BE0 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C02F9D8C (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromCache(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v12; // r14d
  struct DXGADAPTER *v13; // rsi
  bool v14; // al
  unsigned int v15; // r12d
  char v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  EDIDCACHE *v19; // rcx
  int EdidForTarget; // eax
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v30; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 108) == 1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 32) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  v8 = operator new[](0x9FuLL, 0x4D677844u, PagedPool);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    WdLogEvent5_WdError(v9);
    return 3221225495LL;
  }
  v11 = *((_QWORD *)this + 4);
  v12 = D3DKMDT_MCO_UNINITIALIZED;
  v30 = D3DKMDT_MCO_UNINITIALIZED;
  v13 = *(struct DXGADAPTER **)(*(_QWORD *)(v11 + 8) + 16LL);
  v14 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)this + 12));
  v15 = *((_DWORD *)this + 11);
  v16 = v14;
  v19 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 126);
  if ( v19 )
  {
    EdidForTarget = EDIDCACHE::GetEdidForTarget(v19, v13, v15, v16, (unsigned __int8 *const)v8 + 24, &v30);
    v12 = v30;
    v21 = EdidForTarget;
  }
  else
  {
    v21 = -1073741801;
  }
  if ( v21 < 0 )
  {
    v22 = WdLogNewEntry5_WdDmmEvent(v19);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdDmmEvent(v22);
LABEL_18:
    operator delete[](v8);
    return (unsigned int)v21;
  }
  if ( (int)EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v8 + 24) < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v24, v23);
    WdLogEvent5_WdError(v25);
    v21 = -1073741275;
    goto LABEL_18;
  }
  ConvertMonitorCapablitiesOrigin((unsigned int)v12, (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v8 + 1));
  *v8 = 0LL;
  *((_DWORD *)v8 + 3) = 1;
  v8[2] = 128LL;
  v26 = operator new[](8uLL, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 17) = v26;
  if ( !v26 )
  {
    v29 = WdLogNewEntry5_WdError(v28, v27);
    WdLogEvent5_WdError(v29);
    v21 = -1073741801;
    goto LABEL_18;
  }
  *v26 = 0LL;
  **((_QWORD **)this + 17) = v8;
  result = 0LL;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 18) = v8;
  return result;
}
