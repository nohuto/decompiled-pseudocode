/*
 * XREFs of RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00031D0 (NtUserInjectKeyboardInput.c)
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C000E950 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     RIMDeviceIoControl @ 0x1C00336C0 (RIMDeviceIoControl.c)
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     rimCreateDev @ 0x1C00371D0 (rimCreateDev.c)
 *     NtSetPointerDeviceInputSpace @ 0x1C016CDB0 (NtSetPointerDeviceInputSpace.c)
 *     NtUserInjectDeviceInput @ 0x1C0172A60 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0173440 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0173C50 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01746E0 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0175990 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C0176950 (NtUserSetFeatureReportResponse.c)
 *     NtRIMSetExtendedDeviceProperty @ 0x1C01A2AA0 (NtRIMSetExtendedDeviceProperty.c)
 *     RIMAreSiblingDevices @ 0x1C01A4410 (RIMAreSiblingDevices.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01A46A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMGetDevicePreparsedDataLockfree @ 0x1C01A5220 (RIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C01A55D0 (RIMGetDevicePropertiesLockfree.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C01A5E90 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C01A61D0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01A67F0 (RIMInjectInput.c)
 *     RIMRefreshDeviceAttributes @ 0x1C01A7490 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C01A7750 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C01A7B1C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1C01DB6E4 (rimObsCheckForExistingDeviceHandle.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C02232D0 (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x1C0224464 (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 *     ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C02266F8 (-SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0226B08 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x1C0226E60 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C0227610 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C0227C1C (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C000431C (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  char v5; // si
  int v6; // edx
  NTSTATUS v7; // ebx
  int v8; // r8d
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v5 = (char)a1;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v7 < 0 )
  {
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v8,
        (_DWORD)gRimLog,
        4,
        1,
        11,
        (__int64)&WPP_37e9039bb5423a5f62244424f52bc182_Traceguids,
        v5,
        v7);
    }
  }
  else if ( *((_DWORD *)Object + 1) == 2 )
  {
    *a4 = Object;
  }
  else
  {
    v7 = -1073741788;
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v7;
}
