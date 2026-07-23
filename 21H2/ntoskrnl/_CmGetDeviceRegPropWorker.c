/*
 * XREFs of _CmGetDeviceRegPropWorker @ 0x1406363FC
 * Callers:
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 * Callees:
 *     RtlStringCbCopyNExW @ 0x140249340 (RtlStringCbCopyNExW.c)
 *     _MapCmDevicePropertyToRegType @ 0x14024E7D0 (_MapCmDevicePropertyToRegType.c)
 *     _CmDevicePropertyRead @ 0x140253764 (_CmDevicePropertyRead.c)
 *     _MapCmDevicePropertyToNtProperty @ 0x1402537A0 (_MapCmDevicePropertyToNtProperty.c)
 *     _MapCmDevicePropertyToRegValue @ 0x14025380C (_MapCmDevicePropertyToRegValue.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14061BED0 (_NtPlugPlayGetDeviceProperty.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x140636780 (_PnpCtxRegQueryValueIndirect.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _CmGetInstallerClassRegProp @ 0x14073F958 (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall CmGetDeviceRegPropWorker(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        int *a7,
        __int16 a8)
{
  NTSTATUS inited; // ebx
  int v11; // r14d
  wchar_t *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  void *v15; // r10
  __int64 v16; // r11
  int v17; // eax
  __int64 v18; // rcx
  const wchar_t *v19; // rax
  int v20; // ecx
  __int64 v21; // r10
  __int64 v22; // r11
  int v23; // edx
  NTSTATUS InstallerClassRegProp; // eax
  int v25; // edx
  NTSTATUS DeviceProperty; // eax
  wchar_t *v28; // rax
  __int64 v29; // rax
  HANDLE v30; // r8
  NTSTATUS DeviceRegProp; // eax
  int v32; // ecx
  HANDLE v33; // r9
  NTSTATUS ObjectProperty; // eax
  NTSTRSAFE_PWSTR *ppszDestEnd; // [rsp+20h] [rbp-E0h]
  size_t *pcbRemaining; // [rsp+28h] [rbp-D8h]
  ULONG dwFlags; // [rsp+30h] [rbp-D0h]
  size_t cbDest; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  void *v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v45[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v46; // [rsp+ECh] [rbp-14h]

  v41 = a3;
  v43 = a1;
  inited = 0;
  cbDest = 0LL;
  Handle = 0LL;
  v39 = 0;
  v42 = 0;
  DestinationString = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
    goto LABEL_62;
  v11 = *a7;
  if ( *a7 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  *a7 = 0;
  LODWORD(cbDest) = v11;
  *a5 = 0;
  v12 = (wchar_t *)(a6 & -(__int64)(v11 != 0));
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmDevicePropertyRead(a1, a4) )
    return (unsigned int)-1073741264;
  if ( !v14 )
  {
    v17 = CmOpenDeviceRegKey(v13, (_DWORD)a2, 16, 0, 33554433, v16, (__int64)&Handle, v16);
    v16 = 0LL;
    inited = v17;
    if ( v17 < 0 )
      goto LABEL_26;
    v11 = cbDest;
    v15 = v41;
    v13 = v43;
  }
  switch ( a4 )
  {
    case 23:
      v28 = wcschr(a2, 0x5Cu);
      if ( v28 )
      {
        *a7 = (_DWORD)v28 - (_DWORD)a2 + 2;
        *a5 = 1;
        v29 = (unsigned int)*a7;
        if ( (unsigned int)cbDest < (unsigned int)v29 )
          goto LABEL_36;
        InstallerClassRegProp = RtlStringCbCopyNExW(
                                  v12,
                                  (unsigned int)cbDest,
                                  a2,
                                  v29 - 2,
                                  ppszDestEnd,
                                  pcbRemaining,
                                  dwFlags);
LABEL_46:
        inited = InstallerClassRegProp;
        goto LABEL_26;
      }
LABEL_62:
      inited = -1073741811;
      goto LABEL_26;
    case 8:
      v30 = Handle;
      HIDWORD(cbDest) = 78;
      if ( v15 )
        v30 = v15;
      DeviceRegProp = CmGetDeviceRegProp(
                        v13,
                        (__int64)a2,
                        (__int64)v30,
                        9,
                        (__int64)&v39,
                        (__int64)v45,
                        (__int64)&cbDest + 4,
                        v16);
      inited = DeviceRegProp;
      if ( DeviceRegProp == -1073741789 )
      {
        inited = -1073741595;
        goto LABEL_26;
      }
      if ( DeviceRegProp )
        goto LABEL_26;
      v32 = v43;
      v46 = 0;
      *a7 = cbDest;
      InstallerClassRegProp = CmGetInstallerClassRegProp(
                                v32,
                                (unsigned int)v45,
                                0,
                                8,
                                (__int64)a5,
                                (__int64)v12,
                                (__int64)a7);
      goto LABEL_46;
    case 36:
      v33 = Handle;
      if ( v15 )
        v33 = v15;
      ObjectProperty = PnpGetObjectProperty(
                         v13,
                         (__int64)a2,
                         1LL,
                         (__int64)v33,
                         v16,
                         (__int64)&DEVPKEY_Device_LocationPaths,
                         (__int64)&v42,
                         (__int64)v12,
                         v11,
                         (__int64)a7,
                         v16);
      *a5 = 7;
      inited = ObjectProperty;
      if ( ObjectProperty != -1073741772 )
        goto LABEL_26;
      goto LABEL_29;
  }
  LODWORD(v41) = MapCmDevicePropertyToNtProperty(v13, a4);
  if ( (_DWORD)v41 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited < 0 )
      goto LABEL_26;
    DeviceProperty = NtPlugPlayGetDeviceProperty(
                       v43,
                       (__int64)&DestinationString,
                       (unsigned int)v41,
                       (__int64)v12,
                       v11,
                       (__int64)&cbDest);
    inited = DeviceProperty;
    if ( DeviceProperty != -1073741772 )
    {
      if ( (int)(DeviceProperty + 0x80000000) < 0 || DeviceProperty == -1073741789 )
      {
        *a7 = cbDest;
        *a5 = MapCmDevicePropertyToRegType(a4);
      }
      goto LABEL_26;
    }
    goto LABEL_29;
  }
  v19 = MapCmDevicePropertyToRegValue(v18, a4);
  if ( !v19 )
  {
    inited = -1073741264;
    goto LABEL_26;
  }
  v23 = (int)Handle;
  HIDWORD(cbDest) = v11;
  if ( v21 )
    v23 = v21;
  InstallerClassRegProp = PnpCtxRegQueryValueIndirect(
                            v20,
                            v23,
                            (_DWORD)v19,
                            (unsigned int)&v39,
                            (__int64)v12,
                            (__int64)&cbDest + 4,
                            v22);
  if ( InstallerClassRegProp == -1073741772 || InstallerClassRegProp == -1073741444 )
    goto LABEL_29;
  if ( (int)(InstallerClassRegProp + 0x80000000) >= 0 && InstallerClassRegProp != -1073741789 )
    goto LABEL_46;
  if ( (v25 = v39, v39 == 1) && HIDWORD(cbDest) < 2
    || HIDWORD(cbDest) < 2 && v39 == 7
    || v39 == 4 && HIDWORD(cbDest) != 4 )
  {
LABEL_29:
    inited = -1073741275;
    goto LABEL_26;
  }
  *a7 = HIDWORD(cbDest);
  *a5 = v25;
  if ( InstallerClassRegProp || !(_DWORD)cbDest )
LABEL_36:
    inited = -1073741789;
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
