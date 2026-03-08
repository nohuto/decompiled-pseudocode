/*
 * XREFs of PiPnpRtlCmActionCallback @ 0x1406CE2F0
 * Callers:
 *     <none>
 * Callees:
 *     _CmDevicePropertyRead @ 0x140244C38 (_CmDevicePropertyRead.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     _CmClassPropertyRead @ 0x1402C0BC8 (_CmClassPropertyRead.c)
 *     _CmDevicePropertyWrite @ 0x1402F43F0 (_CmDevicePropertyWrite.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     McTemplateK0zjdd_EtwWriteTransfer @ 0x14055F3E8 (McTemplateK0zjdd_EtwWriteTransfer.c)
 *     _CmClassPropertyWrite @ 0x140671848 (_CmClassPropertyWrite.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140680BEC (PiDmRemoveCacheReferenceForObject.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     PnpIsNullGuid @ 0x140689294 (PnpIsNullGuid.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PiDmListAddObject @ 0x1406CBAD4 (PiDmListAddObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406CBBDC (PiDmAddCacheReferenceForObject.c)
 *     _CmIsRootEnumeratedDevice @ 0x1406CD550 (_CmIsRootEnumeratedDevice.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1406CE8B0 (PiDmObjectGetCachedCmProperty.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x1406CE9F8 (PiDmObjectUpdateCachedCmProperty.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1406CEAE4 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406CFAD4 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D0370 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1406D0C78 (PiPnpRtlCacheObjectBaseKey.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     _CmGetInstallerClassRegProp @ 0x14074DF34 (_CmGetInstallerClassRegProp.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140777284 (PiPnpRtlGetFilteredDeviceList.c)
 *     PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140777504 (PiPnpRtlGetFilteredDeviceInterfaceList.c)
 *     PiDmGetCmObjectListFromCache @ 0x1407777AC (PiDmGetCmObjectListFromCache.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1408731D4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmListAddList @ 0x14087DCD8 (PiDmListAddList.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14087FABC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PnpIsValidGuidString @ 0x14087FB20 (PnpIsValidGuidString.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x1409573B4 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x1409573F8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140957458 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140957504 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14095763C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x1409578EC (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDmListRemoveList @ 0x140957DFC (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140957F4C (PiDmListRemoveObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlCmActionCallback(
        __int64 a1,
        const wchar_t *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  unsigned int v9; // esi
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int FilteredDeviceInterfaceList; // eax
  unsigned int v15; // eax
  int v17; // r9d
  __int64 v18; // r9
  int v19; // r9d
  unsigned int v20; // eax
  void *Pool2; // r12
  int v22; // r9d
  __int64 v23; // rcx
  int DeviceRegProp; // eax
  int v25; // esi
  bool v26; // sf
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rsi
  __int64 **v31; // rbx
  __int64 *v32; // rdx
  ULONG_PTR v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rdx
  size_t v36; // rsi
  int v37; // eax
  __int64 v38; // r9
  void *v39; // r14
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r14d
  __int64 v44; // rdx
  __int64 v45; // r9
  struct _KTHREAD *CurrentThread; // rcx
  int v47; // ebx
  unsigned int v48; // eax
  int v49; // r9d
  __int64 v50; // rcx
  WCHAR *v51; // rsi
  bool v52; // al
  __int64 v53; // r8
  bool IsNullGuid; // al
  __int64 v55; // r8
  _QWORD *v56; // rax
  _DWORD *v57; // rdx
  _QWORD *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // r9
  int v64; // eax
  int Object; // esi
  void *v66; // r14
  __int64 v67; // rcx
  _QWORD *v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  _BYTE v73[8]; // [rsp+50h] [rbp-39h] BYREF
  size_t Size; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-29h] BYREF
  __int64 v76; // [rsp+70h] [rbp-19h]
  char v77; // [rsp+78h] [rbp-11h]
  int v78; // [rsp+79h] [rbp-10h]
  __int16 v79; // [rsp+7Dh] [rbp-Ch]
  char v80; // [rsp+7Fh] [rbp-Ah]
  GUID Guid; // [rsp+80h] [rbp-9h] BYREF

  v9 = -1073741822;
  if ( (int)a4 > 13 )
  {
    v17 = a4 - 14;
    if ( !v17 )
    {
      if ( a5 != 1 )
      {
        if ( a3 == 5 )
        {
          if ( *(int *)a6 < 0 )
            return 0;
          v68 = *(_QWORD **)(a6 + 8);
          v73[0] = 0;
          v69 = v68[1];
          if ( v69 )
          {
            if ( *v68 )
            {
              PiDmListRemoveObject(4LL, v69, *v68, v73);
              if ( v73[0] )
                PiDmListRemoveList(v70, v68[1], v71, *v68);
            }
          }
        }
        else
        {
          if ( a3 != 6 || *(int *)a6 < 0 )
            return 0;
          v68 = *(_QWORD **)(a6 + 8);
          v72 = v68[1];
          if ( v72 && *v68 )
            PiDmListRemoveObject(6LL, v72, *v68, v73);
        }
        PiPnpRtlFreePanelRemoveInfo(v68);
        return 0;
      }
      if ( a3 == 5 )
      {
        v67 = *(_QWORD *)(a6 + 24);
        Size = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherContainerRemoveInfo(v67, a2, &Size);
      }
      else
      {
        if ( a3 != 6 )
          return v9;
        v50 = *(_QWORD *)(a6 + 24);
        Size = 0LL;
        FilteredDeviceInterfaceList = PiPnpRtlGatherPanelRemoveInfo(v50, a2, &Size);
      }
LABEL_114:
      v9 = FilteredDeviceInterfaceList;
      if ( FilteredDeviceInterfaceList >= 0 )
      {
        *(_QWORD *)(a6 + 8) = Size;
        return v9;
      }
      goto LABEL_31;
    }
    v18 = (unsigned int)(v17 - 1);
    if ( (_DWORD)v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 1 || a5 != 1 || (*(_DWORD *)(a6 + 80) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceInterfaceList(a6);
      }
      else
      {
        if ( a5 != 1 || (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
          return v9;
        FilteredDeviceInterfaceList = PiPnpRtlGetFilteredDeviceList(a6);
      }
LABEL_30:
      if ( FilteredDeviceInterfaceList != -1073741802 )
      {
LABEL_31:
        *(_DWORD *)a6 = FilteredDeviceInterfaceList;
        return (unsigned int)-1073741536;
      }
      return 0;
    }
    if ( a5 != 1 )
      return v9;
    if ( a3 == 5 )
    {
      if ( (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      Size = 0LL;
      Object = PiDmGetObject(5LL, a2, &Size, v18);
      if ( Object < 0 )
        goto LABEL_167;
      v66 = (void *)Size;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v76 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = a1;
      do
      {
        v77 = 0;
        Object = PiDmListEnumObjectsWithCallback(4LL, v66, PiPnpRtlEnumDevicesCallback, &DestinationString);
      }
      while ( Object >= 0 && v77 );
    }
    else
    {
      if ( a3 != 6 || (*(_DWORD *)(a6 + 40) & 0x10000) != 0 )
        return v9;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      Size = 0LL;
      Object = PiDmGetObject(6LL, a2, &Size, v18);
      if ( Object < 0 )
        goto LABEL_167;
      v66 = (void *)Size;
      DestinationString.Buffer = *(wchar_t **)(a6 + 24);
      v76 = *(_QWORD *)(a6 + 32);
      *(_QWORD *)&DestinationString.Length = a1;
      do
      {
        v77 = 0;
        Object = PiDmListEnumObjectsWithCallback(6LL, v66, PiPnpRtlEnumDevicesCallback, &DestinationString);
      }
      while ( Object >= 0 && v77 );
    }
    if ( v66 )
      PiDmObjectRelease(v66);
LABEL_167:
    *(_DWORD *)a6 = Object;
    return (unsigned int)-1073741536;
  }
  if ( (_DWORD)a4 == 13 )
  {
    if ( a5 == 1 )
      return 0;
    if ( a3 == 5 )
    {
      if ( *(int *)a6 < 0 )
        return 0;
      *(_QWORD *)&Guid.Data1 = 0LL;
      Size = 0LL;
      v36 = 0LL;
      v73[0] = 0;
      v37 = PiDmGetObject(5LL, a2, &Guid, a4);
      v39 = *(void **)&Guid.Data1;
      if ( v37 >= 0 )
      {
        v40 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &Size, v38);
        v36 = Size;
        if ( v40 >= 0 )
        {
          PiDmListAddObject(4u, (ULONG_PTR)v39, (__int64 *)Size, (__int64)v73);
          if ( !v73[0] )
            PiDmListAddList(v41, v39, v42, v36);
        }
      }
    }
    else
    {
      if ( a3 != 6 || *(int *)a6 < 0 )
        return 0;
      *(_QWORD *)&Guid.Data1 = 0LL;
      Size = 0LL;
      v36 = 0LL;
      v62 = PiDmGetObject(6LL, a2, &Guid, a4);
      v39 = *(void **)&Guid.Data1;
      if ( v62 >= 0 )
      {
        v64 = PiDmGetObject(1LL, *(_QWORD *)(a6 + 24), &Size, v63);
        v36 = Size;
        if ( v64 >= 0 )
          PiDmListAddObject(6u, (ULONG_PTR)v39, (__int64 *)Size, (__int64)v73);
      }
    }
    if ( v39 )
      PiDmObjectRelease(v39);
    if ( !v36 )
      return 0;
    goto LABEL_92;
  }
  v10 = a4 - 2;
  if ( !v10 )
  {
    if ( a5 == 1 )
    {
      v27 = CmMapCmObjectTypeToPnpObjectType(a3);
      v29 = PiDmAddCacheReferenceForObject(v27, v28, 0LL);
      *(_DWORD *)a6 = v29;
      return (v29 >> 31) & 0xC0000120;
    }
    if ( *(int *)a6 < 0 || !*(_BYTE *)(a6 + 32) )
    {
      v34 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiDmRemoveCacheReferenceForObject(v34, v35);
      return 0;
    }
    Size = 0LL;
    v43 = CmMapCmObjectTypeToPnpObjectType(a3);
    if ( (int)PiDmGetObject(v43, v44, &Size, v45) < 0 )
      return 0;
    CurrentThread = KeGetCurrentThread();
    v36 = Size;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v36, 0LL);
    v47 = *(_DWORD *)(v36 + 32);
    *(_DWORD *)(v36 + 32) = v47 | 1;
    ExReleasePushLockEx((__int64 *)v36, 0LL);
    KeLeaveCriticalRegion();
    if ( (v47 & 1) != 0 )
      PiDmRemoveCacheReferenceForObject(v43, (__int64)a2);
LABEL_92:
    PiDmObjectRelease((PVOID)v36);
    return 0;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a5 != 1 )
    {
      if ( a3 == 1 )
      {
        v51 = *(WCHAR **)(a6 + 8);
        DestinationString = 0LL;
        Guid = 0LL;
        RtlInitUnicodeString(&DestinationString, v51 + 2);
        if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
          Guid = 0LL;
        if ( *(int *)a6 < 0 )
        {
          if ( (byte_140C0E10A & 0x10) != 0 )
          {
            IsNullGuid = PnpIsNullGuid(&Guid);
            McTemplateK0zjdd_EtwWriteTransfer(
              (unsigned int)-!IsNullGuid,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceDelete_Failure,
              v55,
              a2,
              (unsigned __int64)&Guid & -(__int64)!IsNullGuid,
              *(_DWORD *)v51,
              *(_DWORD *)a6);
          }
        }
        else if ( (byte_140C0E10A & 8) != 0 )
        {
          v52 = PnpIsNullGuid(&Guid);
          McTemplateK0zjdd_EtwWriteTransfer(
            (unsigned int)-!v52,
            (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceDelete_Success,
            v53,
            a2,
            (unsigned __int64)&Guid & -(__int64)!v52,
            *(_DWORD *)v51,
            *(_DWORD *)a6);
        }
        if ( *(int *)a6 >= 0 )
        {
          if ( v51[2] )
          {
            Size = MEMORY[0xFFFFF78000000014];
            PnpSetObjectProperty(
              a1,
              (__int64)(v51 + 2),
              2u,
              0LL,
              0LL,
              (__int64)DEVPKEY_DeviceClass_LastDeleteDate,
              16,
              (__int64)&Size,
              8u,
              0);
          }
          if ( CmIsRootEnumeratedDevice(a2) )
          {
            RtlInitUnicodeString(&DestinationString, a2);
            if ( DestinationString.Length >= 2u )
            {
              if ( *DestinationString.Buffer )
              {
                v56 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
                if ( v56 )
                {
                  v57 = (_DWORD *)v56[8];
                  if ( v57 )
                    *v57 |= 1u;
                  ObfDereferenceObject(v56);
                }
              }
            }
          }
        }
        if ( v51 )
          ExFreePoolWithTag(v51, 0x47706E50u);
      }
      else if ( a3 == 3 )
      {
        v58 = *(_QWORD **)(a6 + 8);
        if ( *(int *)a6 >= 0 && *v58 )
        {
          v59 = v58[1];
          if ( v59 )
            PiDmListRemoveObject(0LL, v59, *v58, 0LL);
          v60 = v58[2];
          if ( v60 )
            PiDmListRemoveObject(1LL, v60, *v58, 0LL);
          v61 = v58[3];
          if ( v61 )
            PiDmListRemoveObject(2LL, v61, *v58, 0LL);
        }
        PiPnpRtlFreeInterfaceDeleteInfo(v58);
      }
      return 0;
    }
    if ( a3 == 1 )
    {
      Size = 0LL;
      FilteredDeviceInterfaceList = PiPnpRtlGatherDeviceDeleteInfo(a2);
    }
    else
    {
      if ( a3 != 3 )
        return v9;
      Size = 0LL;
      FilteredDeviceInterfaceList = PiPnpRtlGatherInterfaceDeleteInfo(a2, &Size);
    }
    goto LABEL_114;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v9;
    FilteredDeviceInterfaceList = PiDmGetCmObjectListFromCache(
                                    a3,
                                    *(_QWORD *)(a6 + 16),
                                    *(_QWORD *)(a6 + 24),
                                    *(_QWORD *)(a6 + 32),
                                    *(_DWORD *)(a6 + 40),
                                    *(_QWORD *)(a6 + 48));
    goto LABEL_30;
  }
  v13 = v12 - 5;
  if ( v13 )
  {
    if ( v13 != 1 )
      return v9;
    if ( a5 != 1 )
    {
      if ( *(int *)a6 < 0 )
        return v9;
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        *(_DWORD *)(a6 + 28),
        *(PCWSTR *)(a6 + 32),
        *(_DWORD *)(a6 + 40));
      if ( a3 == 1 && *(_DWORD *)(a6 + 24) == 9 )
      {
        v31 = *(__int64 ***)(a6 + 8);
        if ( *v31 )
        {
          v32 = v31[1];
          if ( v32 )
            PiDmListRemoveObject(5LL, v32, *v31, 0LL);
          v33 = (ULONG_PTR)v31[2];
          if ( v33 )
            PiDmListAddObject(5u, v33, *v31, 0LL);
        }
        PiPnpRtlFreeInstallerClassChangeInfo(v31);
      }
      return 0;
    }
    v9 = 0;
    if ( (*(_DWORD *)(a6 + 44) & 0x20000) != 0
      || ((v20 = *(_DWORD *)(a6 + 40), Pool2 = 0LL, Guid.Data1 = 0, !v20)
       || (Pool2 = (void *)ExAllocatePool2(256LL, v20, 1198550608LL)) == 0LL)
      && *(_DWORD *)(a6 + 40) )
    {
LABEL_61:
      if ( *(_QWORD *)(a6 + 16) )
      {
LABEL_62:
        if ( a3 != 1 || *(_DWORD *)(a6 + 24) != 9 )
          return v9;
        v30 = 0LL;
        Size = 0LL;
        if ( *(_DWORD *)(a6 + 28) == 1
          && *(_DWORD *)(a6 + 40) == 78
          && (unsigned __int8)PnpIsValidGuidString(*(PCWSTR *)(a6 + 32)) )
        {
          v30 = *(_QWORD *)(a6 + 32);
        }
        FilteredDeviceInterfaceList = PiPnpRtlGatherInstallerClassChangeInfo(a2, v30, &Size);
        v9 = FilteredDeviceInterfaceList;
        if ( FilteredDeviceInterfaceList >= 0 )
        {
          *(_QWORD *)(a6 + 8) = Size;
          return v9;
        }
        goto LABEL_31;
      }
      v48 = CmMapCmObjectTypeToPnpObjectType(a3);
      PiPnpRtlCacheObjectBaseKey(a1, a2, v48);
      v26 = (v9 & 0x80000000) != 0;
LABEL_50:
      if ( v26 )
        return v9;
      goto LABEL_62;
    }
    LODWORD(Size) = *(_DWORD *)(a6 + 40);
    if ( a3 == 1 )
    {
      v22 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v22 - 1) > 0x24 || !CmDevicePropertyRead(a3 - 1, v22) || CmDevicePropertyWrite(v23, v22) )
      {
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)a2,
                          *(_QWORD *)(a6 + 16),
                          v22,
                          (__int64)&Guid,
                          (__int64)Pool2,
                          (__int64)&Size,
                          0);
        goto LABEL_42;
      }
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_94;
      v49 = *(_DWORD *)(a6 + 24);
      if ( (unsigned int)(v49 - 1) > 0x24 || !CmClassPropertyRead(v49) || CmClassPropertyWrite(v49) )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          (_DWORD)a2,
                          *(_QWORD *)(a6 + 16),
                          v49,
                          (__int64)&Guid,
                          (__int64)Pool2,
                          (__int64)&Size);
LABEL_42:
        v25 = DeviceRegProp;
        if ( DeviceRegProp >= 0 )
        {
          if ( Guid.Data1 != *(_DWORD *)(a6 + 28) || (_DWORD)Size != *(_DWORD *)(a6 + 40) )
            goto LABEL_93;
          if ( !memcmp(Pool2, *(const void **)(a6 + 32), (unsigned int)Size) )
          {
LABEL_46:
            *(_DWORD *)a6 = v25;
            v9 = -1073741536;
            goto LABEL_47;
          }
        }
        if ( v25 == -1073741275 )
        {
          if ( !*(_DWORD *)(a6 + 40) )
            goto LABEL_46;
LABEL_94:
          v9 = 0;
LABEL_47:
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x47706E50u);
          v26 = (v9 & 0x80000000) != 0;
          if ( v9 )
            goto LABEL_50;
          goto LABEL_61;
        }
LABEL_93:
        if ( v25 == -1073741790 )
          goto LABEL_46;
        goto LABEL_94;
      }
    }
    v25 = -1073741790;
    goto LABEL_46;
  }
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
    {
      if ( *(_DWORD *)a6 == -1073741275 )
        PiDmObjectUpdateCachedCmProperty(a3, (int)a2, a3, *(_DWORD *)(a6 + 24), 0, 0LL, 0);
    }
    else
    {
      PiDmObjectUpdateCachedCmProperty(
        a3,
        (int)a2,
        a3,
        *(_DWORD *)(a6 + 24),
        **(_DWORD **)(a6 + 32),
        *(PCWSTR *)(a6 + 40),
        **(_DWORD **)(a6 + 48));
    }
    return 0;
  }
  if ( (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
    goto LABEL_14;
  FilteredDeviceInterfaceList = PiDmObjectGetCachedCmProperty(
                                  a3,
                                  (_DWORD)a2,
                                  a3,
                                  *(_DWORD *)(a6 + 24),
                                  *(_QWORD *)(a6 + 32),
                                  *(_QWORD *)(a6 + 40),
                                  *(_QWORD *)(a6 + 48));
  if ( FilteredDeviceInterfaceList >= 0
    || FilteredDeviceInterfaceList == -1073741789
    || FilteredDeviceInterfaceList == -1073741275
    || FilteredDeviceInterfaceList == -1073741772 )
  {
    goto LABEL_31;
  }
  v9 = 0;
LABEL_14:
  if ( !*(_QWORD *)(a6 + 16) )
  {
    v15 = CmMapCmObjectTypeToPnpObjectType(a3);
    PiPnpRtlCacheObjectBaseKey(a1, a2, v15);
  }
  return v9;
}
