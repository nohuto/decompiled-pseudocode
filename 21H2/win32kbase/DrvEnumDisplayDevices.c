/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C00721C0
 * Callers:
 *     ?NtUserEnumDisplayDevicesShared@@YAJPEAU_UNICODE_STRING@@KPEAU_DISPLAY_DEVICEW@@K@Z @ 0x1C007213C (-NtUserEnumDisplayDevicesShared@@YAJPEAU_UNICODE_STRING@@KPEAU_DISPLAY_DEVICEW@@K@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     PALLOCNOZ @ 0x1C0027CFC (PALLOCNOZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C006A5AC (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C00719F0 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C0071D50 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0072BC8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0072CC4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM @ 0x1C0086980 (PALLOCMEM.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C00C6070 (DrvpGetDeviceInterfaceName.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z @ 0x1C00DB0A8 (--$invoke@P6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_FILE_OBJECT@@@Z.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00DB0C4 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00DB0D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00DB0EC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDere.c)
 *     ??1AUTO_FREE_STRING@@QEAA@XZ @ 0x1C00DB104 (--1AUTO_FREE_STRING@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // rdi
  wchar_t *DeviceFromName; // rsi
  int v9; // r14d
  int v10; // r15d
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG v15; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _DEVICE_OBJECT *v21; // rax
  unsigned int *v22; // rax
  unsigned int v23; // r13d
  _DWORD *v24; // rdi
  struct _DEVICE_OBJECT *v25; // rcx
  PDEVICE_OBJECT v26; // rdi
  int (__fastcall *v27)(__int64, _QWORD, void **, PDEVICE_OBJECT *); // rdi
  _OWORD *v28; // r9
  wchar_t *v29; // rcx
  const wchar_t *v30; // r8
  ULONG i; // ecx
  NTSTATUS DeviceProperty; // eax
  void *v33; // r14
  int PruneFlag; // eax
  int v35; // edx
  unsigned int v36; // edx
  struct _UNICODE_STRING *v37; // r14
  char v38; // r8
  int DeviceInterfaceName; // eax
  ULONG j; // ecx
  NTSTATUS v41; // eax
  void *v42; // r12
  __int64 v43; // r14
  __int64 v44; // rax
  ULONG v45; // eax
  unsigned int v46; // r8d
  __int64 v47; // rdx
  _DWORD *v48; // r12
  __int64 v49; // rdx
  void *v50; // rsi
  PULONG ResultLength; // [rsp+20h] [rbp-1C8h]
  ULONG BufferLength; // [rsp+40h] [rbp-1A8h] BYREF
  PVOID P; // [rsp+48h] [rbp-1A0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-198h] BYREF
  unsigned int Length; // [rsp+58h] [rbp-190h]
  unsigned int Length_4; // [rsp+5Ch] [rbp-18Ch]
  void *v57; // [rsp+60h] [rbp-188h] BYREF
  struct _UNICODE_STRING *v58; // [rsp+68h] [rbp-180h]
  void *v59; // [rsp+70h] [rbp-178h]
  PVOID Object; // [rsp+78h] [rbp-170h] BYREF
  unsigned int v61; // [rsp+80h] [rbp-168h]
  __int64 v62; // [rsp+88h] [rbp-160h]
  _QWORD v63[2]; // [rsp+90h] [rbp-158h] BYREF
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v59 = a4;
  v6 = a3;
  v61 = a3;
  v58 = a1;
  v63[1] = a4;
  DeviceFromName = 0LL;
  Length = 0;
  BufferLength = 0;
  DeviceObject = 0LL;
  v9 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v57);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  v10 = 0;
  v62 = v6;
  Length_4 = a5;
  ResultLength = (PULONG)a5;
  WdLogSingleEntry4(4LL, a1, v11);
  if ( a1 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EnumDisplayDevices_UseSharedLock__private_reporting,
      31048924LL,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
      1,
      3);
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_EnumDisplayDevices_UseSharedLock_DontCheck__private_reporting,
      31051196LL,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
      1,
      3);
    if ( a6 == 1 )
    {
      P = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&P) >= 0 )
        DeviceFromName = DrvGetDeviceFromName((PCUNICODE_STRING)P);
      AUTO_FREE_STRING::~AUTO_FREE_STRING((AUTO_FREE_STRING *)&P);
    }
    else
    {
      DeviceFromName = DrvGetDeviceFromName(a1);
    }
    if ( !DeviceFromName || (unsigned int)v6 >= *((_DWORD *)DeviceFromName + 54) )
      goto LABEL_14;
    v27 = (int (__fastcall *)(__int64, _QWORD, void **, PDEVICE_OBJECT *))qword_1C0296828;
    if ( v57 )
    {
      P = v57;
      v63[0] = ObfDereferenceObject;
      wistd::invoke<__int64 (*)(void *),_FILE_OBJECT * &>(v63, &P);
    }
    v57 = 0LL;
    if ( v27(
           *((_QWORD *)DeviceFromName + 28) + 20 * v62 + 8,
           *(unsigned int *)(*((_QWORD *)DeviceFromName + 28) + 20 * v62 + 4),
           &v57,
           &DeviceObject) < 0 )
    {
      WdLogSingleEntry0(2LL);
      goto LABEL_14;
    }
    goto LABEL_27;
  }
  DeviceFromName = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_13;
  v15 = BufferLength;
  do
  {
    if ( a6
      && ((v12 = *((unsigned int *)DeviceFromName + 40), (v12 & 0x2000000) != 0)
       || gProtocolType && DeviceFromName[110] != gProtocolType && (v12 & 0x4000008) == 0) )
    {
      BufferLength = --v15;
    }
    else if ( v15 == (_DWORD)v6 )
    {
      break;
    }
    DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
    BufferLength = ++v15;
  }
  while ( DeviceFromName );
  if ( !DeviceFromName )
  {
LABEL_13:
    WdLogSingleEntry0(5LL);
LABEL_14:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v57);
    return 3221225473LL;
  }
  if ( dword_1C0297080
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && ::Object
    && (PVOID)PsGetCurrentProcess(65533LL, v12, v13, v14) != gpepCSRSS
    && !UserIsCurrentProcessDwm(v18, v17, v19, v20)
    && (DeviceFromName[80] & 8) == 0 )
  {
    v9 = 1;
  }
  v21 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 18);
  if ( !v21 || !*((_QWORD *)DeviceFromName + 29) )
  {
    if ( !v9 )
    {
      v25 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 17);
      if ( v25 )
      {
        P = 0LL;
        if ( (int)DrvForceChildDeviceReenumeration(v25, (struct _DEVICE_RELATIONS **)&P) >= 0 )
        {
          DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P + 1);
          ExFreePoolWithTag(P, 0);
          v26 = DeviceObject;
          if ( Object )
            ObfDereferenceObject(Object);
          Object = v26;
        }
      }
      else
      {
        WdLogSingleEntry0(5LL);
      }
      goto LABEL_27;
    }
    v21 = (struct _DEVICE_OBJECT *)::Object;
  }
  DeviceObject = v21;
