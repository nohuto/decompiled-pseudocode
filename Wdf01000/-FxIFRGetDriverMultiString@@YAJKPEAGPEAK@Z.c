/*
 * XREFs of ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x1C0026E98
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C0027070 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C004CBC4 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 */

__int64 __fastcall FxIFRGetDriverMultiString(
        unsigned int ValueLength,
        wchar_t *Value,
        unsigned int *ValueLengthQueried)
{
  NTSTATUS v6; // ebx
  unsigned int v7; // edx
  unsigned int type; // [rsp+40h] [rbp-C0h] BYREF
  FxAutoRegKey hWdf; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING path; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING driverListToReplay; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  wchar_t driverListToReplay_buffer[32]; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t path_buffer[56]; // [rsp+E0h] [rbp-20h] BYREF

  wcscpy(path_buffer, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Wdf");
  path.Buffer = path_buffer;
  wcscpy(driverListToReplay_buffer, L"WdfIfrCaptureServiceList");
  driverListToReplay.Buffer = driverListToReplay_buffer;
  hWdf.m_Key = 0LL;
  *(_QWORD *)&path.Length = 7209068LL;
  *(_QWORD *)&driverListToReplay.Length = 3276848LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  type = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &path;
  v6 = ZwOpenKey(&hWdf.m_Key, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    v6 = FxRegKey::_QueryValue(0LL, hWdf.m_Key, &driverListToReplay, ValueLength, Value, ValueLengthQueried, &type);
    if ( v6 >= 0 )
    {
      if ( type != 7
        || (v7 = *ValueLengthQueried >> 1, (*ValueLengthQueried & 1) != 0)
        || v7 < 2
        || Value[v7 - 1]
        || Value[v7 - 2] )
      {
        v6 = -1073741788;
      }
    }
  }
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  return (unsigned int)v6;
}
