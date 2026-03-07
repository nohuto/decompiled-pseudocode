__int64 __fastcall FxDevice::_AllocAndQueryPropertyEx(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        void *PropertyData,
        unsigned int PoolType,
        _POOL_TYPE PropertyMemoryAttributes,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemory,
        WDFMEMORY__ **PropertyType,
        unsigned int *DriverGlobals_0)
{
  signed int _a1; // edi
  unsigned __int16 v13; // r9
  void **v15; // r14
  unsigned int *v16; // rbp
  unsigned __int64 v17; // rsi
  _POOL_TYPE v18; // r8d
  _WDF_OBJECT_ATTRIBUTES *v19; // rdx
  FxMemoryObject *v20; // rdi
  IFxMemory *v21; // r15
  void *ResultLength; // rax
  int v23; // eax
  unsigned int v24; // r12d
  signed int v25; // eax
  unsigned int v26; // esi
  unsigned int traceGuid; // [rsp+20h] [rbp-68h]
  unsigned int traceGuida; // [rsp+20h] [rbp-68h]
  unsigned int propType; // [rsp+50h] [rbp-38h] BYREF
  FxMemoryObject *pMemory; // [rsp+58h] [rbp-30h] BYREF

  pMemory = 0LL;
  propType = 0;
  PoolType = 0;
  _a1 = FxDevice::_QueryPropertyEx(
          DriverGlobals,
          DeviceInit,
          Device,
          PropertyData,
          traceGuid,
          0,
          0LL,
          &PoolType,
          &propType);
  if ( _a1 != -1073741789 )
  {
    v13 = 19;
LABEL_3:
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, v13, WPP_FxDevice_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
  }
  v15 = (void **)PropertyType;
  v16 = DriverGlobals_0;
  v17 = PoolType;
  v18 = PropertyMemoryAttributes;
  v19 = PropertyMemory;
  *PropertyType = 0LL;
  *v16 = 0;
  _a1 = FxMemoryObject::_Create(DriverGlobals, v19, v18, DriverGlobals->Tag, v17, &pMemory);
  if ( _a1 < 0 )
  {
    v13 = 20;
    goto LABEL_3;
  }
  v20 = pMemory;
  v21 = &pMemory->IFxMemory;
  ResultLength = (void *)pMemory->GetBuffer(&pMemory->IFxMemory);
  v23 = FxDevice::_QueryPropertyEx(
          DriverGlobals,
          DeviceInit,
          Device,
          PropertyData,
          traceGuida,
          v17,
          ResultLength,
          &PoolType,
          &propType);
  v24 = v23;
  if ( v23 >= 0 )
  {
    v25 = FxObject::Commit(v20, PropertyMemory, v15, 0LL, 1u);
    v26 = v25;
    if ( v25 >= 0 )
    {
      *v15 = v21->GetHandle(v21);
      *v16 = propType;
    }
    else
    {
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x16u, WPP_FxDevice_cpp_Traceguids, v25);
      v20->DeleteObject(v20);
    }
    return v26;
  }
  else
  {
    WPP_IFR_SF_dd(DriverGlobals, 2u, 0xCu, 0x15u, WPP_FxDevice_cpp_Traceguids, v17, v23);
    v20->DeleteObject(v20);
    return v24;
  }
}
