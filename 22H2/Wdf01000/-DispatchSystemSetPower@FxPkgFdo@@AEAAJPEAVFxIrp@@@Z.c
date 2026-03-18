/*
 * XREFs of ?DispatchSystemSetPower@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0010F04
 * Callers:
 *     ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0010E50 (-_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00101E0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z @ 0x1C001D3EC (-SaveStateFromSystemPowerIrp@FxDevicePowerIrpTracker@@QEAAXPEAVFxIrp@@@Z.c)
 */

NTSTATUS __fastcall FxPkgFdo::DispatchSystemSetPower(FxPkgFdo *this, FxIrp *Irp)
{
  _DEVICE_OBJECT *m_DeviceObject; // rbx
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v7; // rcx
  _IO_STACK_LOCATION *v9; // rcx
  _IO_STACK_LOCATION *v10; // rcx

  m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  this->m_SystemPowerState = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart;
  PoSetPowerState(
    m_DeviceObject,
    SystemPowerState,
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Power.State);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner )
    return FxPkgFdo::_PowerPassDown(this, Irp);
  FxDevicePowerIrpTracker::SaveStateFromSystemPowerIrp(&m_Owner->m_DevicePowerIrpTracker, Irp);
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( this->m_SystemPowerState == 1 )
  {
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(
           m_DeviceObject,
           Irp->m_Irp,
           (PIO_COMPLETION_ROUTINE)FxPkgFdo::_SystemPowerS0Completion,
           this,
           1u,
           1u,
           1u) < 0 )
    {
      v7 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v7[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgFdo::_SystemPowerS0Completion;
      v7[-1].Context = this;
      v7[-1].Control = -32;
    }
    return PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
  }
  else
  {
    CurrentStackLocation->Control |= 1u;
    this->m_PendingSystemPowerIrp = Irp->m_Irp;
    v9 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v9[-1].MajorFunction = *(_OWORD *)&v9->MajorFunction;
    *(_OWORD *)&v9[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v9->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v9[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v9->Parameters.SetQuota + 6);
    v9[-1].FileObject = v9->FileObject;
    v9[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(
           m_DeviceObject,
           Irp->m_Irp,
           (PIO_COMPLETION_ROUTINE)FxPkgFdo::_SystemPowerSxCompletion,
           this,
           1u,
           1u,
           1u) < 0 )
    {
      v10 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v10[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgFdo::_SystemPowerSxCompletion;
      v10[-1].Context = this;
      v10[-1].Control = -32;
    }
    PoCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
    return 259;
  }
}
