/*
 * XREFs of ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01A5F14
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01A4B90 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C01A95D0 (DxgkGetDisplayModeList.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C01D8 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02B22B0 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F50BC (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgIsRemoteSessionUsingWddmMonitors(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
    return 0LL;
  v2 = *((_QWORD *)Current + 11);
  if ( !v2 )
    return 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *))(v2 + 224))(0LL, 0LL, &v4);
  return v4;
}
