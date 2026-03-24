/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C0028990
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C001F1D0 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001713C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     UpdateMonitorDevices @ 0x1C001E2B0 (UpdateMonitorDevices.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C0020C74 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C0022870 (DrvGetDeviceFromName.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C002AC30 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     UserIsCurrentProcessDwm @ 0x1C0048F20 (UserIsCurrentProcessDwm.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00B0EA8 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C00B8800 (DrvpGetDeviceInterfaceName.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00CAEB8 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1C00CAEC8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        int a6)
{
  __int64 v7; // rdi
  wchar_t *DeviceFromName; // rsi
  int v10; // r14d
  __int64 v11; // r15
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  ULONG v16; // eax
  struct _DEVICE_OBJECT *v17; // rax
  unsigned int *v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // rdx
  PDEVICE_OBJECT v21; // rcx
  char *v22; // rdi
  _OWORD *v23; // r9
  const wchar_t *v24; // r8
  ULONG v25; // r14d
  int PruneFlag; // eax
  char v27; // r8
  void *v28; // r12
  NTSTATUS v29; // eax
  unsigned int v30; // r8d
  __int64 v31; // r14
  char *v32; // r12
  void *v33; // rsi
  __int64 v34; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  size_t v40; // rcx
  void *v41; // r12
  NTSTATUS DeviceProperty; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  ULONG v45; // eax
  int DeviceInterfaceName; // eax
  struct _DEVICE_OBJECT *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-1B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned int Length; // [rsp+40h] [rbp-1A8h]
  unsigned int Length_4; // [rsp+44h] [rbp-1A4h]
  PVOID v55; // [rsp+48h] [rbp-1A0h] BYREF
  struct _UNICODE_STRING *v56; // [rsp+50h] [rbp-198h]
  void *v57; // [rsp+58h] [rbp-190h]
  PVOID Object; // [rsp+60h] [rbp-188h] BYREF
  void *v59; // [rsp+68h] [rbp-180h]
  int v60; // [rsp+70h] [rbp-178h]
  PCUNICODE_STRING String1; // [rsp+78h] [rbp-170h] BYREF
  PVOID P[2]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v63; // [rsp+90h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v57 = a4;
  v7 = a3;
  v60 = a3;
  v56 = a1;
  P[1] = a4;
  DeviceFromName = 0LL;
  Length = 0;
  BufferLength = 0;
  DeviceObject = 0LL;
  v10 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v55);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  LODWORD(v11) = 0;
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12);
  v13[3] = a1;
  v63 = (unsigned int)v7;
  v13[4] = (unsigned int)v7;
  v13[5] = a4;
  Length_4 = a5;
  v13[6] = a5;
  WdLogEvent5_WdEvent(v13);
  if ( a1 )
  {
    UpdateMonitorDevices();
    if ( a6 == 1 )
    {
      String1 = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
        DeviceFromName = DrvGetDeviceFromName(String1);
      if ( String1 )
        Win32FreePool(String1);
    }
    else
    {
      DeviceFromName = DrvGetDeviceFromName(a1);
    }
    if ( DeviceFromName && (unsigned int)v7 < *((_DWORD *)DeviceFromName + 54) )
    {
      if ( v55 )
        ObfDereferenceObject(v55);
      v55 = 0LL;
      if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C0250A58)(
                  *((_QWORD *)DeviceFromName + 28) + 4 * (5 * v7 + 2),
                  *(unsigned int *)(*((_QWORD *)DeviceFromName + 28) + 20 * v7 + 4),
                  &v55,
                  &DeviceObject) >= 0 )
        goto LABEL_13;
      v49 = WdLogNewEntry5_WdError(v38, v37);
      WdLogEvent5_WdError(v49);
    }
LABEL_65:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v55);
    return 3221225473LL;
  }
  DeviceFromName = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_64;
  v16 = BufferLength;
  do
  {
    if ( a6
      && ((v14 = *((unsigned int *)DeviceFromName + 40), (v14 & 0x2000000) != 0)
       || (v15 = (unsigned __int16)gProtocolType, gProtocolType)
       && DeviceFromName[110] != gProtocolType
       && (v14 & 0x4000008) == 0) )
    {
      BufferLength = --v16;
    }
    else if ( v16 == (_DWORD)v7 )
    {
      break;
    }
    DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
    BufferLength = ++v16;
  }
  while ( DeviceFromName );
  if ( !DeviceFromName )
  {
LABEL_64:
    v36 = WdLogNewEntry5_WdTrace(v15, v14);
    WdLogEvent5_WdTrace(v36);
    goto LABEL_65;
  }
  if ( dword_1C02512E0
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && ::Object
    && (PVOID)PsGetCurrentProcess(65533LL, v14) != gpepCSRSS
    && !(unsigned int)UserIsCurrentProcessDwm()
    && (DeviceFromName[80] & 8) == 0 )
  {
    v10 = 1;
  }
  P[0] = 0LL;
  v17 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 18);
  if ( v17 && *((_QWORD *)DeviceFromName + 29) )
    goto LABEL_12;
  if ( v10 )
  {
    v17 = (struct _DEVICE_OBJECT *)::Object;
LABEL_12:
    DeviceObject = v17;
    goto LABEL_13;
  }
  v47 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 17);
  if ( v47 )
  {
    if ( (int)DrvForceChildDeviceReenumeration(v47, (struct _DEVICE_RELATIONS **)P) >= 0 )
    {
      DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P[0] + 1);
      ExFreePoolWithTag(P[0], 0);
      if ( Object )
        ObfDereferenceObject(Object);
      Object = DeviceObject;
    }
  }
  else
  {
    v48 = WdLogNewEntry5_WdTrace(0LL, v14);
    WdLogEvent5_WdTrace(v48);
  }
