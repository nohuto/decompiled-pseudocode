/*
 * XREFs of ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C01B02FC
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C01821A4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01B021C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 * Callees:
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C01AA154 (MonitorGetMonitorOrientationsFromTarget.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AddingMonitorOrientation(
        ADAPTER_DISPLAY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  char v4; // bl
  int MonitorOrientationsFromTarget; // eax
  char v6; // cl
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 2);
  v4 = a2;
  v8 = 0;
  MonitorOrientationsFromTarget = MonitorGetMonitorOrientationsFromTarget(v3, a3, &v8);
  v6 = v8;
  if ( MonitorOrientationsFromTarget < 0 )
    v6 = 0;
  return ((v6 + v4 - 1) & 3u) + 1;
}
