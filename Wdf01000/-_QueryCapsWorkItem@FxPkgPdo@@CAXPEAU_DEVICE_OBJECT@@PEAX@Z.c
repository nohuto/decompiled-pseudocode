/*
 * XREFs of ?_QueryCapsWorkItem@FxPkgPdo@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0069DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C0068B40 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0080E08 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 */

void __fastcall FxPkgPdo::_QueryCapsWorkItem(_DEVICE_OBJECT *DeviceObject, _IRP *Context)
{
  _QWORD *DeviceExtension; // rax
  struct _IO_WORKITEM *Flink; // rsi
  FxPkgPdo *v6; // rbx
  FxDeviceBase *m_DeviceBase; // rcx
  __int64 v8; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  signed int StackCapabilities; // eax
  MxDeviceObject parentDeviceObject; // [rsp+20h] [rbp-88h] BYREF
  FxIrp irp; // [rsp+28h] [rbp-80h] BYREF
  _STACK_DEVICE_CAPABILITIES parentCapabilities; // [rsp+30h] [rbp-78h] BYREF

  memset(&parentCapabilities, 0, sizeof(parentCapabilities));
  DeviceExtension = DeviceObject->DeviceExtension;
  Flink = (struct _IO_WORKITEM *)Context->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
  irp.m_Irp = Context;
  v6 = *(FxPkgPdo **)(*(DeviceExtension - 6) + 648LL);
  m_DeviceBase = v6->m_DeviceBase;
  v8 = *(_QWORD *)&m_DeviceBase[1].m_ObjectFlags;
  m_Globals = m_DeviceBase->m_Globals;
  parentDeviceObject.m_DeviceObject = *(_DEVICE_OBJECT **)(v8 + 144);
  StackCapabilities = GetStackCapabilities(m_Globals, &parentDeviceObject, 0LL, &parentCapabilities);
  if ( StackCapabilities >= 0 )
  {
    FxPkgPdo::HandleQueryCapabilities(
      v6,
      Context->Tail.Overlay.CurrentStackLocation->Parameters.DeviceCapabilities.Capabilities,
      &parentCapabilities.DeviceCaps);
    StackCapabilities = 0;
  }
  FxPkgPnp::CompletePnpRequest(v6, &irp, StackCapabilities);
  IoFreeWorkItem(Flink);
}
