__int64 __fastcall FxPkgFdo::CreateDefaultDeviceList(
        FxPkgFdo *this,
        _WDF_CHILD_LIST_CONFIG *ListConfig,
        _WDF_OBJECT_ATTRIBUTES *ListAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  FxObject **p_m_DefaultDeviceList; // rdi
  int v9; // esi
  __int64 v10; // rcx
  WDFCHILDLIST__ *hList; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  hList = 0LL;
  result = FxChildList::_ComputeTotalDescriptionSize(m_Globals, ListConfig, (unsigned __int64 *)&hList);
  if ( (int)result >= 0 )
  {
    p_m_DefaultDeviceList = &this->m_DefaultDeviceList;
    result = FxChildList::_CreateAndInit(
               &this->m_DefaultDeviceList,
               m_Globals,
               ListAttributes,
               (unsigned __int64)hList,
               this->m_Device,
               ListConfig,
               0);
    if ( (int)result >= 0 )
    {
      v9 = FxObject::Commit(
             *p_m_DefaultDeviceList,
             ListAttributes,
             (void **)&hList,
             (_FX_DRIVER_GLOBALS *)this->m_DeviceBase,
             1u);
      if ( v9 >= 0 )
      {
        FxObject::AddRef(
          *p_m_DefaultDeviceList,
          this,
          882,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp");
      }
      else
      {
        WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0x16u, WPP_fxpkgfdo_cpp_Traceguids);
        FxObject::ClearEvtCallbacks(*p_m_DefaultDeviceList);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
        *p_m_DefaultDeviceList = 0LL;
      }
      return (unsigned int)v9;
    }
  }
  return result;
}