LABEL_27:
  P = 0LL;
  if ( a6 == 1 )
  {
    v22 = (unsigned int *)v59;
    if ( (unsigned __int64)v59 >= MmUserProbeAddress )
      v22 = (unsigned int *)MmUserProbeAddress;
    Length = *v22;
    v23 = Length;
    if ( Length > 0x348 )
      v23 = 840;
    Length = v23;
    v24 = (_DWORD *)PALLOCMEM(v23, 1936876615LL);
    P = v24;
    if ( !v24 )
    {
      v10 = -1073741823;
      goto LABEL_123;
    }
  }
  else
  {
    v23 = 840;
    if ( *(_DWORD *)v59 < 0x348u )
      v23 = *(_DWORD *)v59;
    Length = v23;
    v24 = v59;
    P = v59;
    memset(v59, 0, v23);
  }
  if ( v23 >= 4 )
    *v24 = 4;
  if ( v23 >= 0x44 )
  {
    *v24 = 68;
    v28 = DeviceFromName + 32;
    v29 = (wchar_t *)(v24 + 1);
    if ( v58 )
    {
      LODWORD(ResultLength) = v61;
      swprintf_s(v29, 0x20uLL, L"%ws\\Monitor%d", v28, ResultLength);
    }
    else
    {
      *(_OWORD *)v29 = *v28;
      *(_OWORD *)(v24 + 5) = *((_OWORD *)DeviceFromName + 5);
      *(_OWORD *)(v24 + 9) = *((_OWORD *)DeviceFromName + 6);
      *(_OWORD *)(v24 + 13) = *((_OWORD *)DeviceFromName + 7);
    }
    *((_WORD *)v24 + 33) = 0;
  }
  if ( v23 >= 0x144 )
  {
    *v24 = 324;
    *((_WORD *)v24 + 34) = 0;
    if ( v58 || v9 )
    {
      if ( DeviceObject )
      {
        BufferLength = 256;
        for ( i = 256; ; i = BufferLength )
        {
          v33 = PALLOCNOZ(i, 0x64646547u);
          if ( !v33 )
          {
            v10 = -1073741670;
            goto LABEL_72;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v33,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool((char *)v33);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v24 + 34, 0x80uLL, (const wchar_t *)v33, 0x7FuLL);
        Win32FreePool((char *)v33);
      }
    }
    else
    {
      v30 = (const wchar_t *)*((_QWORD *)DeviceFromName + 26);
      if ( v30 )
        wcsncpy_s((wchar_t *)v24 + 34, 0x80uLL, v30, 0x7FuLL);
    }
LABEL_72:
    *((_WORD *)v24 + 161) = 0;
  }
  if ( v23 < 0x148 )
  {
    v37 = v58;
    v38 = Length_4;
  }
  else
  {
    *v24 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
    v35 = *((_DWORD *)DeviceFromName + 40);
    if ( PruneFlag )
      v36 = v35 & 0xFFF7FFFF;
    else
      v36 = v35 | 0x80000;
    *((_DWORD *)DeviceFromName + 40) = v36;
    v37 = v58;
    v38 = Length_4;
    if ( v58 )
      v24[81] = *(_DWORD *)(*((_QWORD *)DeviceFromName + 28) + 20 * v62) & 0xFFFFFFF;
    else
      v24[81] = v36 & ((Length_4 & 2) != 0 ? 0xFFFFFFF : 254803967);
  }
  if ( v23 < 0x248 )
  {
    v43 = -1LL;
    goto LABEL_113;
  }
  *v24 = 584;
  *((_WORD *)v24 + 164) = 0;
  if ( (v38 & 1) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject);
      v10 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        WdLogSingleEntry1(5LL, DeviceInterfaceName);
        goto LABEL_123;
      }
    }
