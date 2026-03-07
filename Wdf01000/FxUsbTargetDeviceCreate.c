__int64 __fastcall FxUsbTargetDeviceCreate(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDeviceBase *Device,
        unsigned int USBDClientContractVersion,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  WDFUSBDEVICE__ **v5; // rsi
  __int64 result; // rax
  FxUsbDevice *v11; // rax
  FxIoTarget *v12; // rax
  FxUsbDevice *v13; // rdi
  int inited; // ebx
  FxPoolTypeOrPoolFlags v15; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  v5 = UsbDevice;
  if ( !UsbDevice )
    FxVerifierNullBugCheck(FxDriverGlobals, retaddr);
  *UsbDevice = 0LL;
  result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(FxDriverGlobals, Attributes, 1);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)&v15.UsePoolType = 0LL;
      v15.u.PoolFlags = 64LL;
      v11 = (FxUsbDevice *)FxObjectHandleAllocCommon(
                             FxDriverGlobals,
                             &v15,
                             0x1F0uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
      if ( v11 && (FxUsbDevice::FxUsbDevice(v11, FxDriverGlobals), (v13 = (FxUsbDevice *)v12) != 0LL) )
      {
        inited = FxIoTarget::Init(v12, Device);
        if ( inited < 0
          || (UsbDevice = 0LL, inited = FxUsbDevice::InitDevice(v13, USBDClientContractVersion), inited < 0)
          || (inited = FxUsbDevice::CreateInterfaces(v13), inited < 0)
          || (inited = Device->AddIoTarget(Device, v13), inited < 0)
          || (inited = FxObject::Commit(v13, Attributes, (void **)&UsbDevice, (_FX_DRIVER_GLOBALS *)Device, 1u),
              inited < 0) )
        {
          FxObject::ClearEvtCallbacks(v13);
          v13->DeleteObject(v13);
        }
        else
        {
          *v5 = (WDFUSBDEVICE__ *)UsbDevice;
        }
        return (unsigned int)inited;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
