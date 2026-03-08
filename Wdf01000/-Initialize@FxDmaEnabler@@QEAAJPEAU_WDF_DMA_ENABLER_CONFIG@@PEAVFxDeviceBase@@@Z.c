/*
 * XREFs of ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C001B2B0
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1C0018680 (imp_WdfDmaEnablerCreate.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C001AD90 (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C001BC1C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_dLd @ 0x1C001BD28 (WPP_IFR_SF_dLd.c)
 */

__int64 __fastcall FxDmaEnabler::Initialize(FxDmaEnabler *this, _WDF_DMA_ENABLER_CONFIG *Config, FxDeviceBase *Device)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  FxDeviceBase_vtbl *v7; // rax
  unsigned int v8; // r12d
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  int _a2; // edi
  const void *_a1; // rax
  unsigned __int8 v15; // r13
  _WDF_DMA_PROFILE Profile; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v25; // rdx
  FxDeviceBase_vtbl *v26; // rax
  unsigned __int8 v27; // di
  void (__fastcall *SetDeviceTelemetryInfoFlags)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  unsigned int AddressWidthOverride; // ecx
  unsigned __int16 v30; // r9
  unsigned int WdmDmaVersionOverride; // eax
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v33; // r10
  __int16 v34; // r8
  unsigned __int16 v35; // r9
  bool v36; // zf
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase *v38; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  int globals; // [rsp+38h] [rbp-48h]
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+40h] [rbp-40h] BYREF

  m_Globals = this->m_Globals;
  memset(&deviceDescription, 0, sizeof(deviceDescription));
  v7 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 2;
  deviceDescription.Version = 2;
  v9 = v7->AllocateDmaEnablerList(Device);
  v12 = 0LL;
  _a2 = v9;
  if ( v9 >= 0 )
  {
    LOBYTE(v10) = *((_BYTE *)this + 380);
    v15 = 1;
    this->m_DeviceBase = Device;
    Profile = Config->Profile;
    LOBYTE(v11) = v10 | 4;
    this->m_Profile = Profile;
    deviceDescription.Master = 1;
    deviceDescription.Dma32BitAddresses = 1;
    deviceDescription.InterfaceType = PCIBus;
    *((_BYTE *)this + 380) = v10 | 4;
    v17 = Profile - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          deviceDescription.ScatterGather = 0;
          v27 = 1;
          deviceDescription.Dma64BitAddresses = 1;
          goto LABEL_24;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          LOBYTE(v10) = v10 | 0xC;
          goto LABEL_19;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              if ( v23 != 1 )
                return 3221225485LL;
              v25 = 128LL;
              *((_BYTE *)this + 380) = v11 & 0xEB | 0x10;
            }
            else
            {
              *((_BYTE *)this + 380) = v10 & 0xFB;
              v25 = 64LL;
            }
            v26 = Device->FxNonPagedObject::FxObject::__vftable;
            v8 = 3;
            deviceDescription.Version = 3;
            deviceDescription.Dma64BitAddresses = 0;
            v27 = 0;
            deviceDescription.Dma32BitAddresses = 0;
            v15 = 0;
            SetDeviceTelemetryInfoFlags = v26->SetDeviceTelemetryInfoFlags;
            *(_WORD *)&deviceDescription.Master = 0;
            SetDeviceTelemetryInfoFlags(Device, (FxDeviceInfoFlags)v25);
            v12 = 0LL;
