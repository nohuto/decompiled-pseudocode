int __fastcall FxDevice::_OpenKey(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        ULONG DeviceInstanceKeyType,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  int result; // eax
  _DEVICE_OBJECT *PhysicalDevice; // rsi
  FxRegKey *v13; // rax
  FxObject *v14; // rax
  FxObject *v15; // rbx
  int v16; // edi
  FxObject *v17; // rcx
  const void *_a1; // rax
  void *hKey; // [rsp+40h] [rbp-38h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-30h] BYREF
  FxPoolTypeOrPoolFlags v21; // [rsp+50h] [rbp-28h] BYREF

  keyHandle = 0LL;
  hKey = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, KeyAttributes, 0);
  if ( result >= 0 )
  {
    result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
    if ( result >= 0 )
    {
      result = FxDevice::_ValidateOpenKeyParams(FxDriverGlobals, DeviceInit, Device);
      if ( result >= 0 )
      {
        if ( DeviceInit )
        {
          PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
        }
        else
        {
          PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
          if ( !PhysicalDevice )
          {
            _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v17);
            v16 = -1073741436;
            WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDeviceKm_cpp_Traceguids, _a1, -1073741436);
            return v16;
          }
        }
        *(_QWORD *)&v21.UsePoolType = 0LL;
        v21.u.PoolFlags = 64LL;
        v13 = (FxRegKey *)FxObjectHandleAllocCommon(
                            FxDriverGlobals,
                            &v21,
                            0x78uLL,
                            0,
                            KeyAttributes,
                            0,
                            FxObjectTypeExternal);
        if ( v13 )
        {
          FxRegKey::FxRegKey(v13, FxDriverGlobals);
          v15 = v14;
          if ( v14 )
          {
            if ( Device )
              v14->m_DeviceBase = Device;
            v16 = FxObject::Commit(v14, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
            if ( v16 < 0
              || (v16 = IoOpenDeviceRegistryKey(PhysicalDevice, DeviceInstanceKeyType, DesiredAccess, &hKey), v16 < 0) )
            {
              FxObject::ClearEvtCallbacks(v15);
              v15->DeleteObject(v15);
            }
            else
            {
              *(_QWORD *)&v15[1].m_Type = hKey;
              *Key = keyHandle;
            }
            return v16;
          }
        }
        return -1073741670;
      }
    }
  }
  return result;
}
