__int64 __fastcall CmGetDeviceRegPropWorker(
        size_t a1,
        const wchar_t *a2,
        void *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int *a7,
        __int16 a8)
{
  NTSTATUS inited; // ebx
  unsigned int v11; // r15d
  wchar_t *v12; // r14
  size_t v13; // rcx
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
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  size_t cchToCopy; // rax
  HANDLE v33; // r8
  NTSTATUS DeviceRegProp; // eax
  int v35; // ecx
  int v36; // r9d
  NTSTATUS ObjectProperty; // eax
  unsigned int v38; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v39; // [rsp+64h] [rbp-9Ch] BYREF
  int v40; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  size_t pcchNewDestLength; // [rsp+78h] [rbp-88h] BYREF
  void *v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v47; // [rsp+ECh] [rbp-14h]

  v43 = a3;
  pcchNewDestLength = a1;
  inited = 0;
  v38 = 0;
  Handle = 0LL;
  v40 = 0;
  v39 = 0;
  v44 = 0;
  DestinationString = 0LL;
  if ( a8 )
    return (unsigned int)-1073741811;
  if ( !a7 || !a5 )
    goto LABEL_67;
  v11 = *a7;
  if ( *a7 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
  }
  *a7 = 0;
  v38 = v11;
  *a5 = 0;
  v12 = (wchar_t *)(a6 & -(__int64)(v11 != 0));
  if ( (unsigned int)(a4 - 1) > 0x24 || !CmDevicePropertyRead(a1, a4) )
    return (unsigned int)-1073741264;
  if ( !v14 )
  {
    v17 = CmOpenDeviceRegKey(v13, 33554433, v16, (__int64)&Handle, v16);
    v16 = 0LL;
    inited = v17;
    if ( v17 < 0 )
      goto LABEL_26;
    v11 = v38;
    v15 = v43;
    v13 = pcchNewDestLength;
  }
  switch ( a4 )
  {
    case 23:
      v28 = wcschr(a2, 0x5Cu);
      if ( v28 )
      {
        *a7 = (_DWORD)v28 - (_DWORD)a2 + 2;
        *a5 = 1;
        v29 = *a7;
        if ( v38 < (unsigned int)v29 )
          goto LABEL_37;
        v30 = v38;
        v31 = v29 - 2;
        if ( (unsigned __int64)v38 >> 1 )
        {
          cchToCopy = v31 >> 1;
          if ( cchToCopy >= 0x7FFFFFFF )
          {
            *v12 = 0;
            inited = cchToCopy < 0x7FFFFFFF ? 0 : 0xC000000D;
          }
          else
          {
            inited = RtlStringCopyWorkerW_2(v12, (unsigned __int64)v38 >> 1, &pcchNewDestLength, a2, cchToCopy);
            if ( inited >= 0 )
              goto LABEL_26;
          }
          if ( v30 )
            *v12 = 0;
          goto LABEL_26;
        }
      }
LABEL_67:
      inited = -1073741811;
      goto LABEL_26;
    case 8:
      v33 = Handle;
      v39 = 78;
      if ( v15 )
        v33 = v15;
      DeviceRegProp = CmGetDeviceRegProp(
                        v13,
                        (__int64)a2,
                        (__int64)v33,
                        9,
                        (__int64)&v40,
                        (__int64)v46,
                        (__int64)&v39,
                        v16);
      inited = DeviceRegProp;
      if ( DeviceRegProp != -1073741789 )
      {
        if ( DeviceRegProp )
          goto LABEL_26;
        v35 = pcchNewDestLength;
        v47 = 0;
        *a7 = v38;
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  v35,
                                  (unsigned int)v46,
                                  0,
                                  8,
                                  (__int64)a5,
                                  (__int64)v12,
                                  (__int64)a7);
        goto LABEL_55;
      }
      inited = -1073741595;
      goto LABEL_26;
    case 36:
      v36 = (int)Handle;
      if ( v15 )
        v36 = (int)v15;
      ObjectProperty = PnpGetObjectProperty(
                         v13,
                         (_DWORD)a2,
                         1,
                         v36,
                         v16,
                         (__int64)&DEVPKEY_Device_LocationPaths,
                         (__int64)&v44,
                         (__int64)v12,
                         v11,
                         (__int64)a7,
                         v16);
      *a5 = 7;
      inited = ObjectProperty;
      if ( ObjectProperty != -1073741772 )
        goto LABEL_26;
      goto LABEL_36;
  }
  LODWORD(v43) = MapCmDevicePropertyToNtProperty(v13, a4);
  if ( (_DWORD)v43 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited < 0 )
      goto LABEL_26;
    DeviceProperty = NtPlugPlayGetDeviceProperty(
                       pcchNewDestLength,
                       (unsigned int)&DestinationString,
                       (_DWORD)v43,
                       (_DWORD)v12,
                       v11,
                       (__int64)&v38);
    inited = DeviceProperty;
    if ( DeviceProperty != -1073741772 )
    {
      if ( (int)(DeviceProperty + 0x80000000) < 0 || DeviceProperty == -1073741789 )
      {
        *a7 = v38;
        *a5 = MapCmDevicePropertyToRegType(a4);
      }
      goto LABEL_26;
    }
    goto LABEL_36;
  }
  v19 = MapCmDevicePropertyToRegValue(v18, a4);
  if ( !v19 )
  {
    inited = -1073741264;
    goto LABEL_26;
  }
  v23 = (int)Handle;
  v39 = v11;
  if ( v21 )
    v23 = v21;
  InstallerClassRegProp = PnpCtxRegQueryValueIndirect(
                            v20,
                            v23,
                            (_DWORD)v19,
                            (unsigned int)&v40,
                            (__int64)v12,
                            (__int64)&v39,
                            v22);
  if ( InstallerClassRegProp == -1073741772 || InstallerClassRegProp == -1073741444 )
    goto LABEL_36;
  if ( (int)(InstallerClassRegProp + 0x80000000) >= 0 && InstallerClassRegProp != -1073741789 )
  {
LABEL_55:
    inited = InstallerClassRegProp;
    goto LABEL_26;
  }
  if ( (v25 = v40, v40 == 1) && v39 < 2 || v40 == 7 && v39 < 2 || v40 == 4 && v39 != 4 )
  {
LABEL_36:
    inited = -1073741275;
    goto LABEL_26;
  }
  *a7 = v39;
  *a5 = v25;
  if ( InstallerClassRegProp || !v38 )
LABEL_37:
    inited = -1073741789;
LABEL_26:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
