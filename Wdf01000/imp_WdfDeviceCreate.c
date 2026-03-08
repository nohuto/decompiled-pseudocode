/*
 * XREFs of imp_WdfDeviceCreate @ 0x1C0032640
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001B10 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00020FC (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C003EF34 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        WDFDEVICE__ **Device)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  _FX_DRIVER_GLOBALS *v8; // rbx
  __int64 result; // rax
  WDFDEVICE_INIT *v10; // rdx
  unsigned int v11; // edi
  unsigned __int16 v12; // r9
  int v13; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDevice = 0LL;
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( !*DeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(v4, retaddr);
  v8 = (*DeviceInit)->DriverGlobals;
  *Device = 0LL;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v8, DeviceAttributes, 7);
    if ( (int)result >= 0 )
    {
      v10 = *DeviceInit;
      if ( (*DeviceInit)->CreatedDevice )
      {
        WPP_IFR_SF_q(v8, 2u, 0x12u, 0x19u, WPP_FxDeviceApi_cpp_Traceguids, Device);
        return 3221225860LL;
      }
      if ( (v10->Security.Sddl || v10->Security.DeviceClassSet)
        && !v10->DeviceName
        && (v10->Characteristics & 0x80u) == 0 )
      {
        v11 = -1073741703;
        v12 = 26;
LABEL_20:
        WPP_IFR_SF_D(v8, 2u, 0x12u, v12, WPP_FxDeviceApi_cpp_Traceguids, v11);
        return v11;
      }
      if ( v10->RequiresSelfIoTarget && v10->InitType )
      {
        v12 = 27;
LABEL_19:
        v11 = -1073741808;
        goto LABEL_20;
      }
      if ( v10->Pdo.NoPowerDependencyOnParent
        && v10->Pdo.EventCallbacks.Size
        && (v10->Pdo.EventCallbacks.EvtDeviceEnableWakeAtBus || v10->Pdo.EventCallbacks.EvtDeviceDisableWakeAtBus) )
      {
        v12 = 28;
        goto LABEL_19;
      }
      v13 = FxDevice::_Create(v8, DeviceInit, DeviceAttributes, &pDevice);
      if ( v13 >= 0 )
        *Device = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(pDevice);
      return (unsigned int)v13;
    }
  }
  return result;
}
