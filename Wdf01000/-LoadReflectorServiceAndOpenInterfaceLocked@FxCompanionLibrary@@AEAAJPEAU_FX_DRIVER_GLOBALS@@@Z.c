/*
 * XREFs of ?LoadReflectorServiceAndOpenInterfaceLocked@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002D640
 * Callers:
 *     ?OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002D96C (-OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxCompanionLibrary::LoadReflectorServiceAndOpenInterfaceLocked(
        FxCompanionLibrary *this,
        _FX_DRIVER_GLOBALS *DriverGlobals)
{
  _FILE_OBJECT *v3; // rdi
  NTSTATUS _a1; // ebx
  NTSTATUS DeviceObjectPointer; // eax
  ICompanionLibrary **p_m_RdCompanionLibrary; // r14
  _IRP *v8; // rax
  _DEVICE_OBJECT *v9; // rax
  __int64 result; // rax
  _DEVICE_OBJECT *rdNonPnPDevice; // [rsp+50h] [rbp-B0h] BYREF
  _FILE_OBJECT *rdNonPnPFile; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING wudfRdNonPnPSvcName; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING unicodeDeviceName; // [rsp+70h] [rbp-90h] BYREF
  _KEVENT event; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK iosb; // [rsp+98h] [rbp-68h] BYREF
  wchar_t wudfRdNonPnPSvcName_buffer[64]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t unicodeDeviceName_buffer[64]; // [rsp+130h] [rbp+30h] BYREF

  memset(&event, 0, sizeof(event));
  iosb = 0LL;
  v3 = 0LL;
  wcscpy(wudfRdNonPnPSvcName_buffer, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WudfPf");
  wcscpy(unicodeDeviceName_buffer, L"\\Device\\WUDFRdNonPnP-01ef3135-0713-470c-95dc-5d1b184938c4");
  wudfRdNonPnPSvcName.Buffer = wudfRdNonPnPSvcName_buffer;
  rdNonPnPFile = 0LL;
  rdNonPnPDevice = 0LL;
  *(_QWORD *)&wudfRdNonPnPSvcName.Length = 7733364LL;
  *(_QWORD *)&unicodeDeviceName.Length = 7602290LL;
  unicodeDeviceName.Buffer = unicodeDeviceName_buffer;
  _a1 = ZwLoadDriver(&wudfRdNonPnPSvcName);
  if ( (int)(_a1 + 0x80000000) >= 0 && _a1 != -1073741554 )
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0xAu, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
    goto LABEL_12;
  }
  DeviceObjectPointer = IoGetDeviceObjectPointer(&unicodeDeviceName, 0x1F01FFu, &rdNonPnPFile, &rdNonPnPDevice);
  _a1 = DeviceObjectPointer;
  if ( DeviceObjectPointer < 0 )
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0xBu, WPP_FxCompanionLibrary_cpp_Traceguids, DeviceObjectPointer);
LABEL_12:
    p_m_RdCompanionLibrary = &this->m_RdCompanionLibrary;
    goto LABEL_13;
  }
  ObfReferenceObject(rdNonPnPDevice);
  KeInitializeEvent(&event, NotificationEvent, 0);
  p_m_RdCompanionLibrary = &this->m_RdCompanionLibrary;
  v8 = IoBuildDeviceIoControlRequest(
         0x80028400,
         rdNonPnPDevice,
         0LL,
         0,
         &this->m_RdCompanionLibrary,
         8u,
         1u,
         &event,
         &iosb);
  if ( v8 )
  {
    _a1 = IofCallDriver(rdNonPnPDevice, v8);
    if ( _a1 == 259 )
    {
      KeWaitForSingleObject(&event, Executive, 0, 0, 0LL);
      _a1 = iosb.Status;
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0xDu, WPP_FxCompanionLibrary_cpp_Traceguids, iosb.Status);
    }
    if ( _a1 >= 0 )
    {
      v3 = rdNonPnPFile;
      v9 = rdNonPnPDevice;
      goto LABEL_19;
    }
    goto LABEL_12;
  }
  _a1 = -1073741670;
  WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0xCu, WPP_FxCompanionLibrary_cpp_Traceguids, 0xC000009A);
LABEL_13:
  if ( rdNonPnPFile )
    ObfDereferenceObject(rdNonPnPFile);
  if ( rdNonPnPDevice )
    ObfDereferenceObject(rdNonPnPDevice);
  v9 = 0LL;
  *p_m_RdCompanionLibrary = 0LL;
LABEL_19:
  this->m_RdNonPnPDevice = v9;
  result = (unsigned int)_a1;
  this->m_RdNonPnPFile = v3;
  return result;
}
