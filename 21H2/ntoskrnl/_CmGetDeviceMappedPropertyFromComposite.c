/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1406313BC (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14072DE7C (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x140240E00 (RtlStringCbCopyExW.c)
 *     RtlUnalignedStringCchLengthW @ 0x140253984 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     wcscmp @ 0x1403D40B0 (wcscmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmGetDeviceStatus @ 0x1405FF680 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1405FF790 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceParent @ 0x14060F984 (_CmGetDeviceParent.c)
 *     _PnpMultiSzGetLen @ 0x140611CBC (_PnpMultiSzGetLen.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14061BED0 (_NtPlugPlayGetDeviceProperty.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     _CmGetDeviceCompoundFilters @ 0x140735858 (_CmGetDeviceCompoundFilters.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075AB3C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14076AAD8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceRelationsList @ 0x1409771C8 (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceChildren @ 0x140979F7C (_CmGetDeviceChildren.c)
 *     _CmGetDeviceSiblings @ 0x14097A964 (_CmGetDeviceSiblings.c)
 */

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
  int *v9; // rsi
  wchar_t *v10; // r15
  int v12; // r8d
  __int64 v13; // r12
  int DeviceStatus; // ebx
  unsigned int v15; // r14d
  unsigned int v16; // eax
  int v17; // r12d
  __int64 v18; // rax
  int v19; // edi
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // edx
  int *v27; // r14
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // r11
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  _DWORD *v39; // r14
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdi
  int ObjectProperty; // eax
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  int DeviceProperty; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rax
  int v62; // eax
  int v63; // eax
  int DeviceParent; // eax
  _DWORD *v65; // r14
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // r9
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // r9
  int v72; // eax
  __int64 v73; // rax
  int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  int DeviceSiblings; // eax
  _DWORD *v79; // r14
  unsigned int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rax
  int DeviceRelationsList; // eax
  unsigned int v84; // eax
  int v85; // r8d
  __int64 v86; // rax
  _DWORD *v87; // r14
  __int64 v88; // rax
  __int64 v89; // rax
  bool v90; // zf
  unsigned int v91; // [rsp+30h] [rbp-D0h]
  char v92[8]; // [rsp+60h] [rbp-A0h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+68h] [rbp-98h]
  __int64 v94; // [rsp+70h] [rbp-90h]
  int v95; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v96; // [rsp+7Ch] [rbp-84h] BYREF
  int v97; // [rsp+80h] [rbp-80h] BYREF
  int v98; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v99; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v100; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v101; // [rsp+90h] [rbp-70h]
  __int64 v102; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v104; // [rsp+B0h] [rbp-50h]
  unsigned int v105; // [rsp+B8h] [rbp-48h] BYREF
  int v106; // [rsp+BCh] [rbp-44h] BYREF
  int v107; // [rsp+C0h] [rbp-40h] BYREF
  size_t pcchLength; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  __int128 Buf2; // [rsp+D8h] [rbp-28h] BYREF
  __int128 Buf1; // [rsp+E8h] [rbp-18h] BYREF
  wchar_t Str2[40]; // [rsp+100h] [rbp+0h] BYREF
  WCHAR SourceString[40]; // [rsp+150h] [rbp+50h] BYREF

  v9 = a8;
  v10 = a6;
  pszSrc = a2;
  v102 = a3;
  v12 = a9;
  v13 = a1;
  v94 = a1;
  DeviceStatus = 0;
  v104 = a5;
  v99 = 0;
  v105 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v100 = 0;
  v106 = 0;
  pcchLength = 0LL;
  Handle = 0LL;
  v98 = 0;
  v107 = 0;
  v92[0] = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *v9 = 0;
  v101 = v12 & 0xFFFF0000;
  if ( a6 )
  {
    v15 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v15 = 0;
    a7 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  switch ( v16 )
  {
    case 0xAu:
      v43 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v43 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v43 )
      {
        v44 = v102;
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           (__int64)a2,
                           1LL,
                           v102,
                           0LL,
                           (__int64)&DEVPKEY_Device_FriendlyName,
                           (__int64)a5,
                           (__int64)v10,
                           v15,
                           (__int64)&v95,
                           v12 & 0xFFFF0000);
        DeviceStatus = ObjectProperty;
        if ( !ObjectProperty || ObjectProperty == -1073741789 )
        {
          *v9 = v95;
        }
        else if ( ObjectProperty == -1073741275 )
        {
          v46 = v44;
          v19 = (int)pszSrc;
          v47 = PnpGetObjectProperty(
                  v13,
                  (__int64)pszSrc,
                  1LL,
                  v46,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)v104,
                  (__int64)v10,
                  a7,
                  (__int64)&v95,
                  v101);
          DeviceStatus = v47;
          if ( !v47 || v47 == -1073741789 )
          {
            *v9 = v95;
          }
          else if ( v47 == -1073741275 )
          {
            return (unsigned int)DeviceStatus;
          }
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      v77 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
        v77 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
      if ( v77 )
        return (unsigned int)DeviceStatus;
      v96 = v15 >> 1;
      DeviceSiblings = CmGetDeviceSiblings(a1, a2, v10, &v96);
      goto LABEL_244;
    case 0x100u:
      v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v30 )
        return (unsigned int)DeviceStatus;
      DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      *v9 = 2 * pcchLength + 2;
      *v31 = 18;
      if ( v15 < *v9 )
        return (unsigned int)-1073741789;
      v19 = (int)pszSrc;
      DeviceStatus = RtlStringCbCopyExW(v10, (unsigned int)*v9, pszSrc, 0LL, 0LL, 0x900u);
      if ( DeviceStatus >= 0 )
        goto LABEL_31;
      v79 = v104;
      goto LABEL_219;
    case 2u:
      v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( !v22 )
        goto LABEL_40;
      break;
  }
  if ( v16 == 3 )
  {
    v54 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
      v54 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
    if ( !v54 )
    {
LABEL_40:
      DeviceStatus = CmGetDeviceStatus(v13, a2, v102, &v97, &v100, &v99, v91);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      v23 = *(_DWORD *)(a4 + 16);
      v24 = v97;
      if ( v23 == 2 )
      {
        v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v25 )
          goto LABEL_45;
      }
      if ( v23 != 3 )
        goto LABEL_151;
      v58 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v58 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v58 )
      {
LABEL_45:
        v26 = 7;
      }
      else
      {
LABEL_151:
        if ( (v97 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        v26 = 24;
      }
      v27 = v104;
      *v9 = 4;
      *v27 = v26;
      if ( a7 < *v9 )
        return (unsigned int)-1073741789;
      if ( *(_DWORD *)(a4 + 16) == 12 )
      {
        v76 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
          v76 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
        if ( !v76 )
        {
          if ( (int)PnpGetObjectProperty(
                      v94,
                      (__int64)pszSrc,
                      1LL,
                      v102,
                      0LL,
                      (__int64)DEVPKEY_Device_ProblemStatusOverride,
                      (__int64)&v98,
                      (__int64)&v105,
                      4,
                      (__int64)&v95,
                      v101) >= 0
            && v98 == 24 )
          {
            v80 = v99;
            if ( v95 == 4 )
              v80 = v105;
            v99 = v80;
          }
          v24 = v97;
        }
      }
      v28 = *(_DWORD *)(a4 + 16);
      if ( v28 == 2 )
      {
        v29 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v29 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v29 )
        {
          *(_DWORD *)v10 = v24;
          goto LABEL_53;
        }
      }
      else if ( v28 == 3 )
      {
        v59 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v59 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( !v59 )
        {
          v60 = (v24 & 0x400) != 0 ? v100 : 0;
LABEL_158:
          *(_DWORD *)v10 = v60;
          goto LABEL_53;
        }
      }
      v60 = v99;
      goto LABEL_158;
    }
  }
  if ( v16 == 12 )
  {
    v75 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v75 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( v75 )
      return (unsigned int)DeviceStatus;
    goto LABEL_40;
  }
  v17 = 4;
  switch ( v16 )
  {
    case 4u:
      v48 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
        v48 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
      if ( v48 )
      {
        v49 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
          v49 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
        if ( v49 )
          return (unsigned int)DeviceStatus;
        v13 = v94;
        v50 = v102;
        v51 = v94;
        *a5 = 17;
        *v9 = 1;
        DeviceStatus = PnpGetObjectProperty(
                         v51,
                         (__int64)a2,
                         1LL,
                         v50,
                         0LL,
                         (__int64)&DEVPKEY_Device_ContainerId,
                         (__int64)&v98,
                         (__int64)&Buf2,
                         16,
                         (__int64)&v95,
                         v12 & 0xFFFF0000);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        DeviceStatus = PnpGetObjectProperty(
                         v13,
                         (__int64)L"HTREE\\ROOT\\0",
                         1LL,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_BaseContainerId,
                         (__int64)&v98,
                         (__int64)&Buf1,
                         16,
                         (__int64)&v95,
                         v101);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        if ( a7 >= *v9 )
        {
          *(_BYTE *)v10 = (memcmp(&Buf1, &Buf2, 0x10uLL) != 0) - 1;
          goto LABEL_30;
        }
        return (unsigned int)-1073741789;
      }
      goto LABEL_234;
    case 5u:
      v40 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
        v40 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
      if ( v40 )
      {
        v41 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
          v41 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
        if ( v41 )
          return (unsigned int)DeviceStatus;
        *v9 = 1;
        *a5 = 17;
        if ( v15 < *v9 )
          return (unsigned int)-1073741789;
        v13 = v94;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        *(_BYTE *)v10 = 0;
        v42 = NtPlugPlayGetDeviceStatus(v13, (__int64)&DestinationString, (__int64)&v97, (__int64)&v100, (__int64)&v99);
        DeviceStatus = v42;
        if ( v42 != -1073741810 )
        {
          v19 = (int)pszSrc;
          if ( v42 < 0 )
            goto LABEL_31;
LABEL_101:
          *(_BYTE *)v10 = -1;
          goto LABEL_31;
        }
        return 0;
      }
      v17 = 8;
      goto LABEL_234;
    case 6u:
      v32 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
        v32 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
      if ( !v32 )
      {
        v17 = 16;
LABEL_234:
        DeviceRelationsList = CmGetDeviceRelationsList(v94, (_DWORD)a2, v17, 0, 0, (__int64)&v96);
        DeviceStatus = DeviceRelationsList;
        if ( DeviceRelationsList == -1073741772 || !DeviceRelationsList )
          return (unsigned int)-1073741275;
        if ( DeviceRelationsList != -1073741789 )
        {
          LODWORD(v13) = v94;
          goto LABEL_30;
        }
        v79 = v104;
        *v9 = 2 * v96;
        v84 = a7;
        *v79 = 8210;
        if ( v84 < *v9 )
          return (unsigned int)-1073741789;
        v19 = (int)pszSrc;
        v85 = v17;
        LODWORD(v13) = v94;
        DeviceStatus = CmGetDeviceRelationsList(v94, (_DWORD)pszSrc, v85, (_DWORD)v10, v84 >> 1, (__int64)&v96);
        if ( !DeviceStatus )
        {
          *v9 = 2 * PnpMultiSzGetLen(v10);
          return (unsigned int)DeviceStatus;
        }
LABEL_219:
        *v9 = 0;
        *v79 = 0;
        goto LABEL_31;
      }
      v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
        v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
      if ( v33 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v9 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus >= 0 )
      {
        v34 = v94;
        *(_BYTE *)v10 = 0;
        v35 = NtPlugPlayGetDeviceStatus(v34, (__int64)&DestinationString, (__int64)&v97, (__int64)&v100, (__int64)&v99);
        DeviceStatus = v35;
        if ( v35 == -1073741810 )
          return 0;
        if ( v35 >= 0 )
        {
          if ( (v97 & 0x8000) == 0 )
          {
            if ( (v97 & 0x400) == 0 || v100 <= 0x1D && (v74 = 591396864, _bittest(&v74, v100)) )
            {
              v19 = (int)pszSrc;
              if ( (v97 & 8) == 0 )
              {
                LODWORD(v13) = v94;
                v36 = PnpGetObjectProperty(
                        v94,
                        (__int64)pszSrc,
                        1LL,
                        v102,
                        0LL,
                        (__int64)&DEVPKEY_Device_Capabilities,
                        (__int64)&v98,
                        (__int64)&v106,
                        4,
                        (__int64)&v95,
                        v101);
                DeviceStatus = v36;
                if ( v36 == -1073741275 )
                  return 0;
                if ( v36 < 0 )
                  goto LABEL_31;
                if ( (v106 & 0x40) != 0 )
                  *(_BYTE *)v10 = -1;
              }
LABEL_54:
              LODWORD(v13) = v94;
              goto LABEL_31;
            }
          }
          *(_BYTE *)v10 = -1;
        }
      }
LABEL_53:
      v19 = (int)pszSrc;
      goto LABEL_54;
    case 7u:
      v81 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
        v81 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
      if ( v81 )
        return (unsigned int)DeviceStatus;
      v17 = 32;
      goto LABEL_234;
    case 0xBu:
      v82 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
        v82 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
      if ( v82 )
        return (unsigned int)DeviceStatus;
      v17 = 64;
      goto LABEL_234;
    case 8u:
      v55 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
        v55 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
      if ( v55 )
      {
        v56 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
          v56 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
        if ( v56 )
          return (unsigned int)DeviceStatus;
        *a5 = 7;
        *v9 = 4;
        LODWORD(v13) = v94;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_30;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v94,
                           (__int64)&DestinationString,
                           0xDu,
                           (__int64)v10,
                           v15,
                           (__int64)&a7);
LABEL_145:
        DeviceStatus = DeviceProperty;
        if ( DeviceProperty == -1073741772 )
          return (unsigned int)-1073741275;
        goto LABEL_30;
      }
      LODWORD(v13) = v94;
      v96 = v15 >> 1;
      DeviceParent = CmGetDeviceParent(v94, a2, v10, &v96);
      DeviceStatus = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_30;
      v65 = v104;
      *v9 = 2 * v96;
      *v65 = 18;
      goto LABEL_178;
    case 9u:
      v86 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
        v86 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
      if ( v86 )
        return (unsigned int)DeviceStatus;
      LODWORD(v13) = v94;
      v96 = v15 >> 1;
      DeviceSiblings = CmGetDeviceChildren(v94, a2, v10, &v96);
LABEL_244:
      DeviceStatus = DeviceSiblings;
      if ( DeviceSiblings != -1073741789 && DeviceSiblings )
        goto LABEL_30;
      v87 = v104;
      *v9 = 2 * v96;
      *v87 = 8210;
LABEL_178:
      if ( a7 >= *v9 )
        goto LABEL_30;
      return (unsigned int)-1073741789;
    case 2u:
      v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
        v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
      if ( !v37 )
      {
        *v9 = 1;
        *a5 = 17;
        if ( v15 >= *v9 )
        {
          *(_BYTE *)v10 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(v94, a2, v102) != 0);
          return (unsigned int)DeviceStatus;
        }
        return (unsigned int)-1073741789;
      }
      v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
        v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
      if ( v38 )
        return (unsigned int)DeviceStatus;
      v13 = v94;
      v95 = 78;
      DeviceStatus = CmGetDeviceRegProp(v94, (_DWORD)a2, v102, 37, (__int64)&v107, (__int64)Str2, (__int64)&v95, v12);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
      {
        v39 = v104;
        *v9 = 16;
        *v39 = 13;
        if ( a7 >= *v9 )
        {
          v19 = (int)pszSrc;
          DeviceStatus = CmGetDeviceContainerIdFromBase(v13, pszSrc, Str2, SourceString);
          if ( DeviceStatus >= 0 )
          {
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
            if ( DeviceStatus >= 0 )
              DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v10);
          }
          goto LABEL_31;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741275;
    case 0xFu:
      v61 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
        v61 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v61 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v9 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      v13 = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      *(_BYTE *)v10 = 0;
      v62 = NtPlugPlayGetDeviceStatus(v13, (__int64)&DestinationString, (__int64)&v97, (__int64)&v100, (__int64)&v99);
      DeviceStatus = v62;
      if ( v62 != -1073741810 )
      {
        if ( v62 >= 0 )
        {
          v19 = (int)pszSrc;
          if ( (v97 & 0x2000000) != 0 )
            goto LABEL_31;
          v63 = PnpGetObjectProperty(
                  v13,
                  (__int64)pszSrc,
                  1LL,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                  (__int64)&v98,
                  (__int64)v92,
                  1,
                  (__int64)&v95,
                  v101);
          DeviceStatus = v63;
          if ( v63 >= 0 )
          {
            if ( v98 == 17 && v92[0] == -1 )
              goto LABEL_31;
          }
          else
          {
            if ( v63 != -1073741275 && v63 != -1073741789 )
              goto LABEL_31;
            DeviceStatus = 0;
          }
          goto LABEL_101;
        }
        goto LABEL_30;
      }
      return 0;
    case 0x10u:
      v52 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
        v52 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
      if ( v52 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v9 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      v13 = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      *(_BYTE *)v10 = 0;
      v53 = NtPlugPlayGetDeviceStatus(v13, (__int64)&DestinationString, (__int64)&v97, (__int64)&v100, (__int64)&v99);
      DeviceStatus = v53;
      if ( v53 != -1073741810 )
      {
        if ( v53 >= 0 && ((v97 & 0x100) != 0 || (v97 & 0x400) != 0 && v100 == 14) )
          *(_BYTE *)v10 = -1;
        goto LABEL_30;
      }
      return 0;
    case 0xEu:
      v73 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
        v73 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
      if ( v73 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      LODWORD(v13) = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v94,
                         (__int64)&DestinationString,
                         0xEu,
                         (__int64)v10,
                         v15,
                         (__int64)v9);
      goto LABEL_145;
    case 0x14u:
      v88 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v88 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( v88 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      LODWORD(v13) = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v94,
                         (__int64)&DestinationString,
                         0xFu,
                         (__int64)v10,
                         v15,
                         (__int64)v9);
      goto LABEL_145;
    case 0x15u:
      v89 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v89 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( v89 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      LODWORD(v13) = v94;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_30;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v94,
                         (__int64)&DestinationString,
                         0x10u,
                         (__int64)v10,
                         v15,
                         (__int64)v9);
      goto LABEL_145;
  }
  if ( v16 != 26 )
  {
    if ( v16 != 22 )
      goto LABEL_28;
    v21 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
    if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
      v21 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
    if ( v21 )
    {
LABEL_28:
      if ( v16 != 23 )
        return (unsigned int)DeviceStatus;
      v18 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundLowerFilters;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundLowerFilters )
        v18 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v18 )
        return (unsigned int)DeviceStatus;
    }
    LODWORD(v13) = v94;
    DeviceStatus = CmGetDeviceCompoundFilters(v94, (__int64)a5, (__int64)v10, v15, (__int64)v9);
    goto LABEL_30;
  }
  v66 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
    v66 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
  if ( v66 )
    return (unsigned int)DeviceStatus;
  *a5 = 17;
  *v9 = 1;
  if ( !v15 )
    return (unsigned int)-1073741789;
  v67 = v102;
  v13 = v94;
  v68 = v102;
  v69 = v94;
  *(_BYTE *)v10 = 0;
  v70 = PnpGetObjectProperty(
          v69,
          (__int64)a2,
          1LL,
          v68,
          0LL,
          (__int64)DEVPKEY_Device_UpdateWithUngroupedDrivers,
          (__int64)&v98,
          (__int64)v92,
          1,
          (__int64)&v95,
          v12 & 0xFFFF0000);
  DeviceStatus = v70;
  if ( v70 < 0 )
  {
    if ( v70 == -1073741275 || v70 == -1073741789 )
      goto LABEL_186;
LABEL_30:
    v19 = (int)pszSrc;
    goto LABEL_31;
  }
  if ( v98 == 17 && v95 == 1 )
  {
    v19 = (int)pszSrc;
    v90 = v92[0] == 0;
    goto LABEL_265;
  }
LABEL_186:
  v71 = v67;
  v19 = (int)pszSrc;
  v72 = PnpGetObjectProperty(
          v13,
          (__int64)pszSrc,
          1LL,
          v71,
          0LL,
          (__int64)DEVPKEY_Device_DriverInGroup,
          (__int64)&v98,
          (__int64)v92,
          1,
          (__int64)&v95,
          v101);
  DeviceStatus = v72;
  if ( v72 < 0 )
  {
    if ( v72 == -1073741275 || v72 == -1073741789 )
      DeviceStatus = 0;
    goto LABEL_31;
  }
  if ( v98 == 17 && v95 == 1 )
  {
    v90 = v92[0] == -1;
LABEL_265:
    if ( !v90 )
      goto LABEL_31;
    goto LABEL_101;
  }
LABEL_31:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  DeviceStatus = CmOpenDeviceRegKey(v13, v19, 16, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceStatus )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceStatus != -1073741810 && DeviceStatus != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
