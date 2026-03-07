__int64 __fastcall FxPkgFdo::_Create(_FX_DRIVER_GLOBALS *DriverGlobals, FxDevice *Device, FxPkgFdo **PkgFdo)
{
  FxPkgFdo *v6; // rax
  FxEventQueue *v7; // rax
  _FX_DRIVER_GLOBALS *v8; // rdx
  FxPkgFdo *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rdx
  int v11; // edi
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxPoolTypeOrPoolFlags v14; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&v14.UsePoolType = 0LL;
  v14.u.PoolFlags = 64LL;
  v6 = (FxPkgFdo *)FxObjectHandleAllocCommon(DriverGlobals, &v14, 0x700uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( v6 && (FxPkgFdo::FxPkgFdo(v6, DriverGlobals, Device), (v9 = (FxPkgFdo *)v7) != 0LL) )
  {
    v11 = FxEventQueue::Initialize(v7 + 3, v8);
    if ( v11 < 0
      || (v11 = FxEventQueue::Initialize(&v9->m_PowerMachine, v10), v11 < 0)
      || (v11 = FxEventQueue::Initialize(&v9->m_PowerPolicyMachine, v12), v11 < 0) )
    {
      FxObject::ClearEvtCallbacks(v9);
      v9->DeleteObject(v9);
    }
    else
    {
      *PkgFdo = v9;
    }
    return (unsigned int)v11;
  }
  else
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xDu, 0xAu, WPP_fxpkgfdo_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
