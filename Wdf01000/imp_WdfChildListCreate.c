int __fastcall imp_WdfChildListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DeviceListAttributes,
        WDFCHILDLIST__ **DeviceList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v9; // rdi
  int result; // eax
  int v11; // esi
  FxChildList *v12; // rsi
  signed int v13; // eax
  signed int v14; // edi
  FxChildList *pList; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  FxDevice *pDevice; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 totalDescriptionSize; // [rsp+90h] [rbp+40h] BYREF

  pDevice = 0LL;
  pList = 0LL;
  totalDescriptionSize = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xAu, WPP_FxChildListAPI_cpp_Traceguids, Device);
  if ( !Config )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v9 = (void **)DeviceList;
  if ( !DeviceList )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *DeviceList = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    v11 = FxChildList::_ValidateConfig(m_Globals, Config, &totalDescriptionSize);
    if ( v11 >= 0 )
    {
      result = FxValidateObjectAttributes(m_Globals, DeviceListAttributes, 1);
      if ( result >= 0 )
      {
        result = pDevice->AllocateEnumInfo(pDevice);
        if ( result >= 0 )
        {
          result = FxChildList::_CreateAndInit(
                     &pList,
                     m_Globals,
                     DeviceListAttributes,
                     totalDescriptionSize,
                     pDevice,
                     Config,
                     0);
          if ( result >= 0 )
          {
            v12 = pList;
            v13 = FxObject::Commit(pList, DeviceListAttributes, v9, (_FX_DRIVER_GLOBALS *)pDevice, 1u);
            v14 = v13;
            if ( v13 >= 0 )
            {
              pDevice->SetDeviceTelemetryInfoFlags(pDevice, DeviceInfoHasDynamicChildren);
            }
            else
            {
              WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0xCu, WPP_FxChildListAPI_cpp_Traceguids, v13);
              FxObject::ClearEvtCallbacks(v12);
              ((void (*)(void))v12->DeleteObject)();
            }
            return v14;
          }
        }
      }
    }
    else
    {
      WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0xBu, WPP_FxChildListAPI_cpp_Traceguids, Device);
      return v11;
    }
  }
  return result;
}
