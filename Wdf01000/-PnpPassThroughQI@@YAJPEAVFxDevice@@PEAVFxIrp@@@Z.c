/*
 * XREFs of ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x1C0073FE0
 * Callers:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0072CCC (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C0078EC0 (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 */

__int64 __fastcall PnpPassThroughQI(FxDevice *Device, FxIrp *Irp)
{
  int Status; // r15d
  _DEVICE_OBJECT *_a2; // rbx
  _IRP *v6; // rax
  _IRP *v7; // rbp
  unsigned int v8; // edi
  const void *_a1; // rax
  FxAutoIrp fxFwdIrp; // [rsp+70h] [rbp+8h] BYREF
  MxDeviceObject pTopOfStack; // [rsp+78h] [rbp+10h] BYREF

  Status = Irp->m_Irp->IoStatus.Status;
  pTopOfStack.m_DeviceObject = IoGetAttachedDeviceReference(Device->m_ParentDevice->m_DeviceObject.m_DeviceObject);
  _a2 = pTopOfStack.m_DeviceObject;
  v6 = IoAllocateIrp(pTopOfStack.m_DeviceObject->StackSize, 0);
  v7 = v6;
  if ( v6 )
  {
    fxFwdIrp.m_Irp = v6;
    PnpPassThroughQIWorker(&pTopOfStack, Irp, &fxFwdIrp);
    v8 = v7->IoStatus.Status;
    if ( v8 == -1073741637 )
      v8 = Status;
    Irp->m_Irp->IoStatus.Status = v8;
    Irp->m_Irp->IoStatus.Information = v7->IoStatus.Information;
    IoFreeIrp(v7);
  }
  else
  {
    v8 = -1073741670;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Device);
    WPP_IFR_SF_qid(
      Device->m_Globals,
      2u,
      0xCu,
      0x24u,
      (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      (__int64)_a2,
      -1073741670);
  }
  ObfDereferenceObject(_a2);
  return v8;
}
