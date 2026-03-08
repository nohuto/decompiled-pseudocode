/*
 * XREFs of ?PreprocessIrp@@YAJPEAVFxDevice@@PEAU_IRP@@PEAUFxIrpPreprocessInfo@@PEAX@Z @ 0x1C003E760
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0007AC0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C003DF94 (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C003F1E0 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 */

__int64 __fastcall PreprocessIrp(FxDevice *Device, _IRP *Irp, FxIrpPreprocessInfo *Info, void *DispatchContext)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int8 MajorFunction; // bp
  unsigned __int8 MinorFunction; // r14
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 ObjectHandleUnchecked; // rcx
  __int64 v12; // r9
  __int64 (__fastcall *v13)(unsigned __int64, __int64, __int64); // r11
  unsigned int v14; // eax
  unsigned int v15; // esi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Device);
  if ( *(_BYTE *)(v9 + 688) )
    v14 = v13(ObjectHandleUnchecked, v10, v12);
  else
    v14 = ((__int64 (__fastcall *)(unsigned __int64))v13)(ObjectHandleUnchecked);
  v15 = v14;
  if ( FxDevice::_RequiresRemLock(MajorFunction, MinorFunction) == FxDeviceRemLockRequired )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&Device->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return v15;
}
