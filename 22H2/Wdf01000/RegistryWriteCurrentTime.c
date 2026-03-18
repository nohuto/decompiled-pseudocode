/*
 * XREFs of RegistryWriteCurrentTime @ 0x1C0060814
 * Callers:
 *     LogDriverInfoStream @ 0x1C00600B0 (LogDriverInfoStream.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C001A4F0 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall RegistryWriteCurrentTime(_FX_DRIVER_GLOBALS *DriverGlobals)
{
  _UNICODE_STRING *p_m_RegistryPath; // rax
  NTSTATUS v3; // eax
  __int16 v4; // cx
  unsigned __int16 v5; // r9
  FxAutoRegKey hParameters; // [rsp+48h] [rbp-C0h] BYREF
  FxAutoRegKey hDriver; // [rsp+50h] [rbp-B8h] BYREF
  _LARGE_INTEGER currentTime; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING parametersPart; // [rsp+60h] [rbp-A8h] BYREF
  _UNICODE_STRING wdfPart; // [rsp+70h] [rbp-98h] BYREF
  _BYTE wdfTimeOfLastTelemetryLog[24]; // [rsp+80h] [rbp-88h] OVERLAPPED BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES v13; // [rsp+C8h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES v14; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE parametersPart_buffer[30]; // [rsp+128h] [rbp+20h] OVERLAPPED BYREF

  currentTime.QuadPart = 0LL;
  *(_QWORD *)&wdfPart.Length = &parametersPart_buffer[8];
  hDriver.m_Key = 0LL;
  *(_QWORD *)parametersPart_buffer = 0x6600640057LL;
  wcscpy((wchar_t *)&parametersPart_buffer[8], L"Parameters");
  *(_QWORD *)wdfTimeOfLastTelemetryLog = parametersPart_buffer;
  hParameters.m_Key = 0LL;
  parametersPart.Buffer = (wchar_t *)1441812;
  wdfPart.Buffer = (wchar_t *)524294;
  *(_QWORD *)&parametersPart.Length = 0LL;
  *(_OWORD *)&wdfTimeOfLastTelemetryLog[8] = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&wdfTimeOfLastTelemetryLog[8], L"TimeOfLastTelemetryLog");
  p_m_RegistryPath = &DriverGlobals->Driver->m_RegistryPath;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = p_m_RegistryPath;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey((PHANDLE)&currentTime, 0x2001Fu, &ObjectAttributes);
  if ( v3 < 0 )
  {
    v4 = 13;
LABEL_7:
    v5 = v4;
    goto LABEL_10;
  }
  v13.RootDirectory = (void *)currentTime.QuadPart;
  v13.ObjectName = (_UNICODE_STRING *)&parametersPart.Buffer;
  *(_QWORD *)&v13.Length = 48LL;
  *(_QWORD *)&v13.Attributes = 576LL;
  *(_OWORD *)&v13.SecurityDescriptor = 0LL;
  v3 = ZwCreateKey(&hDriver.m_Key, 0x2001Fu, &v13, 0, 0LL, 0, 0LL);
  if ( v3 < 0 )
  {
    v4 = 14;
    goto LABEL_7;
  }
  v14.RootDirectory = hDriver.m_Key;
  v14.ObjectName = (_UNICODE_STRING *)&wdfPart.Buffer;
  *(_QWORD *)&v14.Length = 48LL;
  *(_QWORD *)&v14.Attributes = 576LL;
  *(_OWORD *)&v14.SecurityDescriptor = 0LL;
  v3 = ZwCreateKey(&hParameters.m_Key, 0x2001Fu, &v14, 0, 0LL, 0, 0LL);
  if ( v3 < 0 )
  {
    v4 = 15;
    goto LABEL_7;
  }
  *(_QWORD *)&parametersPart.Length = MEMORY[0xFFFFF78000000014];
  v3 = ZwSetValueKey(hParameters.m_Key, (PUNICODE_STRING)&wdfTimeOfLastTelemetryLog[8], 0, 0xBu, &parametersPart, 8u);
  if ( v3 >= 0 )
    goto LABEL_11;
  v5 = 16;
LABEL_10:
  WPP_IFR_SF_d(DriverGlobals, 2u, 0x11u, v5, WPP_FxTelemetryKm_cpp_Traceguids, v3);
LABEL_11:
  if ( hParameters.m_Key )
    ZwClose(hParameters.m_Key);
  if ( hDriver.m_Key )
    ZwClose(hDriver.m_Key);
  if ( currentTime.QuadPart )
    ZwClose((HANDLE)currentTime.QuadPart);
}
