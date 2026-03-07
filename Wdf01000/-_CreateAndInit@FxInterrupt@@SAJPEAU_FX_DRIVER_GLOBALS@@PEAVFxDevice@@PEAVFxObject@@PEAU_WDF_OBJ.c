__int64 __fastcall FxInterrupt::_CreateAndInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        FxDevice *Parent,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_INTERRUPT_CONFIG *Configuration,
        FxInterrupt **Interrupt)
{
  FxInterrupt *v10; // rax
  FxInterrupt *v11; // rax
  FxInterrupt *v12; // rbx
  FxDevice *v13; // rbp
  int WakeInterruptMachine; // edi
  signed int _a1; // eax
  FxPoolTypeOrPoolFlags v17; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v17.UsePoolType = 0LL;
  v17.u.PoolFlags = 64LL;
  v10 = (FxInterrupt *)FxObjectHandleAllocCommon(
                         FxDriverGlobals,
                         &v17,
                         0x1C8uLL,
                         0,
                         Attributes,
                         0,
                         FxObjectTypeExternal);
  if ( v10 )
  {
    FxInterrupt::FxInterrupt(v10, FxDriverGlobals);
    v12 = v11;
    if ( v11 )
    {
      v13 = Device;
      if ( Parent )
        v13 = Parent;
      WakeInterruptMachine = FxInterrupt::Initialize(v11, Device, v13, Configuration);
      if ( WakeInterruptMachine >= 0 )
      {
        _a1 = FxObject::Commit(v12, Attributes, 0LL, (_FX_DRIVER_GLOBALS *)v13, 1u);
        WakeInterruptMachine = _a1;
        if ( _a1 >= 0 )
        {
          *Interrupt = v12;
          if ( !Configuration->CanWakeDevice )
            return (unsigned int)WakeInterruptMachine;
          WakeInterruptMachine = FxInterrupt::CreateWakeInterruptMachine(v12);
          if ( WakeInterruptMachine >= 0 )
            return (unsigned int)WakeInterruptMachine;
        }
        else
        {
          WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, 0x11u, (const _GUID *)&WPP_InterruptObject_cpp_Traceguids, _a1);
        }
      }
      FxObject::ClearEvtCallbacks(v12);
      v12->DeleteObject(v12);
      return (unsigned int)WakeInterruptMachine;
    }
  }
  WPP_IFR_SF_qd(
    FxDriverGlobals,
    2u,
    0xCu,
    0x10u,
    (const _GUID *)&WPP_InterruptObject_cpp_Traceguids,
    Device,
    -1073741670);
  return 3221225626LL;
}
