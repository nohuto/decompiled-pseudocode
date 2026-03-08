/*
 * XREFs of ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C00484D0
 * Callers:
 *     FxInitialize @ 0x1C0043DE4 (FxInitialize.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00014A8 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 */

bool __fastcall _FX_DRIVER_GLOBALS::IsCorrectVersionRegistered(
        _FX_DRIVER_GLOBALS *this,
        const _UNICODE_STRING *ServiceKeyName)
{
  _DRIVER_OBJECT *m_DriverObject; // rcx
  bool v4; // bl
  unsigned int registeredMajor; // [rsp+30h] [rbp-79h] BYREF
  unsigned int registeredMinor; // [rsp+34h] [rbp-75h] BYREF
  FxAutoRegKey hWdf; // [rsp+38h] [rbp-71h] BYREF
  FxAutoRegKey hDriver; // [rsp+40h] [rbp-69h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+48h] [rbp-61h] BYREF
  _UNICODE_STRING wdfMajorValue; // [rsp+58h] [rbp-51h] BYREF
  _UNICODE_STRING wdfMinorValue; // [rsp+68h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-31h] BYREF
  wchar_t parametersPath_buffer[4]; // [rsp+A8h] [rbp-1h] BYREF
  wchar_t wdfMajorValue_buffer[16]; // [rsp+B0h] [rbp+7h] BYREF
  wchar_t wdfMinorValue_buffer[16]; // [rsp+D0h] [rbp+27h] BYREF

  hDriver.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  m_DriverObject = this->DriverObject.m_DriverObject;
  registeredMajor = 0;
  registeredMinor = 0;
  wcscpy(parametersPath_buffer, L"Wdf");
  parametersPath.Buffer = parametersPath_buffer;
  wdfMajorValue.Buffer = wdfMajorValue_buffer;
  wcscpy(wdfMajorValue_buffer, L"WdfMajorVersion");
  wdfMinorValue.Buffer = wdfMinorValue_buffer;
  *(_QWORD *)&parametersPath.Length = 524294LL;
  *(_QWORD *)&wdfMajorValue.Length = 2097182LL;
  wcscpy(wdfMinorValue_buffer, L"WdfMinorVersion");
  *(_QWORD *)&wdfMinorValue.Length = 2097182LL;
  v4 = 0;
  if ( (int)IoOpenDriverRegistryKey(m_DriverObject, 0LL, 131097LL, 0LL, &hDriver) >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = hDriver.m_Key;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &parametersPath;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes) >= 0
      && FxRegKey::_QueryULong(hWdf.m_Key, &wdfMajorValue, &registeredMajor) >= 0
      && registeredMajor == this->WdfBindInfo->Version.Major
      && FxRegKey::_QueryULong(hWdf.m_Key, &wdfMinorValue, &registeredMinor) >= 0
      && registeredMinor == this->WdfBindInfo->Version.Minor )
    {
      v4 = 1;
    }
  }
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hDriver.m_Key )
    ZwClose(hDriver.m_Key);
  return v4;
}
