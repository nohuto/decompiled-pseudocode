/*
 * XREFs of ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C02FC6C8
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FAD5C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01AC934 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01F69F0 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall QueryMonitorType(
        const struct _LUID *a1,
        unsigned int a2,
        enum _DMM_VIDPN_MONITOR_TYPE *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        bool *a8,
        bool *a9,
        unsigned __int8 *a10)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  DXGADAPTER *v16; // rdi
  int MonitorTypeLockHeld; // ebx
  unsigned __int64 v19; // [rsp+68h] [rbp-F0h] BYREF
  _BYTE v20[144]; // [rsp+70h] [rbp-E8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v19);
  v16 = v15;
  if ( !v15 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v15, 0LL);
  MonitorTypeLockHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
  DXGADAPTER::ReleaseReference(v16);
  if ( MonitorTypeLockHeld >= 0 )
    MonitorTypeLockHeld = DxgkQueryMonitorTypeLockHeld((__int64)v16, a2, a3, a4, a5, a6, (char *)a7, a8, a9, a10);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
  return (unsigned int)MonitorTypeLockHeld;
}
