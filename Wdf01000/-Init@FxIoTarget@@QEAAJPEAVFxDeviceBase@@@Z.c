/*
 * XREFs of ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C005364C
 * Callers:
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0038DFC (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0057F20 (FxUsbTargetDeviceCreate.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C005DC2C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C005F080 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x1C0052EA4 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     WPP_IFR_SF_qqqqq @ 0x1C00546D8 (WPP_IFR_SF_qqqqq.c)
 */

__int64 __fastcall FxIoTarget::Init(FxIoTarget *this, FxDeviceBase *Device)
{
  _DEVICE_OBJECT *v4; // rax
  _DEVICE_OBJECT *m_DeviceObject; // r8
  FxDriver *m_Driver; // r11
  _DEVICE_OBJECT *_a3; // rbx
  const void *_a2; // rax
  const void *_a4; // rdx
  const void *_a5; // r8
  _FX_DRIVER_GLOBALS *v12; // r10
  const void *globals; // r11

  this->m_DeviceBase = Device;
  this->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  v4 = (_DEVICE_OBJECT *)((__int64 (__fastcall *)(FxIoTarget *))this->GetTargetDeviceObject)(this);
  this->m_TargetDevice = v4;
  m_DeviceObject = Device->m_PhysicalDevice.m_DeviceObject;
  this->m_TargetPdo = m_DeviceObject;
  m_Driver = Device->m_Driver;
  _a3 = this->m_InStackDevice;
  this->m_Driver = m_Driver;
  if ( _a3 && m_Driver && v4 && m_DeviceObject )
  {
    this->m_TargetStackSize = v4->StackSize;
    this->m_TargetIoType = FxIoTarget::GetTargetIoType(this);
    return 0LL;
  }
  else
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qqqqq(
        v12,
        (unsigned __int8)_a4,
        0xEu,
        0x18u,
        (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
        _a2,
        _a3,
        _a4,
        _a5,
        globals);
    }
    return 3221225473LL;
  }
}
