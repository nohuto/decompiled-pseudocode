FX_POOL **__fastcall WDFCXDEVICE_INIT::_AllocateCxDeviceInit(WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *DriverGlobals; // rdi
  void *v3; // rax
  FX_POOL **v4; // rax
  FX_POOL **v5; // rbx
  _LIST_ENTRY *p_CxDeviceInitListHead; // rax
  _LIST_ENTRY *Flink; // rcx
  __m128i v9; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  DriverGlobals = DeviceInit->DriverGlobals;
  v9.m128i_i64[0] = 0LL;
  v9.m128i_i64[1] = 64LL;
  if ( DriverGlobals->FxPoolTrackingOn )
    v3 = retaddr;
  else
    v3 = 0LL;
  v4 = FxPoolAllocator(DriverGlobals, &DriverGlobals->FxPoolFrameworks, &v9, 0x290uLL, DriverGlobals->Tag, v3);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[1] = (FX_POOL *)v4;
    *v4 = (FX_POOL *)v4;
    memset(v4 + 6, 0, 0xA8uLL);
    *((_DWORD *)v5 + 52) = 2;
    memset(v5 + 27, 0, 0x1B0uLL);
    v5[81] = 0LL;
    p_CxDeviceInitListHead = &DeviceInit->CxDeviceInitListHead;
    Flink = DeviceInit->CxDeviceInitListHead.Flink;
    if ( Flink->Blink != &DeviceInit->CxDeviceInitListHead )
      __fastfail(3u);
    v5[1] = (FX_POOL *)p_CxDeviceInitListHead;
    *v5 = (FX_POOL *)Flink;
    Flink->Blink = (_LIST_ENTRY *)v5;
    p_CxDeviceInitListHead->Flink = (_LIST_ENTRY *)v5;
    return v5;
  }
  else
  {
    WPP_IFR_SF_q(DriverGlobals, 2u, 0x12u, 0xAu, WPP_FxCxDeviceInit_cpp_Traceguids, DeviceInit->Driver);
    return 0LL;
  }
}
