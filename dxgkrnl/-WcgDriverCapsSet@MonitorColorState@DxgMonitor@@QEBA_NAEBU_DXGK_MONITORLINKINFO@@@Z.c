char __fastcall DxgMonitor::MonitorColorState::WcgDriverCapsSet(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2)
{
  char v4; // bl

  v4 = 0;
  if ( (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage()
    && (unsigned int)Feature_36371531__private_IsEnabledDeviceUsage() )
  {
    if ( (*(_BYTE *)&a2->Capabilities.0 & 2) != 0
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           1LL,
           L"MicrosoftApprovedAcmSupport",
           0LL) )
    {
      return 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
      return v4;
LABEL_6:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           2LL,
           L"OverrideWCGCapabilities") )
    {
      return 1;
    }
    return v4;
  }
  if ( (unsigned int)Feature_36371531__private_IsEnabledDeviceUsage() )
  {
    if ( (*(_BYTE *)&a2->Capabilities.0 & 2) != 0
      || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           1LL,
           L"MicrosoftApprovedAcmSupport") )
    {
      return 1;
    }
    goto LABEL_6;
  }
  Feature_EnableIddCx110__private_IsEnabledDeviceUsage();
  if ( (*(_BYTE *)&a2->Capabilities.0 & 2) == 0 )
    Feature_WCG_Skip_WideColorSpace_Check__private_ReportDeviceUsage();
  return 1;
}
