/*
 * XREFs of FWUPDATE_ReenumerateFirmwareUpdateDevice @ 0x1C00407BC
 * Callers:
 *     HUBPARENT_QueryParentIfDeviceWasReset @ 0x1C0007808 (HUBPARENT_QueryParentIfDeviceWasReset.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset @ 0x1C00093E0 (HUBHSM_WaitingForPortsToAcquireReferenceOnResumeWithReset.c)
 *     HUBHSM_WaitingForPortsToAcquireReferenceOnStart @ 0x1C0009440 (HUBHSM_WaitingForPortsToAcquireReferenceOnStart.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FWUPDATE_ReenumerateFirmwareUpdateDevice(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // eax
  int v4; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 2656);
  if ( v1 )
  {
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v1,
                      off_1C006A170)
                  + 24) == 1 )
    {
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1752))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 2656));
      if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v4 = v3;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2520),
          2u,
          3u,
          0x2Bu,
          (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
          v4);
      }
    }
  }
}
