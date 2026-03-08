/*
 * XREFs of ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001414
 * Callers:
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C0164B54 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164DD8 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_DISPLAY::IsCddPrimaryStale(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx

  v2 = *((_QWORD *)this + 16);
  v3 = 4000LL * a2;
  return *(_QWORD *)(v3 + v2 + 964) != *(_QWORD *)(v3 + v2 + 1008)
      || *(_DWORD *)(v3 + v2 + 972) != *(_DWORD *)(v3 + v2 + 1016)
      || *(_DWORD *)(v3 + v2 + 980) != *(_DWORD *)(v3 + v2 + 1024)
      || *(_DWORD *)(v3 + v2 + 984) != *(_DWORD *)(v3 + v2 + 1028);
}
