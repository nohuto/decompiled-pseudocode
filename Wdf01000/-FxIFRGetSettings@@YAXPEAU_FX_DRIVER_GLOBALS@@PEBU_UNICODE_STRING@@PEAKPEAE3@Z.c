void __fastcall FxIFRGetSettings(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Size,
        unsigned int *UseTimeStamp,
        unsigned __int8 *PreciseTimeStamp,
        unsigned __int8 *FxDriverGlobals_0)
{
  unsigned __int8 v5; // si
  unsigned int v9; // ebx
  unsigned __int8 v10; // di
  _DRIVER_OBJECT *m_DriverObject; // rcx
  NTSTATUS v12; // eax
  void *m_Key; // rcx
  unsigned int regValue; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int numPages; // [rsp+34h] [rbp-CCh] BYREF
  FxAutoRegKey parameters; // [rsp+38h] [rbp-C8h] BYREF
  FxAutoRegKey service; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING parametersPath; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING valueName; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING nameTimeStamp; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING namePreciseTimeStamp; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  wchar_t parametersPath_buffer[4]; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t valueName_buffer[12]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t namePreciseTimeStamp_buffer[20]; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t nameTimeStamp_buffer[16]; // [rsp+100h] [rbp+0h] BYREF

  service.m_Key = 0LL;
  v5 = 0;
  parameters.m_Key = 0LL;
  regValue = 0;
  wcscpy(valueName_buffer, L"LogPages");
  wcscpy(parametersPath_buffer, L"Wdf");
  numPages = 1;
  parametersPath.Buffer = parametersPath_buffer;
  v9 = 1;
  v10 = 1;
  m_DriverObject = FxDriverGlobals->DriverObject.m_DriverObject;
  wcscpy(nameTimeStamp_buffer, L"LogUseTimeStamp");
  valueName.Buffer = valueName_buffer;
  nameTimeStamp.Buffer = nameTimeStamp_buffer;
  namePreciseTimeStamp.Buffer = namePreciseTimeStamp_buffer;
  wcscpy(namePreciseTimeStamp_buffer, L"LogPreciseTimeStamp");
  *(_QWORD *)&parametersPath.Length = 524294LL;
  *(_QWORD *)&valueName.Length = 1179664LL;
  *(_QWORD *)&nameTimeStamp.Length = 2097182LL;
  *(_QWORD *)&namePreciseTimeStamp.Length = 2621478LL;
  if ( (int)IoOpenDriverRegistryKey(m_DriverObject, 0LL, 131097LL, 0LL, &service) >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = service.m_Key;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &parametersPath;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&parameters.m_Key, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v12 = FxRegKey::_QueryULong(parameters.m_Key, &valueName, &numPages);
      v9 = numPages;
      v10 = 0;
      if ( v12 >= 0 )
      {
        if ( !numPages )
          v9 = 1;
        if ( v9 > 0x10 )
        {
          if ( FxDriverGlobals->FxVerifierOn && FxDriverGlobals->FxVerboseOn )
            v9 = 5;
          else
            v9 = 1;
        }
      }
      if ( FxRegKey::_QueryULong(parameters.m_Key, &nameTimeStamp, &regValue) < 0 || regValue )
      {
        v10 = 1;
        if ( FxRegKey::_QueryULong(parameters.m_Key, &namePreciseTimeStamp, &regValue) >= 0 )
        {
          if ( regValue )
            v5 = 1;
        }
      }
    }
  }
  m_Key = parameters.m_Key;
  *UseTimeStamp = v9 << 12;
  *PreciseTimeStamp = v10;
  *FxDriverGlobals_0 = v5;
  if ( m_Key )
    ZwClose(m_Key);
  if ( service.m_Key )
    ZwClose(service.m_Key);
}