LABEL_24:
            this->m_MaximumLength = Config->MaximumLength;
            AddressWidthOverride = Config->AddressWidthOverride;
            if ( AddressWidthOverride )
            {
              if ( (*((_BYTE *)this + 380) & 4) == 0 )
              {
                v30 = 11;
LABEL_27:
                WPP_IFR_SF_dLd(
                  this->m_Globals,
                  v10,
                  v11,
                  v30,
                  traceGuid,
                  AddressWidthOverride,
                  Config->Profile,
                  globals);
LABEL_28:
                FxVerifierDbgBreakPoint(this->m_Globals);
                return 3221225485LL;
              }
              if ( !v27 && AddressWidthOverride > 0x20 )
              {
                v30 = 12;
                goto LABEL_27;
              }
              if ( HIDWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext) > 6
                || HIDWORD(WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext) == 6
                && WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters >= 2 )
              {
                v8 = 3;
                deviceDescription.DmaAddressWidth = Config->AddressWidthOverride;
                deviceDescription.Version = 3;
              }
              else
              {
                if ( AddressWidthOverride < 0x40 )
                  v27 = 0;
                deviceDescription.Dma64BitAddresses = v27;
                if ( AddressWidthOverride < 0x20 )
                  v15 = 0;
                deviceDescription.Dma32BitAddresses = v15;
                if ( AddressWidthOverride < 0x18 )
                {
                  WPP_IFR_SF_(this->m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaEnabler_cpp_Traceguids);
                  return 3221225473LL;
                }
                if ( ((AddressWidthOverride - 32) & 0xFFFFFFDF) != 0 )
                {
                  WPP_IFR_SF_dd(
                    this->m_Globals,
                    3u,
                    0xFu,
                    0xEu,
                    WPP_FxDmaEnabler_cpp_Traceguids,
                    AddressWidthOverride,
                    8 * v15 + 24);
                  v12 = 0LL;
                }
              }
            }
            WdmDmaVersionOverride = Config->WdmDmaVersionOverride;
            if ( WdmDmaVersionOverride )
            {
              if ( WdmDmaVersionOverride < v8 )
              {
                WPP_IFR_SF_DDd(
                  this->m_Globals,
                  v10,
                  0xFu,
                  0xFu,
                  WPP_FxDmaEnabler_cpp_Traceguids,
                  WdmDmaVersionOverride,
                  v8,
                  -1073741811);
                goto LABEL_28;
              }
              v8 = Config->WdmDmaVersionOverride;
              deviceDescription.Version = v8;
            }
            if ( v8 >= 3 && !deviceDescription.DmaAddressWidth )
            {
              if ( v27 )
                deviceDescription.DmaAddressWidth = 64;
              else
                deviceDescription.DmaAddressWidth = v15 != 0 ? 32 : 24;
            }
            if ( (Config->Flags & 2) != 0 )
            {
              if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v10, 0x13u) )
              {
                ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
                v35 = 17;
                goto LABEL_57;
              }
              if ( v8 != 3 )
              {
                ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
                v35 = v34 - 3;
LABEL_57:
                WPP_IFR_SF_qd(v33, 2u, 0xFu, v35, WPP_FxDmaEnabler_cpp_Traceguids, ObjectHandleUnchecked, -1073741811);
                goto LABEL_28;
              }
              *((_BYTE *)this + 380) |= 0x40u;
            }
            v36 = (*((_BYTE *)this + 380) & 4) == 0;
            m_DeviceBase = this->m_DeviceBase;
            this->m_FDO = m_DeviceBase->m_DeviceObject.m_DeviceObject;
            this->m_PDO = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
            if ( v36 || (_a2 = FxDmaEnabler::ConfigureBusMasterAdapters(this, &deviceDescription, Config), _a2 >= 0) )
            {
              v38 = this->m_DeviceBase;
              this->m_EvtDmaEnablerFill.m_Method = Config->EvtDmaEnablerFill;
              this->m_EvtDmaEnablerFlush.m_Method = Config->EvtDmaEnablerFlush;
              this->m_EvtDmaEnablerEnable.m_Method = Config->EvtDmaEnablerEnable;
              this->m_EvtDmaEnablerDisable.m_Method = Config->EvtDmaEnablerDisable;
              this->m_EvtDmaEnablerSelfManagedIoStart.m_Method = Config->EvtDmaEnablerSelfManagedIoStart;
              this->m_EvtDmaEnablerSelfManagedIoStop.m_Method = Config->EvtDmaEnablerSelfManagedIoStop;
              ((void (__fastcall *)(FxDeviceBase *, FxDmaEnabler *, __int64, __int64))v38->AddDmaEnabler)(
                v38,
                this,
                v11,
                v12);
              *((_BYTE *)this + 380) |= 1u;
              if ( (*((_BYTE *)this + 380) & 4) != 0 )
                this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoDmaBusMaster);
              return 0;
            }
            else
            {
              FxDmaEnabler::ReleaseResources(this);
            }
            return (unsigned int)_a2;
          }
          LOBYTE(v10) = v10 | 0x1C;
LABEL_19:
          deviceDescription.Dma64BitAddresses = 1;
          v27 = 1;
          deviceDescription.ScatterGather = 1;
          *((_BYTE *)this + 380) = v10;
          goto LABEL_24;
        }
        LOBYTE(v10) = v10 | 0x1C;
      }
      else
      {
        LOBYTE(v10) = v10 | 0xC;
      }
      deviceDescription.ScatterGather = 1;
      *((_BYTE *)this + 380) = v10;
    }
    else
    {
      deviceDescription.ScatterGather = 0;
    }
    v27 = 0;
    deviceDescription.Dma64BitAddresses = 0;
    goto LABEL_24;
  }
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Device);
  WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xAu, WPP_FxDmaEnabler_cpp_Traceguids, _a1, _a2);
  return (unsigned int)_a2;
}
