/*
 * XREFs of ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18008E8D8
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008F880 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18008FA60 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090B30 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180090C70 (-StopVirtualMonitorCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800917AC (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerPr.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180091A24 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027988 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

PVOID __fastcall CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2)
{
  PVOID v2; // rbx
  __int64 Buffer; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+28h] [rbp-40h] BYREF
  __int128 v6; // [rsp+38h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]

  Buffer = a2;
  v7 = 0LL;
  v8 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v2 = RtlLookupElementGenericTable(a1, &Buffer);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v6);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease((CBaseObject **)&v5);
  return v2;
}
