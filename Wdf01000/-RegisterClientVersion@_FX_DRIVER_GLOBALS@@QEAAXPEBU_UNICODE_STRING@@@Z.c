/*
 * XREFs of ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x1C0048684
 * Callers:
 *     FxInitialize @ 0x1C0043DE4 (FxInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 */

void __fastcall _FX_DRIVER_GLOBALS::RegisterClientVersion(_FX_DRIVER_GLOBALS *this, _UNICODE_STRING *ServiceKeyName)
{
  NTSTATUS v4; // eax
  unsigned __int16 v5; // r9
  NTSTATUS v6; // eax
  FxAutoRegKey hWdf; // [rsp+40h] [rbp-79h] BYREF
  FxAutoRegKey hParameters; // [rsp+48h] [rbp-71h] BYREF
  FxAutoRegKey hDriver; // [rsp+50h] [rbp-69h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-61h] BYREF
  _UNICODE_STRING parametersPart; // [rsp+88h] [rbp-31h] BYREF
  _UNICODE_STRING wdfPart; // [rsp+98h] [rbp-21h] BYREF
  _UNICODE_STRING wdfMajorValue; // [rsp+A8h] [rbp-11h] BYREF
  _UNICODE_STRING wdfMinorValue; // [rsp+B8h] [rbp-1h] BYREF
  wchar_t wdfPart_buffer[4]; // [rsp+C8h] [rbp+Fh] BYREF
  wchar_t parametersPart_buffer[12]; // [rsp+D0h] [rbp+17h] BYREF

  hDriver.m_Key = 0LL;
  parametersPart.Buffer = parametersPart_buffer;
  hParameters.m_Key = 0LL;
  wcscpy(wdfPart_buffer, L"Wdf");
  wcscpy(parametersPart_buffer, L"Parameters");
  hWdf.m_Key = 0LL;
  wdfPart.Buffer = wdfPart_buffer;
  *(_QWORD *)&parametersPart.Length = 1441812LL;
  *(_QWORD *)&wdfPart.Length = 524294LL;
  wdfMajorValue = 0LL;
  wdfMinorValue = 0LL;
  RtlInitUnicodeString(&wdfMajorValue, L"WdfMajorVersion");
  RtlInitUnicodeString(&wdfMinorValue, L"WdfMinorVersion");
  ObjectAttributes.ObjectName = ServiceKeyName;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&hDriver.m_Key, 0x2001Fu, &ObjectAttributes);
  if ( v4 < 0 )
  {
    if ( !this->FxVerboseOn )
      goto LABEL_18;
    v5 = 10;
    goto LABEL_17;
  }
  ObjectAttributes.RootDirectory = hDriver.m_Key;
  ObjectAttributes.ObjectName = &parametersPart;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&hParameters.m_Key, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v4 < 0 )
  {
    if ( !this->FxVerboseOn )
      goto LABEL_18;
    v5 = 11;
    goto LABEL_17;
  }
  ObjectAttributes.RootDirectory = hParameters.m_Key;
  ObjectAttributes.ObjectName = &wdfPart;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwCreateKey(&hWdf.m_Key, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v4 < 0 )
  {
    if ( !this->FxVerboseOn )
      goto LABEL_18;
    v5 = 12;
    goto LABEL_17;
  }
  v6 = ZwSetValueKey(hWdf.m_Key, &wdfMajorValue, 0, 4u, &this->WdfBindInfo->Version, 4u);
  if ( v6 < 0 && this->FxVerboseOn )
    WPP_IFR_SF_D(this, 5u, 0x11u, 0xDu, WPP_GlobalsKm_cpp_Traceguids, v6);
  v4 = ZwSetValueKey(hWdf.m_Key, &wdfMinorValue, 0, 4u, &this->WdfBindInfo->Version.Minor, 4u);
  if ( v4 < 0 && this->FxVerboseOn )
  {
    v5 = 14;
LABEL_17:
    WPP_IFR_SF_D(this, 5u, 0x11u, v5, WPP_GlobalsKm_cpp_Traceguids, v4);
  }
LABEL_18:
  if ( hWdf.m_Key )
    ZwClose(hWdf.m_Key);
  if ( hParameters.m_Key )
    ZwClose(hParameters.m_Key);
  if ( hDriver.m_Key )
    ZwClose(hDriver.m_Key);
}
