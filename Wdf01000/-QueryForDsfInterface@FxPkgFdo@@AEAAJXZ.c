__int64 __fastcall FxPkgFdo::QueryForDsfInterface(FxPkgFdo *this)
{
  signed int _a1; // eax
  unsigned __int8 v3; // dl
  unsigned int v4; // edi
  int (__fastcall *IoDisconnectInterruptEx)(_IO_DISCONNECT_INTERRUPT_PARAMETERS *); // r9
  void (__fastcall *IoReportInterruptActive)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *); // r8
  void (__fastcall *IoReportInterruptInactive)(_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS *); // r10
  _WDF_DSF_INTERFACE dsfInterface; // [rsp+40h] [rbp-48h] BYREF

  memset(&dsfInterface, 0, sizeof(dsfInterface));
  _a1 = FxDeviceBase::QueryForInterface(
          this->m_DeviceBase,
          &GUID_WDF_DSF_INTERFACE,
          &dsfInterface.Interface,
          0x40u,
          0x100u,
          0LL,
          this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
  v4 = _a1;
  if ( _a1 == -1073741637 )
  {
    WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0xDu, WPP_FxPkgFdoKm_cpp_Traceguids);
    return 0;
  }
  else if ( _a1 >= 0 )
  {
    if ( dsfInterface.Interface.Version == 256 )
    {
      IoDisconnectInterruptEx = dsfInterface.IoDisconnectInterruptEx;
      if ( (dsfInterface.IoConnectInterruptEx != 0LL) == (dsfInterface.IoDisconnectInterruptEx != 0LL)
        && (IoReportInterruptActive = dsfInterface.IoReportInterruptActive,
            IoReportInterruptInactive = dsfInterface.IoReportInterruptInactive,
            (dsfInterface.IoReportInterruptActive != 0LL) == (dsfInterface.IoReportInterruptInactive != 0LL))
        && dsfInterface.IoConnectInterruptEx )
      {
        this->m_IoConnectInterruptEx = dsfInterface.IoConnectInterruptEx;
        this->m_IoDisconnectInterruptEx = IoDisconnectInterruptEx;
        if ( IoReportInterruptActive )
        {
          this->m_IoReportInterruptActive = IoReportInterruptActive;
          this->m_IoReportInterruptInactive = IoReportInterruptInactive;
        }
      }
      else
      {
        v4 = -1073741762;
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x10u, WPP_FxPkgFdoKm_cpp_Traceguids, 0xC000003E);
      }
    }
    else
    {
      v4 = -1073741735;
      WPP_IFR_SF_DDd(
        this->m_Globals,
        v3,
        0xCu,
        0xFu,
        WPP_FxPkgFdoKm_cpp_Traceguids,
        dsfInterface.Interface.Version,
        256,
        -1073741735);
    }
    dsfInterface.Interface.InterfaceDereference(dsfInterface.Interface.Context);
  }
  else
  {
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0xEu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  }
  return v4;
}
