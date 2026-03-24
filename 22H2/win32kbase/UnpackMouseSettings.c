/*
 * XREFs of UnpackMouseSettings @ 0x1C01AF8D0
 * Callers:
 *     ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8E90 (-ivHandleSettingsPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C000D2E4 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C000D350 (BroadcastSettingsUpdateToAllContainers.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C006F718 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00A4C60 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     SetSwapMouseButton @ 0x1C0127A80 (SetSwapMouseButton.c)
 *     WPP_RECORDER_SF_s @ 0x1C01525FC (WPP_RECORDER_SF_s.c)
 */

void *__fastcall UnpackMouseSettings(int *a1, int a2)
{
  int v2; // ebx
  const char *v4; // rax
  unsigned int v5; // ebx
  int v6; // edx
  void *result; // rax
  int v8; // ebx
  __int64 v9; // [rsp+28h] [rbp-10h]

  v2 = *a1;
  if ( *a1 != *((_DWORD *)gpsi + 497) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = "swapped";
      if ( !v2 )
        v4 = "not swapped";
      WPP_RECORDER_SF_s(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        a2,
        12,
        10,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
        (__int64)v4);
    }
    SetSwapMouseButton(v2 != 0);
  }
  v5 = a1[1];
  if ( v5 != (unsigned int)CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CDeviceAcceleration *)((char *)qword_1C0245098 + 104)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v5;
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v6,
        12,
        11,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
        v9);
    }
    if ( v5 - 1 > 0x13 )
      v5 = *((_DWORD *)qword_1C0245098 + 24);
    CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
      (CDeviceAcceleration *)((char *)qword_1C0245098 + 104),
      v5);
    BroadcastSettingsUpdateToAllContainers();
    CDeviceAcceleration::ResetAccelerationCurves(qword_1C0245098);
  }
  result = gpsi;
  v8 = a1[2];
  if ( v8 != *((_DWORD *)gpsi + 1247) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = a1[2];
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v6,
        12,
        12,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
        v9);
    }
    result = gpsi;
    *((_DWORD *)gpsi + 1247) = v8;
  }
  return result;
}
