/*
 * XREFs of ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0078F64
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0073160 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     memset @ 0x1C000AC00 (memset.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002BA14 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

void __fastcall FxPkgPnp::QueryForD3ColdInterface(FxPkgPnp *this)
{
  _IRP *v1; // rbx
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a1; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  _DEVICE_OBJECT *v6; // rbp
  PIRP v7; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxAutoIrp irp; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !this->m_D3ColdInterface.InterfaceDereference
    && !this->m_D3ColdInterface.GetIdleWakeInfo
    && !this->m_D3ColdInterface.SetD3ColdSupport )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
    if ( _a1 )
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
      v6 = AttachedDeviceReference;
      if ( AttachedDeviceReference )
      {
        v7 = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
        irp.m_Irp = v7;
        v1 = v7;
        if ( v7 )
        {
          v7->IoStatus.Status = -1073741637;
          memset(&v7->Tail.Overlay.CurrentStackLocation[-1], 0, sizeof(v7->Tail.Overlay.CurrentStackLocation[-1]));
          v1->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 27;
          v1->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 8;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_D3COLD_SUPPORT_INTERFACE;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryInterface.Version = 1;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryInterface.Size = 72;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
          v1->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&this->m_D3ColdInterface;
          if ( FxIrp::SendIrpSynchronously(&irp, v6) < 0 )
          {
            m_Globals = this->m_Globals;
            if ( m_Globals->FxVerboseOn )
              WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xFu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
            memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
          }
        }
        else
        {
          WPP_IFR_SF_q(this->m_Globals, 2u, 0xCu, 0xEu, WPP_FxPkgPnpKM_cpp_Traceguids, _a1);
        }
      }
      ObfDereferenceObject(v6);
      if ( v1 )
        IoFreeIrp(v1);
    }
  }
}
