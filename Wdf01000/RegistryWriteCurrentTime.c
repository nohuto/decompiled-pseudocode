/*
 * XREFs of RegistryWriteCurrentTime @ 0x1C004DD78
 * Callers:
 *     LogDriverInfoStream @ 0x1C004D7C4 (LogDriverInfoStream.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 */

void __fastcall RegistryWriteCurrentTime(_FX_DRIVER_GLOBALS *DriverGlobals)
{
  NTSTATUS v2; // eax
  __int16 v3; // cx
  unsigned __int16 v4; // r9
  FxAutoRegKey hWdf; // [rsp+40h] [rbp-29h] BYREF
  FxAutoRegKey hParameters; // [rsp+48h] [rbp-21h] BYREF
  _LARGE_INTEGER currentTime; // [rsp+50h] [rbp-19h] BYREF
  _UNICODE_STRING wdfPart; // [rsp+58h] [rbp-11h] BYREF
  _UNICODE_STRING wdfTimeOfLastTelemetryLog; // [rsp+68h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  wchar_t wdfPart_buffer[4]; // [rsp+A8h] [rbp+3Fh] BYREF

  hParameters.m_Key = 0LL;
  hWdf.m_Key = 0LL;
  currentTime.QuadPart = 0LL;
  wcscpy(wdfPart_buffer, L"Wdf");
  *(_QWORD *)&wdfPart.Length = 524294LL;
  wdfPart.Buffer = wdfPart_buffer;
  wdfTimeOfLastTelemetryLog = 0LL;
  RtlInitUnicodeString(&wdfTimeOfLastTelemetryLog, L"TimeOfLastTelemetryLog");
  v2 = IoOpenDriverRegistryKey(DriverGlobals->DriverObject.m_DriverObject, 1LL, 131078LL, 0LL, &hParameters);
  if ( v2 < 0 )
  {
    v3 = 13;
LABEL_5:
    v4 = v3;
    goto LABEL_8;
  }
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = hParameters.m_Key;
  ObjectAttributes.ObjectName = &wdfPart;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v2 = ZwCreateKey(&hWdf.m_Key, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 < 0 )
  {
    v3 = 14;
    goto LABEL_5;
  }
  currentTime.QuadPart = MEMORY[0xFFFFF78000000014];
  v2 = ZwSetValueKey(hWdf.m_Key, &wdfTimeOfLastTelemetryLog, 0, 0xBu, &currentTime, 8u);
  if ( v2 >= 0 )
    goto LABEL_9;
  v4 = 15;
LABEL_8:
  WPP_IFR_SF_D(DriverGlobals, 2u, 0x11u, v4, WPP_FxTelemetryKm_cpp_Traceguids, v2);
LABEL_9:
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hParameters.m_Key )
    ZwClose(hParameters.m_Key);
}
