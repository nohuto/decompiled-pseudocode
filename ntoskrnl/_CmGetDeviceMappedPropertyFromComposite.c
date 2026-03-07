__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  wchar_t *v9; // r14
  __int64 v10; // r13
  int *v11; // rsi
  int v13; // edx
  unsigned int DeviceRegProp; // ebx
  unsigned int v17; // r8d
  unsigned int v18; // r12d
  unsigned int v19; // eax
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v24; // rcx
  _DWORD *v25; // r11
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int DeviceStatus; // eax
  __int64 v30; // rax
  int v31; // r8d
  int v32; // ecx
  __int64 v33; // rax
  int v34; // r8d
  int *v35; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int ObjectProperty; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  int v43; // eax
  bool v44; // zf
  __int64 v45; // rax
  __int64 v46; // rax
  _DWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // r8d
  int DeviceProperty; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  bool v56; // zf
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // ecx
  char v64; // cl
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned int v67; // eax
  __int64 v68; // rax
  int DeviceParent; // eax
  unsigned int v70; // eax
  __int64 v71; // rax
  int v72; // eax
  int v73; // eax
  __int64 v74; // rax
  unsigned int DeviceSiblings; // eax
  int v76; // edx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // r8d
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned int DeviceChildren; // eax
  __int64 v86; // rax
  _DWORD *v87; // rax
  unsigned int Len; // eax
  unsigned int v89; // [rsp+20h] [rbp-E0h]
  unsigned int v90; // [rsp+20h] [rbp-E0h]
  int *dwFlags; // [rsp+28h] [rbp-D8h]
  unsigned int v92; // [rsp+30h] [rbp-D0h]
  char v93[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+68h] [rbp-98h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+70h] [rbp-90h]
  int v96; // [rsp+78h] [rbp-88h] BYREF
  int v97; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v98; // [rsp+80h] [rbp-80h] BYREF
  int v99; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v100; // [rsp+88h] [rbp-78h]
  unsigned int v101; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v102; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v103; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v105; // [rsp+B0h] [rbp-50h]
  int v106; // [rsp+B8h] [rbp-48h] BYREF
  int v107; // [rsp+BCh] [rbp-44h] BYREF
  size_t pcchLength; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  __int128 Buf2; // [rsp+D0h] [rbp-30h] BYREF
  __int128 Buf1; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Str2[40]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SourceString[40]; // [rsp+140h] [rbp+40h] BYREF

  v9 = a6;
  v10 = a1;
  v11 = a8;
  v94 = a1;
  pszSrc = a2;
  v13 = a9;
  v105 = a3;
  v103 = a5;
  DeviceRegProp = 0;
  v102 = 0;
  v96 = 0;
  v98 = 0;
  v99 = 0;
  v101 = 0;
  v106 = 0;
  pcchLength = 0LL;
  Handle = 0LL;
  v97 = 0;
  v107 = 0;
  v93[0] = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  v17 = v13 & 0xFFFF0000;
  *v11 = 0;
  v100 = v13 & 0xFFFF0000;
  if ( a6 )
  {
    v18 = a7;
    v9 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v18 = 0;
    a7 = 0;
  }
  v19 = *(_DWORD *)(a4 + 16);
  if ( v19 < 2 )
    return (unsigned int)-1073741264;
  switch ( v19 )
  {
    case 0xAu:
      v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( v38 )
      {
        v74 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
          v74 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
        if ( v74 )
          return DeviceRegProp;
        v98 = v18 >> 1;
        DeviceSiblings = CmGetDeviceSiblings(a1, a2, v9, &v98);
        DeviceRegProp = DeviceSiblings;
        if ( DeviceSiblings != -1073741789 && DeviceSiblings )
          goto LABEL_30;
        *v11 = 2 * v98;
        *v103 = 8210;
        if ( a7 >= *v11 )
          goto LABEL_30;
        return (unsigned int)-1073741789;
      }
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         (_DWORD)a2,
                         1,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_FriendlyName,
                         (__int64)a5,
                         (__int64)v9,
                         v18,
                         (__int64)&v96,
                         v17);
      DeviceRegProp = ObjectProperty;
      if ( ObjectProperty && ObjectProperty != -1073741789 )
      {
        if ( ObjectProperty == -1073741275 )
        {
          v70 = PnpGetObjectProperty(
                  v10,
                  (_DWORD)pszSrc,
                  1,
                  v105,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)v103,
                  (__int64)v9,
                  a7,
                  (__int64)&v96,
                  v100);
          DeviceRegProp = v70;
          if ( !v70 || v70 == -1073741789 )
          {
            *v11 = v96;
          }
          else if ( v70 == -1073741275 )
          {
            return DeviceRegProp;
          }
        }
      }
      else
      {
        *v11 = v96;
      }
      goto LABEL_72;
    case 0x100u:
      v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v24 )
        goto LABEL_21;
      DeviceRegProp = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( (DeviceRegProp & 0x80000000) == 0 )
      {
        *v11 = 2 * pcchLength + 2;
        *v25 = 18;
        if ( v18 >= *v11 )
        {
          DeviceRegProp = RtlStringCbCopyExW(v9, (unsigned int)*v11, pszSrc, 0LL, 0LL, 0x900u);
          LODWORD(v22) = v10;
          if ( (DeviceRegProp & 0x80000000) != 0 )
          {
            v87 = v103;
            *v11 = 0;
            *v87 = 0;
          }
          goto LABEL_31;
        }
        return (unsigned int)-1073741789;
      }
      goto LABEL_72;
    case 2u:
      v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( v30 )
      {
        v45 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
          v45 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
        if ( v45 )
        {
          v46 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
            v46 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
          if ( v46 )
            return DeviceRegProp;
          v96 = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            a1,
                            (__int64)a2,
                            v105,
                            37,
                            (__int64)&v107,
                            (__int64)Str2,
                            (__int64)&v96,
                            v13);
          if ( (DeviceRegProp & 0x80000000) != 0 )
            goto LABEL_30;
          if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
          {
            v47 = v103;
            *v11 = 16;
            *v47 = 13;
            if ( a7 >= *v11 )
            {
              DeviceRegProp = CmGetDeviceContainerIdFromBase(v10, (__int64)pszSrc, Str2, SourceString);
              if ( (DeviceRegProp & 0x80000000) == 0 )
              {
                DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
                if ( (DeviceRegProp & 0x80000000) == 0 )
                  DeviceRegProp = RtlGUIDFromString(&DestinationString, (GUID *)v9);
              }
              goto LABEL_30;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741275;
        }
        *v11 = 1;
        *a5 = 17;
        if ( v18 < *v11 )
          return (unsigned int)-1073741789;
        v64 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(a1, a2, a3) != 0);
        goto LABEL_156;
      }
