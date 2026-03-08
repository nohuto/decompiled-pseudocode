/*
 * XREFs of ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C003EB40
 * Callers:
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C002FD80 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C0031C30 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0051FC0 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 * Callees:
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0001B44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C003D0B0 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 */

__int64 __fastcall FxDevice::_AllocAndQueryProperty(
        _FX_DRIVER_GLOBALS *Globals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        _DEVICE_OBJECT *RemotePdo,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  NTSTATUS _a2; // eax
  unsigned int v13; // edi
  signed int _a1; // eax
  FxMemoryObject *v15; // rsi
  void *v16; // rax
  NTSTATUS v17; // eax
  signed int v18; // eax
  unsigned int length; // [rsp+40h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+48h] [rbp-20h] BYREF

  pMemory = 0LL;
  length = 0;
  _a2 = FxDevice::_QueryProperty(Globals, DeviceInit, Device, RemotePdo, DeviceProperty, 0, 0LL, &length);
  v13 = _a2;
  if ( _a2 == -1073741789 )
  {
    _a1 = FxMemoryObject::_Create(Globals, PropertyMemoryAttributes, PoolType, Globals->Tag, length, &pMemory);
    v13 = _a1;
    if ( _a1 >= 0 )
    {
      v15 = pMemory;
      v16 = (void *)pMemory->GetBuffer(&pMemory->IFxMemory);
      v17 = FxDevice::_QueryProperty(Globals, DeviceInit, Device, RemotePdo, DeviceProperty, length, v16, &length);
      v13 = v17;
      if ( v17 >= 0 )
      {
        v18 = FxObject::Commit(v15, PropertyMemoryAttributes, (void **)PropertyMemory, 0LL, 1u);
        v13 = v18;
        if ( v18 >= 0 )
          return v13;
        WPP_IFR_SF_D(Globals, 2u, 0x12u, 0x12u, WPP_FxDevice_cpp_Traceguids, v18);
      }
      else
      {
        WPP_IFR_SF_DDd(Globals, length, 0x12u, 0x11u, WPP_FxDevice_cpp_Traceguids, length, DeviceProperty, v17);
      }
      v15->DeleteObject(v15);
      return v13;
    }
    WPP_IFR_SF_D(Globals, 2u, 0x12u, 0x10u, WPP_FxDevice_cpp_Traceguids, _a1);
  }
  else
  {
    WPP_IFR_SF_dd(Globals, 2u, 0x12u, 0xFu, WPP_FxDevice_cpp_Traceguids, DeviceProperty, _a2);
  }
  return v13;
}
