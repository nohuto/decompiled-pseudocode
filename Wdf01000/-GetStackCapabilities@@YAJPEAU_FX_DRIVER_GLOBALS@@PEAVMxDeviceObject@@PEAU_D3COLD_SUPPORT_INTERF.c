__int64 __fastcall GetStackCapabilities(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        MxDeviceObject *DeviceInStack,
        _D3COLD_SUPPORT_INTERFACE *D3ColdInterface,
        _STACK_DEVICE_CAPABILITIES *Capabilities)
{
  _IRP *m_Irp; // rbx
  unsigned int v9; // edi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  NTSTATUS _a2; // eax
  unsigned int v12; // edx
  __m128i si128; // xmm0
  unsigned int i; // edi
  FxIrp deepestWakeableDstate; // [rsp+78h] [rbp+10h] BYREF

  m_Irp = 0LL;
  v9 = -1073741670;
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceInStack->m_DeviceObject);
  DeviceInStack->m_DeviceObject = AttachedDeviceReference;
  if ( AttachedDeviceReference )
  {
    deepestWakeableDstate.m_Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
    m_Irp = deepestWakeableDstate.m_Irp;
    if ( deepestWakeableDstate.m_Irp )
    {
      memset(Capabilities, 0, sizeof(_STACK_DEVICE_CAPABILITIES));
      *(_DWORD *)&Capabilities->DeviceCaps.Size = 65600;
      Capabilities->DeviceCaps.Address = -1;
      Capabilities->DeviceCaps.UINumber = -1;
      m_Irp->IoStatus.Status = -1073741637;
      memset(&m_Irp->Tail.Overlay.CurrentStackLocation[-1], 0, sizeof(m_Irp->Tail.Overlay.CurrentStackLocation[-1]));
      m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 27;
      m_Irp->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 9;
      m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Capabilities;
      _a2 = FxIrp::SendIrpSynchronously(&deepestWakeableDstate, DeviceInStack->m_DeviceObject);
      v9 = _a2;
      if ( _a2 >= 0 )
      {
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        *(__m128i *)Capabilities->DeepestWakeableDstate = si128;
        *(_QWORD *)&Capabilities->DeepestWakeableDstate[4] = si128.m128i_i64[0];
        if ( D3ColdInterface
          && D3ColdInterface->GetIdleWakeInfo
          && _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(DriverGlobals, v12, 0xBu) )
        {
          LODWORD(deepestWakeableDstate.m_Irp) = 0;
          for ( i = 1; i <= 5; ++i )
          {
            if ( D3ColdInterface->GetIdleWakeInfo(
                   D3ColdInterface->Context,
                   (_SYSTEM_POWER_STATE)i,
                   (_DEVICE_WAKE_DEPTH *)&deepestWakeableDstate) >= 0 )
              Capabilities->DeepestWakeableDstate[i] = (_DEVICE_WAKE_DEPTH)deepestWakeableDstate.m_Irp;
          }
        }
        v9 = 0;
      }
      else
      {
        WPP_IFR_SF_qd(DriverGlobals, 2u, 0xCu, 0xAu, WPP_supportKM_cpp_Traceguids, DeviceInStack->m_DeviceObject, _a2);
      }
    }
  }
  if ( DeviceInStack->m_DeviceObject )
    ObfDereferenceObject(DeviceInStack->m_DeviceObject);
  if ( m_Irp )
    IoFreeIrp(m_Irp);
  return v9;
}
