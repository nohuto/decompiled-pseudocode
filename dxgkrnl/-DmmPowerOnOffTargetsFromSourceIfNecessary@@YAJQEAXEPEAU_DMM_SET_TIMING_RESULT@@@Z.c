/*
 * XREFs of ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C01DBD60
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001BFA0 (DxgkQueryConnectionChanges.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171F9C (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03C6550 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 */

__int64 __fastcall DmmPowerOnOffTargetsFromSourceIfNecessary(
        PERESOURCE *a1,
        unsigned __int8 a2,
        struct _DMM_SET_TIMING_RESULT *a3)
{
  PERESOURCE v6; // rax
  VIDPN_MGR *Flink; // rdi
  struct _DMM_SET_TIMING_RESULT *v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  char v12; // [rsp+50h] [rbp-148h] BYREF
  __int64 v13; // [rsp+58h] [rbp-140h] BYREF
  _BYTE v14[272]; // [rsp+60h] [rbp-138h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry0(2LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    WdLogSingleEntry0(1LL);
  v6 = a1[365];
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223191554LL;
  }
  Flink = (VIDPN_MGR *)v6[1].SystemResourcesList.Flink;
  if ( Flink )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v13, (__int64)v6[1].SystemResourcesList.Flink);
    memset(v14, 0, 0x104uLL);
    v12 = 0;
    v8 = (struct _DMM_SET_TIMING_RESULT *)&v12;
    if ( a3 )
      v8 = a3;
    v9 = VIDPN_MGR::SetTimingsFromVidPn(Flink, 0, 4u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v14, v8, a2, 0LL, 0LL);
    v10 = v9;
    if ( v9 < 0 )
      WdLogSingleEntry3(2LL, *((int *)a1 + 102), *((unsigned int *)a1 + 101), v9);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 40));
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
