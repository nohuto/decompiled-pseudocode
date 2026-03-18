/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C
 * Callers:
 *     _CmGetDeviceMappedPropertyKeys @ 0x1406DA264 (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmGetDeviceMappedProperty @ 0x1407857F0 (_CmGetDeviceMappedProperty.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1402DF9D0 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x1402E04F4 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     wcscmp @ 0x1403E32F0 (wcscmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmGetDeviceSiblings @ 0x1406D04CC (_CmGetDeviceSiblings.c)
 *     _CmGetDeviceChildren @ 0x1406D068C (_CmGetDeviceChildren.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1406D4FE0 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetDeviceRelationsList @ 0x1406E5DD4 (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceCompoundFilters @ 0x140745F48 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14076CE48 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140784C2C (_NtPlugPlayGetDeviceStatus.c)
 *     _PnpMultiSzGetLen @ 0x1407889F4 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceParent @ 0x140788ED4 (_CmGetDeviceParent.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140789210 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceStatus @ 0x14078A470 (_CmGetDeviceStatus.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        unsigned int *a8,
        int a9)
{
  unsigned int *v9; // rsi
  __int64 v10; // r13
  wchar_t *v11; // r14
  int v13; // r8d
  unsigned int DeviceRegProp; // ebx
  unsigned int v15; // r9d
  unsigned int v16; // r12d
  unsigned int v17; // eax
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // r11
  NTSTRSAFE_PCWSTR v22; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  int DeviceProperty; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  int DeviceStatus; // eax
  unsigned int DeviceParent; // eax
  __int64 v35; // rcx
  int v36; // edx
  int v37; // ecx
  __int64 v38; // rax
  int v39; // edx
  int *v40; // rax
  int v41; // edx
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // eax
  bool v49; // zf
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdi
  unsigned int ObjectProperty; // eax
  __int64 v59; // r9
  unsigned int v60; // eax
  unsigned int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  bool v69; // zf
  __int64 v70; // rax
  _DWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // r9
  __int64 v78; // rax
  int v79; // eax
  int v80; // eax
  int v81; // edx
  __int64 v82; // rax
  unsigned int v83; // r8d
  int v84; // r8d
  __int64 v85; // rax
  unsigned int DeviceSiblings; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  _DWORD *v93; // rax
  __int64 v94; // rax
  _BYTE v95[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v96; // [rsp+64h] [rbp-9Ch] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+68h] [rbp-98h]
  int v98; // [rsp+70h] [rbp-90h] BYREF
  __int64 v99; // [rsp+78h] [rbp-88h]
  int v100; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v101; // [rsp+84h] [rbp-7Ch] BYREF
  PCWSTR SourceString; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v103; // [rsp+90h] [rbp-70h]
  void *v104; // [rsp+98h] [rbp-68h]
  _DWORD *v105; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  int v107; // [rsp+B8h] [rbp-48h] BYREF
  int v108; // [rsp+BCh] [rbp-44h] BYREF
  int v109; // [rsp+C0h] [rbp-40h] BYREF
  size_t pcchLength; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  __int128 Buf2; // [rsp+D8h] [rbp-28h] BYREF
  __int128 Buf1; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Str2[40]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR v115[40]; // [rsp+150h] [rbp+50h] BYREF

  v9 = a8;
  v10 = a1;
  v11 = a6;
  v99 = a1;
  v104 = a3;
  v13 = a9;
  pszSrc = a2;
  DeviceRegProp = 0;
  v105 = a5;
  SourceString = 0LL;
  v107 = 0;
  v96 = 0;
  v101 = 0;
  v100 = 0;
  v108 = 0;
  pcchLength = 0LL;
  Handle = 0LL;
  v98 = 0;
  v109 = 0;
  v95[0] = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  v15 = v13 & 0xFFFF0000;
  *v9 = 0;
  v103 = v13 & 0xFFFF0000;
  if ( a6 )
  {
    v16 = a7;
    v11 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v16 = 0;
    a7 = 0;
  }
  v17 = *(_DWORD *)(a4 + 16);
  if ( v17 < 2 )
    return (unsigned int)-1073741264;
  switch ( v17 )
  {
    case 0xAu:
      v56 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v56 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v56 )
      {
        v57 = (__int64)v104;
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           (__int64)a2,
                           1LL,
                           (__int64)v104,
                           0LL,
                           (__int64)&DEVPKEY_Device_FriendlyName,
                           (__int64)a5,
                           (__int64)v11,
                           v16,
                           (__int64)&v96,
                           v15);
        DeviceRegProp = ObjectProperty;
        if ( ObjectProperty && ObjectProperty != -1073741789 )
        {
          if ( ObjectProperty != -1073741275 )
            goto LABEL_73;
          v59 = v57;
          v22 = pszSrc;
          v60 = PnpGetObjectProperty(
                  v10,
                  (__int64)pszSrc,
                  1LL,
                  v59,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)v105,
                  (__int64)v11,
                  a7,
                  (__int64)&v96,
                  v103);
          DeviceRegProp = v60;
          if ( v60 && v60 != -1073741789 )
          {
            if ( v60 == -1073741275 )
              return DeviceRegProp;
            goto LABEL_37;
          }
          goto LABEL_126;
        }
        goto LABEL_200;
      }
      v85 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
        v85 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
      if ( v85 )
        return DeviceRegProp;
      v101 = v16 >> 1;
      DeviceSiblings = CmGetDeviceSiblings(a1, a2, v11, &v101);
      goto LABEL_219;
    case 0x100u:
      v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v20 )
        return DeviceRegProp;
      DeviceRegProp = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_73;
      *v9 = 2 * pcchLength + 2;
      *v21 = 18;
      if ( v16 >= *v9 )
      {
        v22 = pszSrc;
        DeviceRegProp = RtlStringCbCopyExW(v11, *v9, pszSrc, 0LL, 0LL, 0x900u);
        if ( (DeviceRegProp & 0x80000000) != 0 )
        {
          v93 = v105;
          *v9 = 0;
          *v93 = 0;
        }
        goto LABEL_37;
      }
      return (unsigned int)-1073741789;
    case 2u:
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( v27 )
      {
        v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
          v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
        if ( v28 )
        {
          v70 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
            v70 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
          if ( v70 )
            return DeviceRegProp;
          v96 = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            a1,
                            (__int64)a2,
                            (__int64)v104,
                            37,
                            (__int64)&v109,
                            (__int64)Str2,
                            (__int64)&v96,
                            v13);
          if ( (DeviceRegProp & 0x80000000) != 0 )
            goto LABEL_73;
          if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
          {
            v71 = v105;
            *v9 = 16;
            *v71 = 13;
            if ( a7 >= *v9 )
            {
              v22 = pszSrc;
              DeviceRegProp = CmGetDeviceContainerIdFromBase(v10, (__int64)pszSrc, Str2, v115);
              if ( (DeviceRegProp & 0x80000000) == 0 )
              {
                DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v115);
                if ( (DeviceRegProp & 0x80000000) == 0 )
                  DeviceRegProp = RtlGUIDFromString(&DestinationString, (GUID *)v11);
              }
              goto LABEL_37;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741275;
        }
        *v9 = 1;
        *a5 = 17;
        if ( v16 < *v9 )
          return (unsigned int)-1073741789;
        v29 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(a1, a2, v104) != 0);
        goto LABEL_58;
      }
LABEL_77:
      DeviceRegProp = CmGetDeviceStatus(
                        v10,
                        (_DWORD)a2,
                        (_DWORD)v104,
                        (unsigned int)&v100,
                        (__int64)&SourceString + 4,
                        (__int64)&SourceString);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_73;
      v36 = *(_DWORD *)(a4 + 16);
      v37 = v100;
      if ( v36 == 2 )
      {
        v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v38 )
          goto LABEL_82;
      }
      if ( v36 != 3 )
        goto LABEL_254;
      v73 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v73 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v73 )
      {
LABEL_82:
        v39 = 7;
      }
      else
      {
LABEL_254:
        if ( (v100 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        v39 = 24;
      }
      v40 = v105;
      *v9 = 4;
      *v40 = v39;
      if ( a7 < *v9 )
        return (unsigned int)-1073741789;
      if ( *(_DWORD *)(a4 + 16) == 12 )
      {
        v94 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
          v94 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
        if ( !v94 )
        {
          if ( (int)PnpGetObjectProperty(
                      v99,
                      (__int64)pszSrc,
                      1LL,
                      (__int64)v104,
                      0LL,
                      (__int64)DEVPKEY_Device_ProblemStatusOverride,
                      (__int64)&v98,
                      (__int64)&v107,
                      4,
                      (__int64)&v96,
                      v103) >= 0
            && v98 == 24 )
          {
            v41 = (int)SourceString;
            if ( v96 == 4 )
              v41 = v107;
            v37 = v100;
LABEL_86:
            v42 = *(_DWORD *)(a4 + 16);
            if ( v42 == 2 )
            {
              v43 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
                v43 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
              if ( !v43 )
              {
                *(_DWORD *)v11 = v37;
                return DeviceRegProp;
              }
            }
            else if ( v42 == 3 )
            {
              v74 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
                v74 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
              if ( !v74 )
              {
                *(_DWORD *)v11 = (v37 & 0x400) != 0 ? HIDWORD(SourceString) : 0;
                return DeviceRegProp;
              }
            }
            *(_DWORD *)v11 = v41;
            return DeviceRegProp;
          }
          v37 = v100;
        }
      }
      v41 = (int)SourceString;
      goto LABEL_86;
    case 3u:
      v35 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v35 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( v35 )
        goto LABEL_25;
      goto LABEL_77;
    case 0xCu:
      v87 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
        v87 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
      if ( v87 )
        return DeviceRegProp;
      goto LABEL_77;
  }
  v18 = 4;
  switch ( v17 )
  {
    case 4u:
      v62 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
        v62 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
      if ( !v62 )
        goto LABEL_213;
      v63 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
        v63 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
      if ( v63 )
        return DeviceRegProp;
      v10 = v99;
      v64 = (__int64)v104;
      v65 = v99;
      *a5 = 17;
      *v9 = 1;
      DeviceRegProp = PnpGetObjectProperty(
                        v65,
                        (__int64)a2,
                        1LL,
                        v64,
                        0LL,
                        (__int64)&DEVPKEY_Device_ContainerId,
                        (__int64)&v98,
                        (__int64)&Buf2,
                        16,
                        (__int64)&v96,
                        v13 & 0xFFFF0000);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_73;
      DeviceRegProp = PnpGetObjectProperty(
                        v10,
                        (__int64)L"HTREE\\ROOT\\0",
                        1LL,
                        0LL,
                        0LL,
                        (__int64)&DEVPKEY_Device_BaseContainerId,
                        (__int64)&v98,
                        (__int64)&Buf1,
                        16,
                        (__int64)&v96,
                        v103);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_73;
      if ( a7 < *v9 )
        return (unsigned int)-1073741789;
      v29 = (memcmp(&Buf1, &Buf2, 0x10uLL) != 0) - 1;
LABEL_58:
      *(_BYTE *)v11 = v29;
      return DeviceRegProp;
    case 5u:
      v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
        v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
      if ( v30 )
      {
        v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
          v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
        if ( v31 )
          return DeviceRegProp;
        *v9 = 1;
        *a5 = 17;
        if ( v16 < *v9 )
          return (unsigned int)-1073741789;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (DeviceRegProp & 0x80000000) == 0 )
        {
          v32 = v99;
          *(_BYTE *)v11 = 0;
          DeviceStatus = NtPlugPlayGetDeviceStatus(
                           v32,
                           (__int64)&DestinationString,
                           (__int64)&v100,
                           (__int64)&SourceString + 4,
                           (__int64)&SourceString);
          DeviceRegProp = DeviceStatus;
          if ( DeviceStatus == -1073741810 )
            return 0;
          if ( DeviceStatus < 0 )
            return DeviceRegProp;
          goto LABEL_69;
        }
LABEL_288:
        v10 = v99;
        goto LABEL_73;
      }
      v18 = 8;
      goto LABEL_213;
    case 6u:
      v44 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
        v44 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
      if ( v44 )
      {
        v45 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
          v45 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
        if ( v45 )
          return DeviceRegProp;
        *a5 = 17;
        *v9 = 1;
        if ( !v16 )
          return (unsigned int)-1073741789;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (DeviceRegProp & 0x80000000) != 0 )
          goto LABEL_288;
        v46 = v99;
        *(_BYTE *)v11 = 0;
        v47 = NtPlugPlayGetDeviceStatus(
                v46,
                (__int64)&DestinationString,
                (__int64)&v100,
                (__int64)&SourceString + 4,
                (__int64)&SourceString);
        DeviceRegProp = v47;
        if ( v47 == -1073741810 )
          return 0;
        if ( v47 < 0 )
          return DeviceRegProp;
        if ( (v100 & 0x8000) != 0 )
          goto LABEL_69;
        if ( (v100 & 0x400) != 0 )
        {
          if ( HIDWORD(SourceString) > 0x1D )
            goto LABEL_69;
          v81 = 591396864;
          if ( !_bittest(&v81, HIDWORD(SourceString)) )
            goto LABEL_69;
        }
        if ( (v100 & 8) != 0 )
          return DeviceRegProp;
        v22 = pszSrc;
        v10 = v99;
        v48 = PnpGetObjectProperty(
                v99,
                (__int64)pszSrc,
                1LL,
                (__int64)v104,
                0LL,
                (__int64)&DEVPKEY_Device_Capabilities,
                (__int64)&v98,
                (__int64)&v108,
                4,
                (__int64)&v96,
                v103);
        DeviceRegProp = v48;
        if ( v48 == -1073741275 )
          return 0;
        if ( v48 < 0 )
          goto LABEL_37;
        v49 = (v108 & 0x40) == 0;
LABEL_107:
        if ( v49 )
          return DeviceRegProp;
        goto LABEL_69;
      }
      v18 = 16;
LABEL_213:
      v84 = v18;
      v10 = v99;
      DeviceRegProp = CmGetDeviceRelationsList(v99, a2, v84, (int)v11, v16 >> 1, (__int64)&v101);
      if ( DeviceRegProp == -1073741772 )
        return (unsigned int)-1073741275;
      if ( DeviceRegProp && DeviceRegProp != -1073741789 )
        goto LABEL_73;
      *v105 = 8210;
      if ( !DeviceRegProp )
      {
        *v9 = 2 * PnpMultiSzGetLen(v11);
        return DeviceRegProp;
      }
      v22 = pszSrc;
      v61 = 2 * v101;
LABEL_127:
      *v9 = v61;
      goto LABEL_37;
    case 7u:
      v88 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
        v88 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
      if ( v88 )
        return DeviceRegProp;
      v18 = 32;
      goto LABEL_213;
    case 0xBu:
      v89 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
        v89 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
      if ( v89 )
        return DeviceRegProp;
      v18 = 64;
      goto LABEL_213;
    case 8u:
      v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
        v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
      if ( v24 )
      {
        v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
          v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
        if ( v25 )
          return DeviceRegProp;
        *a5 = 7;
        *v9 = 4;
        v10 = v99;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( (DeviceRegProp & 0x80000000) != 0 )
          goto LABEL_73;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v99,
                           (__int64)&DestinationString,
                           0xDu,
                           (__int64)v11,
                           v16,
                           (__int64)&a7);
LABEL_47:
        DeviceRegProp = DeviceProperty;
        if ( DeviceProperty != -1073741772 )
        {
          if ( DeviceProperty >= 0 )
            return DeviceRegProp;
          goto LABEL_73;
        }
        return (unsigned int)-1073741275;
      }
      v10 = v99;
      v101 = v16 >> 1;
      DeviceParent = CmGetDeviceParent(v99, a2, v11, &v101);
      DeviceRegProp = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_73;
      *v9 = 2 * v101;
      *v105 = 18;
LABEL_72:
      if ( a7 >= *v9 )
        goto LABEL_73;
      return (unsigned int)-1073741789;
    case 9u:
      v90 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
        v90 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
      if ( v90 )
        return DeviceRegProp;
      v10 = v99;
      v101 = v16 >> 1;
      DeviceSiblings = CmGetDeviceChildren(v99, a2, v11, &v101);
LABEL_219:
      DeviceRegProp = DeviceSiblings;
      if ( DeviceSiblings != -1073741789 && DeviceSiblings )
        goto LABEL_73;
      *v9 = 2 * v101;
      *v105 = 8210;
      goto LABEL_72;
    case 0xFu:
      v78 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
        v78 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v78 )
        return DeviceRegProp;
      *a5 = 17;
      *v9 = 1;
      if ( !v16 )
        return (unsigned int)-1073741789;
      v10 = v99;
      DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_73;
      *(_BYTE *)v11 = 0;
      v79 = NtPlugPlayGetDeviceStatus(
              v10,
              (__int64)&DestinationString,
              (__int64)&v100,
              (__int64)&SourceString + 4,
              (__int64)&SourceString);
      DeviceRegProp = v79;
      if ( v79 == -1073741810 )
        return 0;
      if ( v79 < 0 || (v100 & 0x2000000) != 0 )
        return DeviceRegProp;
      v22 = pszSrc;
      v80 = PnpGetObjectProperty(
              v10,
              (__int64)pszSrc,
              1LL,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_PresenceNotForDevice,
              (__int64)&v98,
              (__int64)v95,
              1,
              (__int64)&v96,
              v103);
      DeviceRegProp = v80;
      if ( v80 < 0 )
      {
        if ( v80 != -1073741275 && v80 != -1073741789 )
          goto LABEL_37;
        DeviceRegProp = 0;
        goto LABEL_69;
      }
      if ( v98 != 17 )
        goto LABEL_69;
      v49 = v95[0] == 0xFF;
      goto LABEL_107;
    case 0x10u:
      v66 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
        v66 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
      if ( v66 )
        return DeviceRegProp;
      *a5 = 17;
      *v9 = 1;
      if ( !v16 )
        return (unsigned int)-1073741789;
      DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (DeviceRegProp & 0x80000000) == 0 )
      {
        v67 = v99;
        *(_BYTE *)v11 = 0;
        v68 = NtPlugPlayGetDeviceStatus(
                v67,
                (__int64)&DestinationString,
                (__int64)&v100,
                (__int64)&SourceString + 4,
                (__int64)&SourceString);
        DeviceRegProp = v68;
        if ( v68 == -1073741810 )
          return 0;
        if ( v68 < 0 )
          return DeviceRegProp;
        if ( (v100 & 0x100) == 0 )
        {
          if ( (v100 & 0x400) == 0 )
            return DeviceRegProp;
          v69 = HIDWORD(SourceString) == 14;
          goto LABEL_149;
        }
LABEL_69:
        *(_BYTE *)v11 = -1;
        return DeviceRegProp;
      }
      goto LABEL_288;
    case 0xEu:
      v82 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
        v82 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
      if ( v82 )
        return DeviceRegProp;
      *a5 = 8210;
      v10 = v99;
      DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_73;
      v83 = 14;
