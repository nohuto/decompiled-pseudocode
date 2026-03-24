/*
 * XREFs of ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C016D47C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E767C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C02DF22C (-DmmReset@@YAXPEAX@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E50E4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C02E5880 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(DMMVIDEOPRESENTTARGET *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rcx
  signed __int32 v5; // eax

  v1 = *((_QWORD *)this + 67);
  v3 = *(_DWORD *)(v1 + 152);
  if ( v3 == 1 || v3 == 3 )
  {
    KeCancelTimer((PKTIMER)(v1 + 16));
    KeFlushQueuedDpcs();
    v1 = *((_QWORD *)this + 67);
  }
  if ( ((_InterlockedExchange((volatile __int32 *)(v1 + 152), 5) - 2) & 0xFFFFFFFD) != 0 )
  {
    v4 = *((_QWORD *)this + 67);
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 152), 0, 5);
    if ( v5 != 5 )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, 0LL) + 24) = v5;
  }
}
