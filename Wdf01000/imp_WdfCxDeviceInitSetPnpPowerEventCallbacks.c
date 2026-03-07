void __fastcall imp_WdfCxDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_PNPPOWER_EVENT_CALLBACKS *CxPnpPowerCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rcx
  _FX_DRIVER_GLOBALS *ClientDriverGlobals; // rbx
  unsigned int _a2; // eax
  unsigned __int16 v8; // r9
  int (__fastcall *EvtCxDevicePreSelfManagedIoRestart)(WDFDEVICE__ *); // rcx
  int (__fastcall *EvtCxDevicePreSelfManagedIoRestartEx)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( !CxDeviceInit )
    FxVerifierNullBugCheck(v3, retaddr);
  ClientDriverGlobals = CxDeviceInit->ClientDriverGlobals;
  if ( (int)FxValiateCx(ClientDriverGlobals, v3) >= 0 )
  {
    if ( !CxPnpPowerCallbacks )
      FxVerifierNullBugCheck(ClientDriverGlobals, retaddr);
    _a2 = CxPnpPowerCallbacks->Size;
    if ( CxPnpPowerCallbacks->Size != 280 && _a2 != 200 )
    {
      WPP_IFR_SF_DDd(ClientDriverGlobals, 0xC8u, 0x12u, 0x13u, WPP_FxCxDeviceInitApi_cpp_Traceguids, _a2, 200, 280);
LABEL_9:
      FxVerifierDbgBreakPoint(ClientDriverGlobals);
      return;
    }
    if ( !CxPnpPowerCallbacks->EvtCxDevicePrePrepareHardware
      && CxPnpPowerCallbacks->EvtCxDevicePrePrepareHardwareFailedCleanup )
    {
      v8 = 20;
LABEL_13:
      WPP_IFR_SF_(ClientDriverGlobals, 2u, 0x12u, v8, WPP_FxCxDeviceInitApi_cpp_Traceguids);
      goto LABEL_9;
    }
    if ( !CxPnpPowerCallbacks->EvtCxDevicePreD0Entry && CxPnpPowerCallbacks->EvtCxDevicePreD0EntryFailedCleanup )
    {
      v8 = 21;
      goto LABEL_13;
    }
    if ( !CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoInit
      && CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoInitFailedCleanup )
    {
      v8 = 22;
      goto LABEL_13;
    }
    EvtCxDevicePreSelfManagedIoRestart = CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoRestart;
    if ( !EvtCxDevicePreSelfManagedIoRestart && CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoRestartFailedCleanup )
    {
      v8 = 23;
      goto LABEL_13;
    }
    if ( _a2 > 0xC8 )
    {
      EvtCxDevicePreSelfManagedIoRestartEx = CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoRestartEx;
      if ( !EvtCxDevicePreSelfManagedIoRestartEx
        && CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoRestartExFailedCleanup )
      {
        v8 = 24;
        goto LABEL_13;
      }
      if ( (EvtCxDevicePreSelfManagedIoRestart
         || CxPnpPowerCallbacks->EvtCxDevicePostSelfManagedIoRestart
         || CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoRestartFailedCleanup)
        && (EvtCxDevicePreSelfManagedIoRestartEx
         || CxPnpPowerCallbacks->EvtCxDevicePostSelfManagedIoRestartEx
         || CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoRestartExFailedCleanup) )
      {
        v8 = 25;
        goto LABEL_13;
      }
      if ( (CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoSuspend
         || CxPnpPowerCallbacks->EvtCxDevicePostSelfManagedIoSuspend)
        && (CxPnpPowerCallbacks->EvtCxDevicePreSelfManagedIoSuspendEx
         || CxPnpPowerCallbacks->EvtCxDevicePostSelfManagedIoSuspendEx) )
      {
        v8 = 26;
        goto LABEL_13;
      }
      if ( !CxPnpPowerCallbacks->EvtCxDevicePreD0EntryPostHardwareEnabled
        && CxPnpPowerCallbacks->EvtCxDevicePreD0EntryPostHardwareEnabledFailedCleanup )
      {
        v8 = 27;
        goto LABEL_13;
      }
    }
    CxDeviceInit->PnpPowerCallbacks.Set = 1;
    memset(&CxDeviceInit->PnpPowerCallbacks, 0, 0x118uLL);
    memmove(&CxDeviceInit->PnpPowerCallbacks, CxPnpPowerCallbacks, CxPnpPowerCallbacks->Size);
  }
}
