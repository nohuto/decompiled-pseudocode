char __fastcall PerfEvtDeviceD0EntryStart(WDFDEVICE__ *Handle, _GUID *pActivityId)
{
  char v3; // bl
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbp
  _MCGEN_TRACE_CONTEXT *v7; // rcx
  unsigned __int16 offset; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  offset = 0;
  m_Globals = FxObject::_GetObjectFromHandle((unsigned __int64)Handle, &offset)->m_Globals;
  if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    v3 = 1;
    Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
    EtwActivityIdControl(3u, pActivityId);
    if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v7, &FX_POWER_D0_ENTRY_START, pActivityId, Method, Handle);
  }
  return v3;
}
