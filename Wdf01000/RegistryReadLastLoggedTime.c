void __fastcall RegistryReadLastLoggedTime(_FX_DRIVER_GLOBALS *DriverGlobals, _LARGE_INTEGER *LastLoggedTime)
{
  _DRIVER_OBJECT *m_DriverObject; // rcx
  NTSTATUS _a1; // eax
  unsigned __int16 v6; // cx
  FxAutoRegKey hWdf; // [rsp+30h] [rbp-59h] BYREF
  FxAutoRegKey hKey; // [rsp+38h] [rbp-51h] BYREF
  _LARGE_INTEGER value; // [rsp+40h] [rbp-49h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+48h] [rbp-41h] BYREF
  _UNICODE_STRING valueName; // [rsp+58h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  wchar_t parametersPath_buffer[4]; // [rsp+98h] [rbp+Fh] BYREF
  wchar_t valueName_buffer[23]; // [rsp+A0h] [rbp+17h] BYREF

  hKey.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  wcscpy(parametersPath_buffer, L"Wdf");
  *(_QWORD *)&parametersPath.Length = 524294LL;
  parametersPath.Buffer = parametersPath_buffer;
  wcscpy(&valueName_buffer[20], L"og");
  *(_OWORD *)valueName_buffer = *(_OWORD *)L"TimeOfLastTelemetryLog";
  valueName.Buffer = valueName_buffer;
  LastLoggedTime->QuadPart = 0LL;
  m_DriverObject = DriverGlobals->DriverObject.m_DriverObject;
  wmemcpy(&valueName_buffer[8], L"stTelemetryLog", 12);
  *(_QWORD *)&valueName.Length = 3014700LL;
  _a1 = IoOpenDriverRegistryKey(m_DriverObject, 1LL, 131097LL, 0LL, &hWdf);
  if ( _a1 < 0 )
  {
    v6 = 11;
LABEL_5:
    WPP_IFR_SF_D(DriverGlobals, 2u, 0x11u, v6, WPP_FxTelemetryKm_cpp_Traceguids, _a1);
    goto LABEL_8;
  }
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = hWdf.m_Key;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &parametersPath;
  ObjectAttributes.Attributes = 576;
  _a1 = ZwOpenKey(&hKey.m_Key, 0x20019u, &ObjectAttributes);
  if ( _a1 < 0 )
  {
    v6 = 12;
    goto LABEL_5;
  }
  value.QuadPart = 0LL;
  if ( FxRegKey::_QueryQuadWord(hKey.m_Key, &valueName, &value) >= 0 )
    *LastLoggedTime = value;
LABEL_8:
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
}
