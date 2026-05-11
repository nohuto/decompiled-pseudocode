/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00010CC
 * Callers:
 *     InitializeSideband @ 0x1C00086F8 (InitializeSideband.c)
 *     DeInitSideband @ 0x1C0008958 (DeInitSideband.c)
 *     SidebandDispatchIrp @ 0x1C0008D38 (SidebandDispatchIrp.c)
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C0009350 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?CancelPendingIrps@CSidebandDevice@@UEAAJXZ @ 0x1C0009570 (-CancelPendingIrps@CSidebandDevice@@UEAAJXZ.c)
 *     ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C0009610 (-DeInitIoQueue@CSidebandDevice@@UEAAJXZ.c)
 *     ?PublishInterface@CSidebandDevice@@UEAAJXZ @ 0x1C00097C0 (-PublishInterface@CSidebandDevice@@UEAAJXZ.c)
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C0009920 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 *     ?GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z @ 0x1C0009B70 (-GetNumberOfEndpointsInDevice@CSidebandDevice@@AEAAJPEAK@Z.c)
 *     ?GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z @ 0x1C0009E8C (-GetNodesInPath@CSidebandDevice@@AEAAJKKPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C000A024 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C000A210 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z @ 0x1C000A508 (-IsFeedbackSupported@CSidebandDevice@@AEAAJPEAU_KSDEVICE@@KPEAH@Z.c)
 *     ?GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z @ 0x1C000A750 (-GetEndpointCapabilities@CSidebandDevice@@AEAAJKPEAU_SIDEBANDAUDIO_ENDPOINT_CAPABILITIES@@@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000AAE4 (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRIPTOR_EX@@PEAEPEAK3@Z @ 0x1C000AC68 (-IntersectDataFormatsWithDataRange@CSidebandDevice@@AEAAJPEAPEATKSDATAFORMAT@@KPEAU_KSPIN_DESCRI.c)
 *     ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C000AE5C (-GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C000B0D8 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000B4D0 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x1C000B5F0 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000B6F0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B988 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000BCC0 (-GetVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BEB4 (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C0D0 (-GetMutePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C2C4 (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z @ 0x1C000C538 (-GetSidetoneVolumePropertyBasicSupport@CSidebandDevice@@AEAAJKPEAKPEAX@Z.c)
 *     ?IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000C760 (-IrpMJCreateHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000C8E0 (-IrpMJCloseHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000CA70 (-IrpMJIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000CBC0 (-IrpMJInternalIoControlHandler@CSidebandDevice@@UEAAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CD2C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DA00 (-GetDeviceDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DBC4 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E104 (-SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E6C0 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000ED94 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F0A4 (-StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F260 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F554 (-StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000F85C (-StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FA70 (-GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FC20 (-GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000FF3C (-SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00101EC (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00104D4 (-GetErrorStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     IsSidebandSupported @ 0x1C0022728 (IsSidebandSupported.c)
 *     DeviceStart @ 0x1C00228A0 (DeviceStart.c)
 *     UsbAudioIrpDispatcher @ 0x1C00238A0 (UsbAudioIrpDispatcher.c)
 *     PropertySetFeatureValue @ 0x1C0028960 (PropertySetFeatureValue.c)
 *     PropertySetBoolean @ 0x1C0028BB0 (PropertySetBoolean.c)
 *     PropertyGetBoolean @ 0x1C0028DD0 (PropertyGetBoolean.c)
 *     PropertySetDbLevel @ 0x1C0029280 (PropertySetDbLevel.c)
 *     PropertyGetDbLevel @ 0x1C00294D0 (PropertyGetDbLevel.c)
 *     USBDeviceGetOffloadCapability @ 0x1C002C6B0 (USBDeviceGetOffloadCapability.c)
 *     USBHwGetTransportResources @ 0x1C002D2C0 (USBHwGetTransportResources.c)
 *     USBHwSetTransportResources @ 0x1C002D5B0 (USBHwSetTransportResources.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C002D75C (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBCntrlGetSetDbLevel @ 0x1C00316A0 (USBCntrlGetSetDbLevel.c)
 *     USBCntrlGetSetBoolean @ 0x1C0031A90 (USBCntrlGetSetBoolean.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v11, va);
}
