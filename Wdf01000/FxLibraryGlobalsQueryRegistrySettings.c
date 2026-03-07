int FxLibraryGlobalsQueryRegistrySettings()
{
  int result; // eax
  unsigned int ifrDisabled; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int ssDisabled; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int dfxOptIn; // [rsp+28h] [rbp-D8h] BYREF
  FxAutoRegKey hWdf; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING path; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING ifrDisabledName; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING ssDisabledName; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING dfxOptInName; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  wchar_t ifrDisabledName_buffer[24]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t dfxOptInName_buffer[36]; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t path_buffer[56]; // [rsp+120h] [rbp+20h] BYREF
  wchar_t ssDisabledName_buffer[28]; // [rsp+190h] [rbp+90h] BYREF

  hWdf.m_Key = 0LL;
  ifrDisabled = 0;
  ssDisabled = 0;
  dfxOptIn = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  wcscpy(path_buffer, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Wdf");
  path.Buffer = path_buffer;
  wcscpy(ifrDisabledName_buffer, L"WdfGlobalLogsDisabled");
  ifrDisabledName.Buffer = ifrDisabledName_buffer;
  ssDisabledName.Buffer = ssDisabledName_buffer;
  wcscpy(ssDisabledName_buffer, L"WdfGlobalSleepStudyDisabled");
  dfxOptInName.Buffer = dfxOptInName_buffer;
  *(_QWORD *)&path.Length = 7209068LL;
  *(_QWORD *)&ifrDisabledName.Length = 2883626LL;
  *(_QWORD *)&ssDisabledName.Length = 3670070LL;
  wcscpy(dfxOptInName_buffer, L"WdfTestDirectedPowerTransition");
  *(_QWORD *)&dfxOptInName.Length = 4063292LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &path;
  result = ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( FxRegKey::_QueryULong(hWdf.m_Key, &ifrDisabledName, &ifrDisabled) >= 0 && ifrDisabled == 1 )
      unk_1C009FF60 = 1;
    unk_1C009FF61 = 0;
    if ( FxRegKey::_QueryULong(hWdf.m_Key, &ssDisabledName, &ssDisabled) >= 0 && ssDisabled == 1 )
      unk_1C009FF61 = 1;
    result = FxRegKey::_QueryULong(hWdf.m_Key, &dfxOptInName, &dfxOptIn);
    if ( result >= 0 )
      unk_1C009FF62 = dfxOptIn == 1;
  }
  if ( hWdf.m_Key )
    return ZwClose(hWdf.m_Key);
  return result;
}
