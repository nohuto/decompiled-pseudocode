int __fastcall FxPkgFdo::Initialize(FxPkgFdo *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  __int64 v5; // rdx
  unsigned __int8 v6; // r8
  FxObject **p_m_StaticDeviceList; // rsi
  int v8; // eax
  FxObject *v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  _WDF_CHILD_LIST_CONFIG config; // [rsp+40h] [rbp-68h] BYREF
  WDFCHILDLIST__ *hList; // [rsp+B0h] [rbp+8h] BYREF

  hList = 0LL;
  m_Globals = this->m_Globals;
  result = FxPkgPnp::Initialize(this, DeviceInit);
  if ( result >= 0 )
  {
    result = FxPkgPnp::AllocateEnumInfo(this, v5, v6);
    if ( result >= 0 )
    {
      memset(&config, 0, sizeof(config));
      config.EvtChildListCreateDevice = 0LL;
      config.Size = 96;
      config.IdentificationDescriptionSize = 16;
      result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, &config, (unsigned __int64 *)&hList);
      if ( result >= 0 )
      {
        p_m_StaticDeviceList = &this->m_StaticDeviceList;
        result = FxChildList::_CreateAndInit(
                   &this->m_StaticDeviceList,
                   m_Globals,
                   0LL,
                   (unsigned __int64)hList,
                   this->m_Device,
                   &config,
                   1u);
        if ( result >= 0 )
        {
          v8 = FxObject::Commit(
                 *p_m_StaticDeviceList,
                 0LL,
                 (void **)&hList,
                 (_FX_DRIVER_GLOBALS *)this->m_DeviceBase,
                 1u);
          v9 = *p_m_StaticDeviceList;
          v10 = v8;
          if ( v8 >= 0 )
          {
            FxObject::AddRef(v9, this, 447, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\km\\fxpkgfdokm.cpp");
          }
          else
          {
            FxObject::ClearEvtCallbacks(v9);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
            *p_m_StaticDeviceList = 0LL;
          }
          return v10;
        }
      }
    }
  }
  return result;
}