LABEL_54:
      DeviceRegProp = CmGetDeviceStatus(v10, a2, v105, &v99, &v101, &v102, v92);
      if ( (DeviceRegProp & 0x80000000) == 0 )
      {
        v31 = *(_DWORD *)(a4 + 16);
        v32 = v99;
        if ( v31 == 2 )
        {
          v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
            v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
          if ( !v33 )
            goto LABEL_59;
        }
        if ( v31 != 3 )
          goto LABEL_161;
        v65 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v65 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( !v65 )
        {
LABEL_59:
          v34 = 7;
        }
        else
        {
LABEL_161:
          if ( (v99 & 0x400) == 0 )
            return (unsigned int)-1073741275;
          v34 = 24;
        }
        v35 = v103;
        *v11 = 4;
        *v35 = v34;
        if ( a7 < *v11 )
          return (unsigned int)-1073741789;
        v36 = *(_DWORD *)(a4 + 16);
        if ( v36 == 2 )
        {
          v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
            v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
          if ( !v37 )
          {
            *(_DWORD *)v9 = v32;
            return DeviceRegProp;
          }
        }
        else if ( v36 == 3 )
        {
          v66 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
            v66 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
          if ( !v66 )
          {
            v67 = (v32 & 0x400) != 0 ? v101 : 0;
LABEL_168:
            *(_DWORD *)v9 = v67;
            return DeviceRegProp;
          }
        }
        v67 = v102;
        goto LABEL_168;
      }
