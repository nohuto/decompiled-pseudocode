/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C01B1E78
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040420 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0129820 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0046930 (HMValidateHandleNoSecure.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00551A0 (RawInputManagerObjectResolveHandle.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C008A4D4 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C008A8E8 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C009EE80 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00B1E78 (-CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ.c)
 *     ApiSetEditionDeactivateMitInput @ 0x1C00B6ED4 (ApiSetEditionDeactivateMitInput.c)
 *     RIMFreePointerDevice @ 0x1C015D624 (RIMFreePointerDevice.c)
 */

void __fastcall UserDeactivateMITInputProcessing(CInputThread *a1)
{
  __int64 v1; // rcx
  __int64 (__fastcall **v2)(); // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  InputExtensibilityCallout *v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (CInputThread *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        18,
        (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  }
  CInputThread::DeactivateInputProcessing(a1);
  InputExtensibilityCallout::OnInputThreadStateChanged(v1, 1);
  v2 = s_rgSensorMap;
  do
  {
    CBaseInput::HandleInputThreadStateChange((int *)v2[3], 1);
    v2 += 6;
  }
  while ( v2 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
  ApiSetEditionDeactivateMitInput();
  if ( TouchExtensibility::ghInjectionDevice )
  {
    v6 = 0LL;
    if ( (int)RawInputManagerObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, (PVOID *)&v6) >= 0 )
    {
      v3 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 480);
        if ( v4 )
          RIMFreePointerDevice(v6, v4);
      }
    }
    TouchExtensibility::ghInjectionDevice = 0LL;
  }
  v5 = gpInputExtensibilityCallout;
  *(_QWORD *)gpInputExtensibilityCallout = 0LL;
  InputExtensibilityCallout::CoreMsgCloseAllDestinations(v5);
  CSpatialProcessor::_spfnInputHitTestCallback = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        19,
        (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  }
}