LABEL_211:
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v10,
                         (__int64)&DestinationString,
                         v83,
                         (__int64)v11,
                         v16,
                         (__int64)v9);
      goto LABEL_47;
    case 0x14u:
      v91 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v91 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( v91 )
        return DeviceRegProp;
      *a5 = 8210;
      v10 = v99;
      DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_73;
      v83 = 15;
      goto LABEL_211;
    case 0x15u:
      v92 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v92 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( v92 )
        return DeviceRegProp;
      *a5 = 8210;
      v10 = v99;
      DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( (DeviceRegProp & 0x80000000) != 0 )
        goto LABEL_73;
      v83 = 16;
      goto LABEL_211;
    case 0x1Au:
      v50 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
        v50 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
      if ( v50 )
        return DeviceRegProp;
      *a5 = 17;
      *v9 = 1;
      if ( v16 )
      {
        v51 = (__int64)v104;
        v10 = v99;
        v52 = (__int64)v104;
        *(_BYTE *)v11 = 0;
        v53 = PnpGetObjectProperty(
                v10,
                (__int64)a2,
                1LL,
                v52,
                0LL,
                (__int64)DEVPKEY_Device_UpdateWithUngroupedDrivers,
                (__int64)&v98,
                (__int64)v95,
                1,
                (__int64)&v96,
                v13 & 0xFFFF0000);
        DeviceRegProp = v53;
        if ( v53 < 0 )
        {
          if ( v53 != -1073741275 && v53 != -1073741789 )
            goto LABEL_73;
          goto LABEL_115;
        }
        if ( v98 != 17 || v96 != 1 )
        {
LABEL_115:
          v54 = v51;
          v22 = pszSrc;
          v55 = PnpGetObjectProperty(
                  v10,
                  (__int64)pszSrc,
                  1LL,
                  v54,
                  0LL,
                  (__int64)DEVPKEY_Device_DriverInGroup,
                  (__int64)&v98,
                  (__int64)v95,
                  1,
                  (__int64)&v96,
                  v103);
          DeviceRegProp = v55;
          if ( v55 < 0 )
          {
            if ( v55 != -1073741275 && v55 != -1073741789 )
              goto LABEL_37;
            return 0;
          }
          if ( v98 != 17 || v96 != 1 )
            return DeviceRegProp;
          v69 = v95[0] == 0xFF;
          goto LABEL_149;
        }
        v69 = v95[0] == 0;
LABEL_149:
        if ( !v69 )
          return DeviceRegProp;
        goto LABEL_69;
      }
      return (unsigned int)-1073741789;
  }
  if ( v17 != 22 )
  {
    v10 = v99;
LABEL_25:
    if ( v17 == 23 )
    {
      v19 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundLowerFilters;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundLowerFilters )
        v19 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v19 )
        return DeviceRegProp;
      goto LABEL_29;
    }
    if ( v17 != 102 )
      return DeviceRegProp;
    v75 = *(_QWORD *)a4 - DEVPKEY_Device_EffectiveRestrictedSD;
    if ( *(_QWORD *)a4 == DEVPKEY_Device_EffectiveRestrictedSD )
      v75 = *(_QWORD *)(a4 + 8) - 0x57C1C6A499921E96LL;
    if ( v75 )
      return DeviceRegProp;
    v76 = (__int64)v104;
    DeviceRegProp = PnpGetObjectProperty(
                      v10,
                      (__int64)a2,
                      1LL,
                      (__int64)v104,
                      0LL,
                      (__int64)&DEVPKEY_Device_RestrictedSD,
                      (__int64)&v98,
                      (__int64)v11,
                      v16,
                      (__int64)&v96,
                      v15);
    if ( (int)(DeviceRegProp + 0x80000000) >= 0 && DeviceRegProp != -1073741789 )
    {
      if ( DeviceRegProp != -1073741275 )
        goto LABEL_73;
      goto LABEL_184;
    }
    if ( v98 != 19 )
    {
LABEL_184:
      v77 = v76;
      v22 = pszSrc;
      DeviceRegProp = PnpGetObjectProperty(
                        v10,
                        (__int64)pszSrc,
                        1LL,
                        v77,
                        0LL,
                        (__int64)&DEVPKEY_Device_InheritedRestrictedSD,
                        (__int64)&v98,
                        (__int64)v11,
                        a7,
                        (__int64)&v96,
                        v103);
      if ( (int)(DeviceRegProp + 0x80000000) >= 0 && DeviceRegProp != -1073741789 )
        goto LABEL_37;
      if ( v98 != 19 )
      {
        DeviceRegProp = -1073741275;
        goto LABEL_37;
      }
      *v105 = 19;
LABEL_126:
      v61 = v96;
      goto LABEL_127;
    }
    *v105 = 19;
LABEL_200:
    *v9 = v96;
    goto LABEL_73;
  }
  v72 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
    v72 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  v10 = v99;
  if ( v72 )
    goto LABEL_25;
LABEL_29:
  DeviceRegProp = CmGetDeviceCompoundFilters(v10, (int)a2, v104, a4, (__int64)a5, (__int64)v11, v16, (__int64)v9);
LABEL_73:
  v22 = pszSrc;
LABEL_37:
  if ( DeviceRegProp != -1073741810 )
    return DeviceRegProp;
  DeviceRegProp = CmOpenDeviceRegKey(v10, (__int64)v22, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceRegProp )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceRegProp != -1073741810 && DeviceRegProp != -1073741632 )
    return (unsigned int)-1073741823;
  return DeviceRegProp;
}
