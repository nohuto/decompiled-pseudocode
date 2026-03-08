/*
 * XREFs of ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C03AF250
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C03AD86C (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C03AE9E0 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     <none>
 */

void __fastcall DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(DMMVIDEOPRESENTTARGET *this, unsigned __int8 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // ecx

  v3 = a2;
  v4 = *((_QWORD *)this + 67);
  if ( ((*(_DWORD *)(v4 + 152) - 1) & 0xFFFFFFFD) == 0 )
  {
    KeCancelTimer((PKTIMER)(v4 + 16));
    KeFlushQueuedDpcs();
  }
  if ( !(_BYTE)v3 && *(_DWORD *)(*((_QWORD *)this + 67) + 152LL) != 2 )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry2(
    7LL,
    v3,
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), (_BYTE)v3 != 0 ? 1 : 3));
  v5 = *((_QWORD *)this + 67);
  v6 = *(_QWORD *)(*(_QWORD *)v5 + 2920LL);
  v7 = *(_DWORD *)(v6 + 516);
  if ( !(_BYTE)v3 )
    v7 = *(_DWORD *)(v6 + 520) - v7;
  KeSetTimer((PKTIMER)(v5 + 16), (LARGE_INTEGER)(-100000LL * v7), (PKDPC)(v5 + 80));
}
