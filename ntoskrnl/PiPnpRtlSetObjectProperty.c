/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x140686898
 * Callers:
 *     PiSwPropertySet @ 0x140785B60 (PiSwPropertySet.c)
 *     PiCMSetObjectProperty @ 0x14078B060 (PiCMSetObjectProperty.c)
 *     PiDqIrpPropertySet @ 0x1407FB7F4 (PiDqIrpPropertySet.c)
 *     PnpSetDevicePropertyData @ 0x140863B28 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14086B858 (PnpSetDeviceInterfacePropertyData.c)
 *     PiDevCfgSetObjectProperty @ 0x140874858 (PiDevCfgSetObjectProperty.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CD550 (_CmIsRootEnumeratedDevice.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14070F610 (SeAuditingWithTokenForSubcategory.c)
 *     _CmSplitDevicePanelId @ 0x14082509C (_CmSplitDevicePanelId.c)
 *     _CmUpdateDevicePanelInterface @ 0x140881498 (_CmUpdateDevicePanelInterface.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14096C764 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x14096C7A8 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        STRSAFE_PCNZWCH pszSrc,
        unsigned int a9,
        int a10)
{
  unsigned int v11; // r12d
  unsigned int v13; // r15d
  int v14; // ecx
  char *v15; // r9
  unsigned int i; // r10d
  _QWORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r13
  int v23; // ebx
  int v24; // esi
  int v25; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r10d
  __int64 (**v36)[2]; // r8
  unsigned int v37; // r9d
  __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  struct _KTHREAD *v46; // rax
  struct _KTHREAD *v48; // rax
  __int64 v50; // r9
  __int64 v51; // r8
  char v52; // [rsp+60h] [rbp-81h]
  char v53; // [rsp+61h] [rbp-80h]
  int v54; // [rsp+64h] [rbp-7Dh] BYREF
  int v55; // [rsp+68h] [rbp-79h] BYREF
  unsigned int v56; // [rsp+6Ch] [rbp-75h] BYREF
  int v57; // [rsp+70h] [rbp-71h] BYREF
  int v58; // [rsp+74h] [rbp-6Dh] BYREF
  unsigned int v59; // [rsp+78h] [rbp-69h]
  __int64 v60; // [rsp+80h] [rbp-61h]
  __int64 v61; // [rsp+88h] [rbp-59h]
  int v62; // [rsp+90h] [rbp-51h]
  int v63; // [rsp+94h] [rbp-4Dh]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-49h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-39h]
  __int128 v66; // [rsp+B0h] [rbp-31h] BYREF
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v61 = a1;
  v11 = 5;
  v60 = a4;
  v65 = a5;
  v63 = 0;
  v13 = 0;
  v62 = 0;
  v54 = 0;
  v58 = 0;
  v56 = 0;
  v59 = 0;
  v55 = 0;
  v57 = 0;
  v53 = 0;
  v52 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  v66 = 0LL;
  if ( a3 != 1 )
  {
    if ( a3 == 3 )
    {
      if ( *(_DWORD *)(a6 + 16) == 256 )
      {
        v44 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
          v44 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
        if ( !v44 )
          return (unsigned int)-1073741790;
      }
    }
    else if ( a3 == 5 )
    {
      v35 = *(_DWORD *)(a6 + 16);
      v36 = &PiPnpRtlContainerReadOnlyProps;
      v37 = 0;
      while ( 1 )
      {
        v38 = (__int64 *)*v36;
        if ( v35 == LODWORD((**v36)[2]) )
        {
          v39 = *(_QWORD *)a6 - *v38;
          if ( *(_QWORD *)a6 == *v38 )
            v39 = *(_QWORD *)(a6 + 8) - v38[1];
          if ( !v39 )
            return (unsigned int)-1073741790;
        }
        ++v37;
        ++v36;
        if ( v37 >= 2 )
        {
          if ( v35 != 105 )
            break;
          v43 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
            v43 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
          if ( v43 || a7 == 7 )
            break;
          return (unsigned int)-1073741811;
        }
      }
    }
LABEL_18:
    v22 = v61;
    v23 = PnpSetObjectProperty(v61, (_DWORD)a2, a3, v65, a6, a7, (__int64)pszSrc, a9, a10);
    v24 = a3 - 1;
    if ( v24 )
    {
      if ( v24 == 2 && v23 >= 0 && *(_DWORD *)(a6 + 16) == 9 )
      {
        v27 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1 )
          v27 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data4;
        if ( !v27 )
          CmUpdateDevicePanelInterface(v22, a2, v60);
      }
      goto LABEL_21;
    }
    v25 = *(_DWORD *)(a6 + 16);
    if ( v25 == 12 )
    {
      v42 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
        v42 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      if ( !v42 && v52 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        LOBYTE(v50) = v23 >= 0;
        PiAuditDeviceEnableDisableRequest(&DestinationString, v56, v59, v50);
      }
      goto LABEL_21;
    }
    if ( v25 == 5 )
    {
      v33 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
      if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
        v33 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
      if ( !v33 && v52 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        if ( v57 == -536870328 )
        {
          if ( v13 == -536870328 )
            goto LABEL_21;
          v11 = 6;
        }
        else if ( v13 != -536870328 )
        {
          goto LABEL_21;
        }
        LOBYTE(v51) = v23 >= 0;
        PiAuditDeviceOperation(&DestinationString, v11, v51);
      }
    }
LABEL_21:
    if ( v53 )
    {
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v23;
  }
  v14 = *(_DWORD *)(a6 + 16);
  v15 = (char *)&PiPnpRtlDeviceReadOnlyProps;
  for ( i = 0; i < 0x10; ++i )
  {
    v17 = *(_QWORD **)v15;
    if ( v14 == *(_DWORD *)(*(_QWORD *)v15 + 16LL) )
    {
      v28 = *(_QWORD *)a6 - *v17;
      if ( *(_QWORD *)a6 == *v17 )
        v28 = *(_QWORD *)(a6 + 8) - v17[1];
      if ( !v28 )
        return (unsigned int)-1073741790;
    }
    v15 += 8;
  }
  if ( v14 == 12 )
  {
    v20 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    v19 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    v40 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
      v40 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    if ( v40 || pszSrc && a9 == 4 )
      goto LABEL_15;
  }
  else
  {
    if ( v14 == 3 )
    {
      v31 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
        v31 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
      if ( !v31 )
      {
LABEL_92:
        if ( !(unsigned __int8)CmIsRootEnumeratedDevice(a2) )
          return (unsigned int)-1073741790;
        goto LABEL_14;
      }
    }
    if ( v14 == 4 )
    {
      v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
        v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
      if ( !v34 )
        goto LABEL_92;
LABEL_14:
      v19 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      v20 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
LABEL_15:
      v21 = *(_DWORD *)(a6 + 16);
      switch ( v21 )
      {
        case 10:
          v29 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
            v29 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
          if ( !v29 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v53 = 1;
          }
          break;
        case 12:
          v41 = *(_QWORD *)a6 - v20;
          if ( *(_QWORD *)a6 == v20 )
            v41 = *(_QWORD *)(a6 + 8) - v19;
          if ( !v41 )
          {
            v46 = KeGetCurrentThread();
            --v46->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v53 = 1;
            if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
            {
              v52 = 1;
              v54 = 4;
              if ( (int)CmGetDeviceRegProp(v61, (_DWORD)a2, v60, 11, (__int64)&v58, (__int64)&v56, (__int64)&v54, 0) < 0
                || v54 != 4
                || v58 != 4 )
              {
                v56 = 0;
              }
              v59 = *(_DWORD *)pszSrc;
            }
          }
          break;
        case 5:
          v32 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
          if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
            v32 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
          if ( !v32 )
          {
            v48 = KeGetCurrentThread();
            --v48->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v53 = 1;
            if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
            {
              v54 = 4;
              v52 = 1;
              if ( (int)PnpGetObjectProperty(
                          v61,
                          (_DWORD)a2,
                          1,
                          v60,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstallError,
                          (__int64)&v55,
                          (__int64)&v57,
                          4,
                          (__int64)&v54,
                          0) < 0
                || v54 != 4
                || v55 != 23 )
              {
                v57 = 0;
              }
              if ( a9 == 4 && a7 == 23 )
                v13 = *(_DWORD *)pszSrc;
            }
          }
          break;
      }
      goto LABEL_18;
    }
    if ( v14 != 2 )
      goto LABEL_14;
    v18 = *(_QWORD *)a6 - DEVPKEY_Device_PanelId;
    if ( *(_QWORD *)a6 == DEVPKEY_Device_PanelId )
      v18 = *(_QWORD *)(a6 + 8) + 0x5292C1A216403965LL;
    if ( v18 )
      goto LABEL_14;
    if ( pszSrc
      && a9 >= 2
      && a7 == 18
      && !pszSrc[((unsigned __int64)a9 >> 1) - 1]
      && (int)CmSplitDevicePanelId(pszSrc, &Guid) >= 0
      && (int)PnpGetObjectProperty(
                v61,
                (_DWORD)a2,
                1,
                v60,
                0LL,
                (__int64)&DEVPKEY_Device_ContainerId,
                (__int64)&v55,
                (__int64)&v66,
                16,
                (__int64)&v54,
                0) >= 0
      && v55 == 13
      && v54 == 16 )
    {
      v45 = v66 - *(_QWORD *)&Guid.Data1;
      if ( (_QWORD)v66 == *(_QWORD *)&Guid.Data1 )
        v45 = *((_QWORD *)&v66 + 1) - *(_QWORD *)Guid.Data4;
      if ( !v45 )
        goto LABEL_14;
    }
  }
  return (unsigned int)-1073741811;
}
