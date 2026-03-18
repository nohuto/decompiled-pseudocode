/*
 * XREFs of ?IsSuspended@CVidSchSuspendResume@@QEAAEXZ @ 0x1C0069F34
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVidSchSuspendResume::IsSuspended(CVidSchSuspendResume *this)
{
  return *(_DWORD *)this != 0;
}
