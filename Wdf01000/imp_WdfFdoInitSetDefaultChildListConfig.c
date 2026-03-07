void __fastcall imp_WdfFdoInitSetDefaultChildListConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DefaultDeviceListAttributes)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  _FX_DRIVER_GLOBALS *v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 totalDescriptionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  totalDescriptionSize = 0LL;
  v7 = DeviceInit->DriverGlobals;
  v8 = DeviceInit->DriverGlobals;
  if ( !Config )
    FxVerifierNullBugCheck(v8, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(v8, 0) >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      WPP_IFR_SF_(v7, 2u, 0x12u, 0x2Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
    }
    else if ( (int)FxChildList::_ValidateConfig(v7, Config, &totalDescriptionSize) >= 0 )
    {
      if ( DefaultDeviceListAttributes )
      {
        if ( (int)FxValidateObjectAttributes(v7, DefaultDeviceListAttributes, 1) < 0 )
          goto LABEL_8;
        *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.Size = *(_OWORD *)&DefaultDeviceListAttributes->Size;
        *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.EvtDestroyCallback = *(_OWORD *)&DefaultDeviceListAttributes->EvtDestroyCallback;
        *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.ParentObject = *(_OWORD *)&DefaultDeviceListAttributes->ParentObject;
        DeviceInit->Fdo.ListConfigAttributes.ContextTypeInfo = DefaultDeviceListAttributes->ContextTypeInfo;
      }
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.Size = *(_OWORD *)&Config->Size;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListCreateDevice = *(_OWORD *)&Config->EvtChildListCreateDevice;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListIdentificationDescriptionCopy = *(_OWORD *)&Config->EvtChildListIdentificationDescriptionCopy;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListIdentificationDescriptionCleanup = *(_OWORD *)&Config->EvtChildListIdentificationDescriptionCleanup;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListAddressDescriptionCopy = *(_OWORD *)&Config->EvtChildListAddressDescriptionCopy;
      *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListAddressDescriptionCleanup = *(_OWORD *)&Config->EvtChildListAddressDescriptionCleanup;
      return;
    }
LABEL_8:
    FxVerifierDbgBreakPoint(v7);
  }
}
