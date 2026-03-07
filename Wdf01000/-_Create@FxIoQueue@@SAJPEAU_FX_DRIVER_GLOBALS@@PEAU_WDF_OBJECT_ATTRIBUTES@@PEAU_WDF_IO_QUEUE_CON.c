__int64 __fastcall FxIoQueue::_Create(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_IO_QUEUE_CONFIG *Config,
        FxDriver *Caller,
        FxPkgIo *PkgIo,
        unsigned __int8 InitialPowerStateOn,
        FxIoQueue **Object)
{
  FxIoQueue *v11; // rax
  FxIoQueue *v12; // rax
  FxIoQueue *v13; // rbx
  signed int _a1; // eax
  unsigned int v15; // edi
  FxPoolTypeOrPoolFlags v17; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v17.UsePoolType = 0LL;
  v17.u.PoolFlags = 64LL;
  *Object = 0LL;
  v11 = (FxIoQueue *)FxObjectHandleAllocCommon(DriverGlobals, &v17, 0x3A8uLL, 0, Attributes, 0, FxObjectTypeExternal);
  if ( v11 && (FxIoQueue::FxIoQueue(v11, DriverGlobals, PkgIo), (v13 = v12) != 0LL) )
  {
    _a1 = FxIoQueue::Initialize(v12, Config, Attributes, Caller, InitialPowerStateOn);
    v15 = _a1;
    if ( _a1 >= 0 )
    {
      *Object = v13;
    }
    else
    {
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xDu, 0xBu, WPP_FxIoQueue_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v13);
      v13->DeleteObject(v13);
    }
    return v15;
  }
  else
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xDu, 0xAu, WPP_FxIoQueue_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
