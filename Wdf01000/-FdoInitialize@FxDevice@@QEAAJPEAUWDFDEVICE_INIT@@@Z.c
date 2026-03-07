int __fastcall FxDevice::FdoInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  int (__fastcall *EvtDeviceFilterAddResourceRequirements)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int result; // eax
  FxPkgFdo *v7; // rdx
  _WDF_OBJECT_ATTRIBUTES *p_ListConfigAttributes; // r8
  FxPkgPnp *m_PkgPnp; // rcx
  _DEVICE_OBJECT *v10; // rax
  FxPkgFdo *pkgFdo; // [rsp+40h] [rbp+8h] BYREF

  EvtDeviceFilterAddResourceRequirements = DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterAddResourceRequirements;
  m_Globals = this->m_Globals;
  pkgFdo = 0LL;
  if ( EvtDeviceFilterAddResourceRequirements && !DeviceInit->Fdo.EventCallbacks.EvtDeviceRemoveAddedResources )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xAu, WPP_FxDeviceKm_cpp_Traceguids, EvtDeviceFilterAddResourceRequirements);
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741436;
  }
  FxObject::MarkNoDeleteDDI(this, ObjectLock);
  this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject = DeviceInit->Fdo.PhysicalDevice;
  this->m_PdoKnown = 1;
  result = FxPkgFdo::_Create(m_Globals, this, &pkgFdo);
  if ( result >= 0 )
  {
    v7 = pkgFdo;
    this->m_PkgPnp = pkgFdo;
    FxDevice::InstallPackage(this, v7);
    result = FxDevice::SetFilter(this, DeviceInit->Fdo.Filter);
    if ( result >= 0 )
    {
      result = this->m_PkgPnp->Initialize(this->m_PkgPnp, DeviceInit);
      if ( result >= 0 )
      {
        if ( !DeviceInit->Fdo.ListConfig.Size )
        {
LABEL_12:
          if ( DeviceInit->Fdo.EventCallbacks.Size )
          {
            m_PkgPnp = this->m_PkgPnp;
            m_PkgPnp[1].m_ChildEntry.Flink = (_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterAddResourceRequirements;
            m_PkgPnp[1].m_ChildEntry.Blink = (_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterRemoveResourceRequirements;
            m_PkgPnp[1].m_DisposeSingleEntry.Next = (_SINGLE_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceRemoveAddedResources;
          }
          result = FxDevice::CreateDevice(this, DeviceInit);
          if ( result >= 0 )
          {
            v10 = IoAttachDeviceToDeviceStack(
                    this->m_DeviceObject.m_DeviceObject,
                    this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject);
            this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = v10;
            if ( v10 )
            {
              if ( this->m_Filter )
              {
                FxDevice::SetFilterIoType(this);
                this->m_DeviceObject.m_DeviceObject->Flags |= this->m_AttachedDevice.FxDeviceBase::m_DeviceObject->Flags & 0x6000;
                this->m_DeviceObject.m_DeviceObject->DeviceType = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject->DeviceType;
                this->m_DeviceObject.m_DeviceObject->Characteristics = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject->Characteristics;
                if ( (this->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 )
                  this->m_PowerPageableCapable = 1;
              }
              else if ( DeviceInit->PowerPageable )
              {
                this->m_DeviceObject.m_DeviceObject->Flags |= 0x2000u;
              }
              else if ( DeviceInit->Inrush )
              {
                this->m_DeviceObject.m_DeviceObject->Flags |= 0x4000u;
              }
              result = FxWmiIrpHandler::PostCreateDeviceInitialize(this->m_PkgWmi);
              if ( result >= 0 )
              {
                result = FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
                if ( result >= 0 )
                  return FxPkgFdo::PostCreateDeviceInitialize((FxPkgFdo *)this->m_PkgPnp);
              }
            }
            else
            {
              IoDeleteDevice(this->m_DeviceObject.m_DeviceObject);
              result = -1073741810;
              this->m_DeviceObject.m_DeviceObject = 0LL;
            }
          }
          return result;
        }
        p_ListConfigAttributes = &DeviceInit->Fdo.ListConfigAttributes;
        if ( !DeviceInit->Fdo.ListConfigAttributes.Size )
          p_ListConfigAttributes = 0LL;
        result = FxPkgFdo::CreateDefaultDeviceList(
                   (FxPkgFdo *)this->m_PkgPnp,
                   &DeviceInit->Fdo.ListConfig,
                   p_ListConfigAttributes);
        if ( result >= 0 )
        {
          this->SetDeviceTelemetryInfoFlags(this, DeviceInfoHasDynamicChildren);
          goto LABEL_12;
        }
      }
    }
  }
  return result;
}
