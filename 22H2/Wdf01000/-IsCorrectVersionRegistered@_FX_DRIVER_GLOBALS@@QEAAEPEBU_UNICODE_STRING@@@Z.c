/*
 * XREFs of ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C00594A0
 * Callers:
 *     FxInitialize @ 0x1C00570B8 (FxInitialize.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00184EC (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 */

bool __fastcall _FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(
        _FX_DRIVER_GLOBALS *this,
        _UNICODE_STRING *ServiceKeyName)
{
  bool v3; // bl
  unsigned int registeredMajor; // [rsp+20h] [rbp-89h] BYREF
  unsigned int registeredMinor; // [rsp+24h] [rbp-85h] BYREF
  FxAutoRegKey hWdf; // [rsp+28h] [rbp-81h] BYREF
  FxAutoRegKey hDriver; // [rsp+30h] [rbp-79h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-71h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+68h] [rbp-41h] BYREF
  _UNICODE_STRING wdfMajorValue; // [rsp+78h] [rbp-31h] BYREF
  _UNICODE_STRING wdfMinorValue; // [rsp+88h] [rbp-21h] BYREF
  wchar_t parametersPath_buffer[16]; // [rsp+98h] [rbp-11h] BYREF
  wchar_t wdfMajorValue_buffer[16]; // [rsp+B8h] [rbp+Fh] BYREF
  wchar_t wdfMinorValue_buffer[16]; // [rsp+D8h] [rbp+2Fh] BYREF

  hDriver.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  registeredMajor = 0;
  registeredMinor = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  wcscpy(parametersPath_buffer, L"Parameters\\Wdf");
  parametersPath.Buffer = parametersPath_buffer;
  wdfMajorValue.Buffer = wdfMajorValue_buffer;
  wcscpy(wdfMajorValue_buffer, L"WdfMajorVersion");
  ObjectAttributes.ObjectName = ServiceKeyName;
  *(_QWORD *)&parametersPath.Length = 1966108LL;
  *(_QWORD *)&wdfMajorValue.Length = 2097182LL;
  *(_QWORD *)&wdfMinorValue.Length = 2097182LL;
  wcscpy(wdfMinorValue_buffer, L"WdfMinorVersion");
  wdfMinorValue.Buffer = wdfMinorValue_buffer;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v3 = 0;
  if ( ZwOpenKey(&hDriver.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = hDriver.m_Key;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &parametersPath;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) >= 0
      && (int)FxRegKey::_QueryULong(hWdf.m_Key, &wdfMajorValue, &registeredMajor) >= 0
      && registeredMajor == this->WdfBindInfo->Version.Major
      && (int)FxRegKey::_QueryULong(hWdf.m_Key, &wdfMinorValue, &registeredMinor) >= 0
      && registeredMinor == this->WdfBindInfo->Version.Minor )
    {
      v3 = 1;
    }
  }
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hDriver.m_Key )
    ZwClose(hDriver.m_Key);
  return v3;
}