LABEL_13:
  v59 = 0LL;
  if ( a6 == 1 )
  {
    v18 = (unsigned int *)v57;
    if ( (unsigned __int64)v57 >= MmUserProbeAddress )
      v18 = (unsigned int *)MmUserProbeAddress;
    Length = *v18;
    v19 = Length;
    if ( Length > 0x348 )
      v19 = 840;
    Length = v19;
    v22 = (char *)PALLOCMEM2(v19);
    v59 = v22;
    if ( !v22 )
    {
      LODWORD(v11) = -1073741823;
      goto LABEL_54;
    }
  }
  else
  {
    v19 = 840;
    if ( *(_DWORD *)v57 < 0x348u )
      v19 = *(_DWORD *)v57;
    Length = v19;
    v22 = (char *)v57;
    v59 = v57;
    memset(v57, 0, v19);
  }
  if ( v19 >= 4 )
    *(_DWORD *)v22 = 4;
  if ( v19 >= 0x44 )
  {
    *(_DWORD *)v22 = 68;
    v23 = DeviceFromName + 32;
    v21 = (PDEVICE_OBJECT)(v22 + 4);
    if ( v56 )
    {
      swprintf_s((wchar_t *)v21, 0x20uLL, L"%ws\\Monitor%d", v23, v60);
    }
    else
    {
      *(_OWORD *)&v21->Type = *v23;
      *(_OWORD *)(v22 + 20) = *((_OWORD *)DeviceFromName + 5);
      *(_OWORD *)(v22 + 36) = *((_OWORD *)DeviceFromName + 6);
      *(_OWORD *)(v22 + 52) = *((_OWORD *)DeviceFromName + 7);
    }
    *((_WORD *)v22 + 33) = 0;
  }
  if ( v19 >= 0x144 )
  {
    *(_DWORD *)v22 = 324;
    *((_WORD *)v22 + 34) = 0;
    if ( v56 || v10 )
    {
      if ( DeviceObject )
      {
        v25 = 256;
        v40 = 256LL;
        for ( BufferLength = 256; ; v40 = BufferLength )
        {
          v41 = (void *)PALLOCMEM2(v40);
          if ( !v41 )
          {
            LODWORD(v11) = -1073741670;
            goto LABEL_31;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v41,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool(v41);
        }
        if ( !DeviceProperty )
          wcsncpy_s((wchar_t *)v22 + 34, 0x80uLL, (const wchar_t *)v41, 0x7FuLL);
        Win32FreePool(v41);
        goto LABEL_31;
      }
    }
    else
    {
      v24 = (const wchar_t *)*((_QWORD *)DeviceFromName + 26);
      if ( v24 )
        wcsncpy_s((wchar_t *)v22 + 34, 0x80uLL, v24, 0x7FuLL);
    }
    v25 = 256;
LABEL_31:
    *((_WORD *)v22 + 161) = 0;
    goto LABEL_32;
  }
  v25 = 256;
LABEL_32:
  if ( v19 < 0x148 )
  {
    v27 = Length_4;
  }
  else
  {
    *(_DWORD *)v22 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
    v20 = *((unsigned int *)DeviceFromName + 40);
    if ( PruneFlag )
      LODWORD(v20) = v20 & 0xFFF7FFFF;
    else
      LODWORD(v20) = v20 | 0x80000;
    *((_DWORD *)DeviceFromName + 40) = v20;
    v27 = Length_4;
    if ( v56 )
    {
      v21 = (PDEVICE_OBJECT)(5 * v63);
      v20 = *(_DWORD *)(*((_QWORD *)DeviceFromName + 28) + 20 * v63) & 0xFFFFFFF;
      *((_DWORD *)v22 + 81) = v20;
    }
    else
    {
      v21 = (PDEVICE_OBJECT)((unsigned int)v20 & ((Length_4 & 2) != 0 ? 0xFFFFFFF : 254803967));
      *((_DWORD *)v22 + 81) = (_DWORD)v21;
    }
  }
  if ( v19 < 0x248 )
  {
    v31 = -1LL;
    goto LABEL_50;
  }
  *(_DWORD *)v22 = 584;
  *((_WORD *)v22 + 164) = 0;
  if ( (v27 & 1) != 0 )
  {
    v21 = DeviceObject;
    if ( DeviceObject )
    {
      DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject);
      v11 = DeviceInterfaceName;
      if ( DeviceInterfaceName < 0 )
      {
        v50 = WdLogNewEntry5_WdTrace(v21, v20);
        *(_QWORD *)(v50 + 24) = v11;
        WdLogEvent5_WdTrace(v50);
        goto LABEL_54;
      }
    }
LABEL_102:
    v31 = -1LL;
    goto LABEL_49;
  }
  if ( !DeviceObject )
    goto LABEL_102;
  for ( BufferLength = 256; ; v25 = BufferLength )
  {
    v28 = 0LL;
    if ( v25 )
    {
      v28 = (void *)Win32AllocPool(v25, 1684301127LL);
      v25 = BufferLength;
    }
    if ( !v28 )
    {
      LODWORD(v11) = -1073741670;
      goto LABEL_132;
    }
    v29 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v25, v28, &BufferLength);
    if ( v29 != -1073741789 )
      break;
    Win32FreePool(v28);
  }
  if ( v29 )
  {
    Win32FreePool(v28);
LABEL_132:
    v31 = -1LL;
    goto LABEL_48;
  }
  v30 = 0;
  v31 = -1LL;
  if ( v56 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( *((_WORD *)v28 + v43) );
    if ( BufferLength > 2 * (unsigned __int64)(unsigned int)(v43 + 2) )
      v30 = v43 + 1;
  }
  wcsncpy_s((wchar_t *)v22 + 164, 0x80uLL, (const wchar_t *)v28 + v30, 0x7FuLL);
  Win32FreePool(v28);