LABEL_72:
      LODWORD(v22) = v10;
      goto LABEL_31;
    case 3u:
      v60 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v60 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v60 )
        goto LABEL_54;
      break;
  }
  if ( v19 != 12 )
  {
    v20 = 4;
    if ( v19 != 4 )
    {
      if ( v19 == 5 )
      {
        v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
          v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
        if ( !v26 )
        {
          v20 = 8;
          goto LABEL_217;
        }
        v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
          v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
        if ( v27 )
          return DeviceRegProp;
        *v11 = 1;
        *a5 = 17;
        if ( v18 < *v11 )
          return (unsigned int)-1073741789;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (DeviceRegProp & 0x80000000) != 0 )
          goto LABEL_30;
        v28 = v94;
        *(_BYTE *)v9 = 0;
        DeviceStatus = NtPlugPlayGetDeviceStatus(
                         v28,
                         (__int64)&DestinationString,
                         (__int64)&v99,
                         (__int64)&v101,
                         (__int64)&v102);
        DeviceRegProp = DeviceStatus;
        if ( DeviceStatus == -1073741810 )
          return 0;
        if ( DeviceStatus < 0 )
          return DeviceRegProp;
      }
      else
      {
        if ( v19 != 6 )
        {
          if ( v19 == 7 )
          {
            v82 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
              v82 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
            if ( v82 )
              goto LABEL_20;
            v20 = 32;
          }
          else
          {
            if ( v19 != 11 )
            {
              switch ( v19 )
              {
                case 8u:
                  v48 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
                    v48 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
                  if ( v48 )
                  {
                    v49 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
                    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
                      v49 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
                    if ( v49 )
                      return DeviceRegProp;
                    *a5 = 7;
                    *v11 = 4;
                    DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
                    if ( (DeviceRegProp & 0x80000000) != 0 )
                      goto LABEL_30;
                    v50 = 13;
                    dwFlags = (int *)&a7;
LABEL_112:
                    v89 = v18;
                    LODWORD(v22) = v94;
                    DeviceProperty = NtPlugPlayGetDeviceProperty(
                                       v94,
                                       (unsigned int)&DestinationString,
                                       v50,
                                       (_DWORD)v9,
                                       v89,
                                       (__int64)dwFlags);
                    DeviceRegProp = DeviceProperty;
                    if ( DeviceProperty != -1073741772 )
                    {
                      if ( DeviceProperty >= 0 )
                        return DeviceRegProp;
                      goto LABEL_31;
                    }
                    return (unsigned int)-1073741275;
                  }
                  v98 = v18 >> 1;
                  LODWORD(v22) = v94;
                  DeviceParent = CmGetDeviceParent(v94, a2, v9, &v98);
                  DeviceRegProp = DeviceParent;
                  if ( DeviceParent && DeviceParent != -1073741789 )
                    goto LABEL_31;
                  *v11 = 2 * v98;
                  *v103 = 18;
                  break;
                case 9u:
                  v84 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
                    v84 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
                  if ( v84 )
                    return DeviceRegProp;
                  v98 = v18 >> 1;
                  LODWORD(v22) = v94;
                  DeviceChildren = CmGetDeviceChildren(v94, a2, v9, &v98);
                  DeviceRegProp = DeviceChildren;
                  if ( DeviceChildren != -1073741789 && DeviceChildren )
                    goto LABEL_31;
                  *v11 = 2 * v98;
                  *v103 = 8210;
                  break;
                case 0xFu:
                  v71 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
                  if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
                    v71 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
                  if ( v71 )
                    return DeviceRegProp;
                  *a5 = 17;
                  *v11 = 1;
                  if ( !v18 )
                    return (unsigned int)-1073741789;
                  v22 = v94;
                  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
                  if ( (DeviceRegProp & 0x80000000) != 0 )
                    goto LABEL_31;
                  *(_BYTE *)v9 = 0;
                  v72 = NtPlugPlayGetDeviceStatus(
                          v22,
                          (__int64)&DestinationString,
                          (__int64)&v99,
                          (__int64)&v101,
                          (__int64)&v102);
                  DeviceRegProp = v72;
                  if ( v72 == -1073741810 )
                    return 0;
                  if ( v72 < 0 || (v99 & 0x2000000) != 0 )
                    return DeviceRegProp;
                  v73 = PnpGetObjectProperty(
                          v22,
                          (_DWORD)pszSrc,
                          1,
                          0,
                          0LL,
                          (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                          (__int64)&v97,
                          (__int64)v93,
                          1,
                          (__int64)&v96,
                          v100);
                  DeviceRegProp = v73;
                  if ( v73 < 0 )
                  {
                    if ( v73 != -1073741275 && v73 != -1073741789 )
                      goto LABEL_31;
                    DeviceRegProp = 0;
                    goto LABEL_50;
                  }
                  if ( v97 != 17 )
                    goto LABEL_50;
                  v44 = v93[0] == -1;
LABEL_90:
                  if ( v44 )
                    return DeviceRegProp;
                  goto LABEL_50;
                case 0x10u:
                  v53 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
                    v53 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
                  if ( v53 )
                    return DeviceRegProp;
                  *a5 = 17;
                  *v11 = 1;
                  if ( !v18 )
                    return (unsigned int)-1073741789;
                  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
                  if ( (DeviceRegProp & 0x80000000) != 0 )
                    goto LABEL_30;
                  v54 = v94;
                  *(_BYTE *)v9 = 0;
                  v55 = NtPlugPlayGetDeviceStatus(
                          v54,
                          (__int64)&DestinationString,
                          (__int64)&v99,
                          (__int64)&v101,
                          (__int64)&v102);
                  DeviceRegProp = v55;
                  if ( v55 != -1073741810 )
                  {
                    if ( v55 < 0 )
                      return DeviceRegProp;
                    if ( (v99 & 0x100) != 0 )
                      goto LABEL_50;
                    if ( (v99 & 0x400) == 0 )
                      return DeviceRegProp;
                    v56 = v101 == 14;
                    goto LABEL_131;
                  }
                  return 0;
                case 0xEu:
                  v78 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
                    v78 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
                  if ( v78 )
                    return DeviceRegProp;
                  *a5 = 8210;
                  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
                  if ( (DeviceRegProp & 0x80000000) != 0 )
                    goto LABEL_30;
                  dwFlags = v11;
                  v50 = 14;
                  goto LABEL_112;
                default:
LABEL_20:
                  LODWORD(v10) = v94;
                  v17 = v100;
                  goto LABEL_21;
              }
              if ( a7 >= *v11 )
                goto LABEL_31;
              return (unsigned int)-1073741789;
            }
            v83 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
              v83 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
            if ( v83 )
              goto LABEL_20;
            v20 = 64;
          }
LABEL_217:
          v90 = v18 >> 1;
          LODWORD(v22) = v94;
          DeviceRegProp = CmGetDeviceRelationsList(v94, (_DWORD)a2, v20, (_DWORD)v9, v90, (__int64)&v98);
          if ( DeviceRegProp == -1073741772 )
            return (unsigned int)-1073741275;
          if ( !DeviceRegProp || DeviceRegProp == -1073741789 )
          {
            *v103 = 8210;
            if ( DeviceRegProp )
              Len = v98;
            else
              Len = PnpMultiSzGetLen(v9);
            *v11 = 2 * Len;
            return DeviceRegProp;
          }
          goto LABEL_31;
        }
        v40 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
          v40 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
        if ( !v40 )
        {
          v20 = 16;
          goto LABEL_217;
        }
        v41 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
          v41 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
        if ( v41 )
          return DeviceRegProp;
        *a5 = 17;
        *v11 = 1;
        if ( !v18 )
          return (unsigned int)-1073741789;
        v22 = v94;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (DeviceRegProp & 0x80000000) != 0 )
          goto LABEL_31;
        *(_BYTE *)v9 = 0;
        v42 = NtPlugPlayGetDeviceStatus(v22, (__int64)&DestinationString, (__int64)&v99, (__int64)&v101, (__int64)&v102);
        DeviceRegProp = v42;
        if ( v42 == -1073741810 )
          return 0;
        if ( v42 < 0 )
          return DeviceRegProp;
        if ( (v99 & 0x8000) == 0 )
        {
          if ( (v99 & 0x400) == 0 || v101 <= 0x1D && (v76 = 591396864, _bittest(&v76, v101)) )
          {
            if ( (v99 & 8) != 0 )
              return DeviceRegProp;
            v43 = PnpGetObjectProperty(
                    v22,
                    (_DWORD)pszSrc,
                    1,
                    v105,
                    0LL,
                    (__int64)&DEVPKEY_Device_Capabilities,
                    (__int64)&v97,
                    (__int64)&v106,
                    4,
                    (__int64)&v96,
                    v100);
            DeviceRegProp = v43;
            if ( v43 == -1073741275 )
              return 0;
            if ( v43 < 0 )
              goto LABEL_31;
            v44 = (v106 & 0x40) == 0;
            goto LABEL_90;
          }
        }
      }
LABEL_50:
      *(_BYTE *)v9 = -1;
      return DeviceRegProp;
    }
    v61 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
      v61 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
    if ( !v61 )
      goto LABEL_217;
    v62 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
      v62 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
    if ( v62 )
      return DeviceRegProp;
    LODWORD(v22) = v94;
    v63 = v94;
    *a5 = 17;
    *v11 = 1;
    DeviceRegProp = PnpGetObjectProperty(
                      v63,
                      (_DWORD)a2,
                      1,
                      a3,
                      0LL,
                      (__int64)&DEVPKEY_Device_ContainerId,
                      (__int64)&v97,
                      (__int64)&Buf2,
                      16,
                      (__int64)&v96,
                      v17);
    if ( (DeviceRegProp & 0x80000000) != 0 )
      goto LABEL_31;
    DeviceRegProp = PnpGetObjectProperty(
                      v22,
                      (unsigned int)L"HTREE\\ROOT\\0",
                      1,
                      0,
                      0LL,
                      (__int64)&DEVPKEY_Device_BaseContainerId,
                      (__int64)&v97,
                      (__int64)&Buf1,
                      16,
                      (__int64)&v96,
                      v100);
    if ( (DeviceRegProp & 0x80000000) != 0 )
      goto LABEL_31;
    if ( a7 < *v11 )
      return (unsigned int)-1073741789;
    v64 = (memcmp(&Buf1, &Buf2, 0x10uLL) != 0) - 1;