LABEL_110:
    v43 = -1LL;
    goto LABEL_111;
  }
  if ( !DeviceObject )
    goto LABEL_110;
  BufferLength = 256;
  for ( j = 256; ; j = BufferLength )
  {
    v42 = PALLOCNOZ(j, 0x64646547u);
    if ( !v42 )
    {
      v10 = -1073741670;
LABEL_95:
      v43 = -1LL;
      goto LABEL_96;
    }
    v41 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, v42, &BufferLength);
    if ( v41 != -1073741789 )
      break;
    Win32FreePool((char *)v42);
  }
  if ( v41 )
  {
    Win32FreePool((char *)v42);
    goto LABEL_95;
  }
  v46 = 0;
  if ( v37 )
  {
    v43 = -1LL;
    v47 = -1LL;
    do
      ++v47;
    while ( *((_WORD *)v42 + v47) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v47 + 2) )
      v46 = v47 + 1;
  }
  else
  {
    v43 = -1LL;
  }
  wcsncpy_s((wchar_t *)v24 + 164, 0x80uLL, (const wchar_t *)v42 + v46, 0x7FuLL);
  Win32FreePool((char *)v42);
LABEL_96:
  if ( v58 )
  {
    *((_WORD *)v24 + 291) = 0;
    v44 = -1LL;
    do
      ++v44;
    while ( *((_WORD *)v24 + v44 + 164) );
    v45 = v44 + 1;
    BufferLength = v45;
    if ( v45 < 0x7E )
    {
      *((_WORD *)v24 + v45 + 163) = 92;
      IoGetDeviceProperty(
        DeviceObject,
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength),
        (char *)v24 + 2 * BufferLength + 328,
        &BufferLength);
    }
  }
LABEL_111:
  *((_WORD *)v24 + 291) = 0;
LABEL_113:
  if ( v23 >= 0x348 )
  {
    *v24 = 840;
    v48 = v24 + 146;
    *((_WORD *)v24 + 292) = 0;
    if ( v58 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v24 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v49 = -1LL;
        do
          ++v49;
        while ( *((_WORD *)v48 + v49) );
        BufferLength = v49;
        wcsncpy_s(
          (wchar_t *)v24 + (unsigned int)v49 + 292,
          128LL - (unsigned int)v49,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v49));
        do
          ++v43;
        while ( *((_WORD *)v48 + v43) );
        BufferLength = v43;
        wcsncpy_s(
          (wchar_t *)v24 + (unsigned int)v43 + 292,
          128LL - (unsigned int)v43,
          PropertyBuffer,
          (unsigned int)(127 - v43));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3LL, 0LL, v24 + 146, 128, 0LL);
    }
    *((_WORD *)v24 + 419) = 0;
  }
LABEL_123:
  v50 = v59;
  if ( v24 != v59 )
  {
    if ( v24 )
    {
      ProbeForWrite(v59, v23, 4u);
      memmove(v50, v24, v23);
      Win32FreePool((char *)v24);
    }
  }
  WdLogSingleEntry1(5LL, v10);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>(&v57);
  return (unsigned int)v10;
}