LABEL_48:
  if ( v56 )
  {
    *((_WORD *)v22 + 291) = 0;
    v44 = -1LL;
    do
      ++v44;
    while ( *(_WORD *)&v22[2 * v44 + 328] );
    v45 = v44 + 1;
    BufferLength = v45;
    if ( v45 < 0x7E )
    {
      *(_WORD *)&v22[2 * v45 + 326] = 92;
      IoGetDeviceProperty(
        DeviceObject,
        DevicePropertyDriverKeyName,
        2 * (127 - BufferLength),
        &v22[2 * BufferLength + 328],
        &BufferLength);
    }
  }
LABEL_49:
  *((_WORD *)v22 + 291) = 0;
LABEL_50:
  if ( v19 >= 0x348 )
  {
    *(_DWORD *)v22 = 840;
    v32 = v22 + 584;
    *((_WORD *)v22 + 292) = 0;
    if ( v56 )
    {
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
      {
        wcscpy_s((wchar_t *)v22 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
        v39 = -1LL;
        do
          ++v39;
        while ( *(_WORD *)&v32[2 * v39] );
        BufferLength = v39;
        wcsncpy_s(
          (wchar_t *)&v22[2 * (unsigned int)v39 + 584],
          128LL - (unsigned int)v39,
          L"\\Control\\Class\\",
          (unsigned int)(127 - v39));
        do
          ++v31;
        while ( *(_WORD *)&v32[2 * v31] );
        BufferLength = v31;
        wcsncpy_s(
          (wchar_t *)&v22[2 * (unsigned int)v31 + 584],
          128LL - (unsigned int)v31,
          PropertyBuffer,
          (unsigned int)(127 - v31));
      }
    }
    else
    {
      DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3LL, 0LL, v22 + 584, 128, 0LL, BufferLength);
    }
    *((_WORD *)v22 + 419) = 0;
  }
LABEL_54:
  v33 = v57;
  if ( v22 != v57 )
  {
    if ( v22 )
    {
      ProbeForWrite(v57, v19, 4u);
      memmove(v33, v22, v19);
      Win32FreePool(v22);
    }
  }
  v34 = WdLogNewEntry5_WdTrace(v21, v20);
  *(_QWORD *)(v34 + 24) = (int)v11;
  WdLogEvent5_WdTrace(v34);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&Object);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v55);
  return (unsigned int)v11;
}