LABEL_156:
    *(_BYTE *)v9 = v64;
    return DeviceRegProp;
  }
  v77 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
    v77 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
  if ( !v77 )
    goto LABEL_54;
LABEL_21:
  switch ( v19 )
  {
    case 0x14u:
      v86 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v86 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( v86 )
        return DeviceRegProp;
      *a5 = 8210;
      DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_30;
      v80 = 15;
LABEL_233:
      v81 = NtPlugPlayGetDeviceProperty(v10, (unsigned int)&DestinationString, v80, (_DWORD)v9, v18, (__int64)v11);
      DeviceRegProp = v81;
      if ( v81 == -1073741772 )
        return (unsigned int)-1073741275;
      if ( v81 >= 0 )
        return DeviceRegProp;
      goto LABEL_30;
    case 0x15u:
      v79 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v79 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( v79 )
        return DeviceRegProp;
      *a5 = 8210;
      DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_30;
      v80 = 16;
      goto LABEL_233;
    case 0x1Au:
      v57 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
        v57 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
      if ( v57 )
        return DeviceRegProp;
      *a5 = 17;
      *v11 = 1;
      if ( v18 )
      {
        *(_BYTE *)v9 = 0;
        v58 = PnpGetObjectProperty(
                v10,
                (_DWORD)a2,
                1,
                a3,
                0LL,
                (__int64)DEVPKEY_Device_UpdateWithUngroupedDrivers,
                (__int64)&v97,
                (__int64)v93,
                1,
                (__int64)&v96,
                v17);
        DeviceRegProp = v58;
        if ( v58 >= 0 )
        {
          if ( v97 == 17 && v96 == 1 )
          {
            v56 = v93[0] == 0;
LABEL_131:
            if ( !v56 )
              return DeviceRegProp;
            goto LABEL_50;
          }
        }
        else if ( v58 != -1073741275 && v58 != -1073741789 )
        {
          goto LABEL_30;
        }
        v59 = PnpGetObjectProperty(
                v10,
                (_DWORD)pszSrc,
                1,
                v105,
                0LL,
                (__int64)DEVPKEY_Device_DriverInGroup,
                (__int64)&v97,
                (__int64)v93,
                1,
                (__int64)&v96,
                v100);
        DeviceRegProp = v59;
        if ( v59 < 0 )
        {
          if ( v59 != -1073741275 && v59 != -1073741789 )
            goto LABEL_30;
          return 0;
        }
        if ( v97 != 17 || v96 != 1 )
          return DeviceRegProp;
        v56 = v93[0] == -1;
        goto LABEL_131;
      }
      return (unsigned int)-1073741789;
  }
  if ( v19 != 22 )
    goto LABEL_25;
  v52 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
    v52 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  if ( v52 )
  {
LABEL_25:
    if ( v19 != 23 )
    {
      if ( v19 != 102 )
        return DeviceRegProp;
      v68 = *(_QWORD *)a4 - DEVPKEY_Device_EffectiveRestrictedSD;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_EffectiveRestrictedSD )
        v68 = *(_QWORD *)(a4 + 8) - 0x57C1C6A499921E96LL;
      if ( v68 )
        return DeviceRegProp;
      DeviceRegProp = PnpGetObjectProperty(
                        v10,
                        (_DWORD)a2,
                        1,
                        a3,
                        0LL,
                        (__int64)&DEVPKEY_Device_RestrictedSD,
                        (__int64)&v97,
                        (__int64)v9,
                        v18,
                        (__int64)&v96,
                        v17);
      if ( (int)(DeviceRegProp + 0x80000000) < 0 || DeviceRegProp == -1073741789 )
      {
        if ( v97 == 19 )
        {
          *v103 = 19;
          *v11 = v96;
          goto LABEL_30;
        }
      }
      else if ( DeviceRegProp != -1073741275 )
      {
        goto LABEL_30;
      }
      DeviceRegProp = PnpGetObjectProperty(
                        v10,
                        (_DWORD)pszSrc,
                        1,
                        v105,
                        0LL,
                        (__int64)&DEVPKEY_Device_InheritedRestrictedSD,
                        (__int64)&v97,
                        (__int64)v9,
                        a7,
                        (__int64)&v96,
                        v100);
      if ( (int)(DeviceRegProp + 0x80000000) < 0 || DeviceRegProp == -1073741789 )
      {
        if ( v97 == 19 )
        {
          *v103 = 19;
          *v11 = v96;
        }
        else
        {
          DeviceRegProp = -1073741275;
        }
      }
      goto LABEL_30;
    }
    v21 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundLowerFilters;
    if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundLowerFilters )
      v21 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
    if ( v21 )
      return DeviceRegProp;
  }
  DeviceRegProp = CmGetDeviceCompoundFilters(v10, (_DWORD)a2, v105, a4, (__int64)a5, (__int64)v9, v18, (__int64)v11);
LABEL_30:
  LODWORD(v22) = v94;
LABEL_31:
  if ( DeviceRegProp != -1073741810 )
    return DeviceRegProp;
  DeviceRegProp = CmOpenDeviceRegKey(v22, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceRegProp )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceRegProp != -1073741810 && DeviceRegProp != -1073741632 )
    return (unsigned int)-1073741823;
  return DeviceRegProp;
}
