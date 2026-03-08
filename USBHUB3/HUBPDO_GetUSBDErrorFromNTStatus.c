/*
 * XREFs of HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C0015618
 * Callers:
 *     HUBPDO_SyncCompletionRoutine @ 0x1C0017650 (HUBPDO_SyncCompletionRoutine.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C0025AA0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C00263DC (HUBUCX_SubmitUcxIoctl.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002EBC0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface @ 0x1C002F848 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_GetUSBDErrorFromNTStatus(int a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  switch ( a1 )
  {
    case -1073741667:
    case -1073741810:
      return 3221254144LL;
    case -1073741670:
      return 3221229568LL;
    case -1073741637:
      return 3221229056LL;
    case -1073741536:
      return 3221291008LL;
  }
  result = 0LL;
  if ( a1 )
  {
    result = 2147484416LL;
    if ( a1 != -1073741811 && a1 != -1073741823 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C006A1E8);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 64),
        2u,
        2u,
        0xAu,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        a1);
      return 2147484416LL;
    }
  }
  return result;
}
