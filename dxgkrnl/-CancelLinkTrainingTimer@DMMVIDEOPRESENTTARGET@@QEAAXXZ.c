/*
 * XREFs of ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01DCDA0
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C00226AC (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C03AA2C0 (-DmmReset@@YAXPEAX@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03AD86C (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C03ADF80 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03AE888 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  signed __int32 v7; // eax

  v5 = *((_QWORD *)this + 67);
  if ( ((*(_DWORD *)(v5 + 152) - 1) & 0xFFFFFFFD) == 0 )
  {
    KeCancelTimer((PKTIMER)(v5 + 16));
    KeFlushQueuedDpcs();
  }
  if ( ((_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), 5) - 2) & 0xFFFFFFFD) != 0 )
  {
    v6 = *((_QWORD *)this + 67);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 152), 0, 5);
    if ( v7 != 5 )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, 0LL, 152LL, a4) + 24) = v7;
  }
}
