NTSTATUS __stdcall IoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  PDRIVER_EXTENSION DriverExtension; // r14
  UNICODE_STRING *p_ServiceKeyName; // r14
  PVOID DeviceNode; // rbx
  PDEVICE_OBJECT v13; // rax
  const UNICODE_STRING *v15; // rcx
  NTSTATUS result; // eax
  NTSTATUS appended; // edi
  int v18; // eax
  int v19; // r13d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbx
  unsigned __int16 Length; // ax
  size_t v25; // r12
  unsigned __int64 j; // rcx
  signed __int64 v27; // rcx
  __int16 v28; // ax
  _QWORD *v29; // rax
  PVOID v30; // r9
  __int64 v31; // r9
  PIO_RESOURCE_REQUIREMENTS_LIST v32; // r14
  unsigned int v33; // eax
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  __int16 v36; // ax
  struct _DEVICE_OBJECT *v37; // r12
  PVOID v38; // rcx
  int v39; // eax
  __int64 Pool2; // rax
  int DeviceInstancePath; // eax
  NTSTATUS v42; // eax
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  wchar_t *v49; // r13
  __int64 v50; // rdx
  PDRIVER_OBJECT v51; // rdi
  bool v52; // zf
  UNICODE_STRING *v53; // rdi
  int LegacyDeviceIds; // eax
  unsigned int v55; // eax
  int v56; // ecx
  unsigned int v57; // edi
  void *v58; // rax
  void *v59; // rsi
  __int64 v60; // r8
  int v61; // edx
  int v62; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  __int64 v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+38h] [rbp-C8h]
  int v66; // [rsp+40h] [rbp-C0h]
  char v67; // [rsp+50h] [rbp-B0h] BYREF
  char v68; // [rsp+51h] [rbp-AFh] BYREF
  char v69; // [rsp+52h] [rbp-AEh] BYREF
  char v70; // [rsp+53h] [rbp-ADh]
  _DWORD cbMax[3]; // [rsp+54h] [rbp-ACh] BYREF
  BOOL v72; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  __int64 v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  int v79; // [rsp+A0h] [rbp-60h]
  PDRIVER_OBJECT v80; // [rsp+A8h] [rbp-58h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B0h] [rbp-50h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+B8h] [rbp-48h] BYREF
  size_t pcbLength; // [rsp+C0h] [rbp-40h] BYREF
  PIO_RESOURCE_REQUIREMENTS_LIST v84; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v86; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v87; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v88; // [rsp+F8h] [rbp-8h]
  PDEVICE_OBJECT *v89; // [rsp+100h] [rbp+0h]
  _WORD v90[200]; // [rsp+110h] [rbp+10h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  v84 = ResourceRequirements;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v89 = DeviceObject;
  DeviceNode = 0LL;
  v80 = DriverObject;
  v68 = 0;
  v13 = *DeviceObject;
  *(_QWORD *)&Destination.Length = 26214400LL;
  psz = 0LL;
  memset(cbMax, 0, sizeof(cbMax));
  pcbLength = 0LL;
  v75 = 0;
  Handle = 0LL;
  v67 = 0;
  v74 = 0LL;
  v72 = 0;
  Destination.Buffer = v90;
  KeyHandle = 0LL;
  v70 = 0;
  Object = 0LL;
  P = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  if ( v13 )
  {
    DeviceNode = v13->DeviceObjectExtension->DeviceNode;
    v74 = (__int64)DeviceNode;
    if ( DeviceNode )
      goto LABEL_5;
    return -1073741578;
  }
  if ( (DriverObject->Flags & 4) == 0 )
  {
    v15 = p_ServiceKeyName;
    goto LABEL_4;
  }
  Buffer = p_ServiceKeyName->Buffer;
  for ( i = &Buffer[((unsigned __int64)p_ServiceKeyName->Length >> 1) - 1]; ; --i )
  {
    if ( i == Buffer )
      return -1073741585;
    if ( *i == 92 )
      break;
  }
  *((_QWORD *)&v86 + 1) = i + 1;
  v36 = p_ServiceKeyName->Length - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
  v15 = (const UNICODE_STRING *)&v86;
  LOWORD(v86) = v36;
  WORD1(v86) = v36;
LABEL_4:
  result = IopGetRootDeviceId(v15, &Destination);
  if ( result >= 0 )
  {
LABEL_5:
    appended = PiPnpRtlBeginOperation((__int64 **)&P);
    if ( appended < 0 )
      goto LABEL_35;
    PpDevNodeLockTree(1);
    if ( DeviceNode || (v80->Flags & 4) != 0 )
    {
      v19 = 0;
    }
    else
    {
      v18 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, SlotNumber, &v74);
      v19 = 0;
      appended = v18;
      if ( v18 >= 0 )
        v72 = v74 != 0;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    v23 = v74;
    if ( v74 )
    {
      v30 = Object;
LABEL_21:
      if ( v72 )
      {
        if ( (unsigned int)PipAreDriversLoaded(v23, v21, v22, (__int64)v30)
          || (*(_DWORD *)(v23 + 396) & 0x6000) != 0
          && ((v55 = *(_DWORD *)(v23 + 404), v55 > 0x1C) || (v56 = 268697602, !_bittest(&v56, v55))) )
        {
          ObfDereferenceObject(*(PVOID *)(v23 + 32));
          appended = -1073741810;
          goto LABEL_59;
        }
        if ( !v31 )
          PipClearDevNodeProblem(v23);
      }
      if ( !*(_QWORD *)&cbMax[1] )
      {
        appended = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v23 + 32), (__int64)&cbMax[1], 983103);
        if ( appended < 0 )
          goto LABEL_59;
      }
    }
    else
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\");
      if ( appended < 0 )
        goto LABEL_35;
      Length = Destination.Length;
      v79 = Destination.Length;
      v88 = Destination.Length;
      v25 = (400 - (unsigned __int64)Destination.Length) >> 1;
      for ( j = Destination.Length; ; j = v88 )
      {
        Destination.Length = Length;
        LODWORD(v64) = v19;
        ppszDestEnd = &v90[j >> 1];
        RtlStringCchPrintfExW(ppszDestEnd, v25, &ppszDestEnd, 0LL, 0, L"%04u", v64);
        v27 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - v90;
        if ( (_DWORD)v27 == -1 )
          v28 = 400 - Destination.Length;
        else
          v28 = 2 * v27;
        Destination.Length += v28;
        appended = CmCreateDevice(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)Destination.Buffer,
                     983103,
                     (HANDLE *)&cbMax[1],
                     &v67,
                     0);
        if ( appended < 0 )
          goto LABEL_59;
        if ( v67 )
        {
          v30 = Object;
          goto LABEL_20;
        }
        v72 = 0;
        if ( (unsigned __int8)IopIsReportedAlready(
                                (unsigned int)&Destination,
                                cbMax[1],
                                (_DWORD)p_ServiceKeyName,
                                (_DWORD)ResourceList,
                                (__int64)&v72) )
          break;
        ZwClose(*(HANDLE *)&cbMax[1]);
        Length = v79;
        ++v19;
      }
      v29 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&Destination, 0x746C6644u);
      Object = v29;
      v30 = v29;
      if ( !v29 )
      {
        appended = -1073741823;
        v23 = 0LL;
        goto LABEL_59;
      }
      v23 = *(_QWORD *)(v29[39] + 40LL);
      v74 = v23;
LABEL_20:
      if ( v23 )
        goto LABEL_21;
      appended = IopCreateRootEnumeratedDeviceObject(&Object, v21, v22, v30);
      if ( appended < 0 )
        goto LABEL_59;
      v37 = (struct _DEVICE_OBJECT *)Object;
      v38 = Object;
      v70 = 1;
      *((_DWORD *)Object + 12) |= 0x1000u;
      v39 = PipAllocateDeviceNode((__int64)v38, (__int64)&v74);
      v23 = v74;
      if ( v39 == -1073740946 || !v74 )
      {
        IoDeleteDevice(v37);
        appended = -1073741670;
        goto LABEL_59;
      }
      if ( (v80->Flags & 4) == 0 )
      {
        Pool2 = ExAllocatePool2(256LL, p_ServiceKeyName->Length, 1215327824LL);
        *(_QWORD *)(v23 + 64) = Pool2;
        if ( !Pool2 )
          goto LABEL_77;
        *(_WORD *)(v23 + 58) = p_ServiceKeyName->Length;
        DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(v23 + 56), p_ServiceKeyName, 0);
        appended = DeviceInstancePath;
        if ( DeviceInstancePath < 0 )
          goto LABEL_78;
      }
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v23, (unsigned int)Destination.Length + 2);
      appended = DeviceInstancePath;
      if ( DeviceInstancePath < 0 )
        goto LABEL_78;
      v42 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v23 + 40), &Destination, 0);
      appended = v42;
      if ( v42 < 0 )
      {
        v43 = (unsigned int)v42;
        v44 = 3LL;
        goto LABEL_86;
      }
      *(_WORD *)(*(_QWORD *)(v23 + 48) + 2 * ((unsigned __int64)*(unsigned __int16 *)(v23 + 40) >> 1)) = 0;
      v75 = 32;
      v48 = CmSetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v23 + 48),
              *(__int64 *)&cbMax[1],
              0xBu,
              4u,
              (__int64)&v75,
              4u,
              0);
      appended = v48;
      if ( v48 < 0 )
        goto LABEL_80;
      v68 = -1;
      v48 = PnpSetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v23 + 48),
              1u,
              *(__int64 *)&cbMax[1],
              0LL,
              (__int64)&DEVPKEY_Device_Reported,
              17,
              (__int64)&v68,
              1u,
              0);
      appended = v48;
      if ( v48 < 0 )
        goto LABEL_80;
      v48 = PnpUnicodeStringToWstr(&psz, cbMax, &p_ServiceKeyName->Length);
      appended = v48;
      if ( v48 < 0 )
        goto LABEL_80;
      v49 = (wchar_t *)psz;
      appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
      if ( appended < 0 )
      {
        PnpUnicodeStringToWstrFree(v49, (__int64)p_ServiceKeyName);
        v43 = (unsigned int)appended;
        v44 = 19LL;
LABEL_86:
        PipSetDevNodeProblem(v23, v44, v43);
        goto LABEL_59;
      }
      appended = CmSetDeviceRegProp(
                   *(__int64 *)&PiPnpRtlCtx,
                   *(_QWORD *)(v23 + 48),
                   *(__int64 *)&cbMax[1],
                   5u,
                   1u,
                   (__int64)v49,
                   (int)pcbLength + 2,
                   0);
      PnpUnicodeStringToWstrFree(v49, (__int64)p_ServiceKeyName);
      if ( appended < 0 )
      {
        v45 = (unsigned int)appended;
LABEL_81:
        v46 = 19LL;
LABEL_82:
        v47 = v23;
LABEL_84:
        PipSetDevNodeProblem(v47, v46, v45);
LABEL_59:
        if ( v67 )
        {
          if ( KeyHandle )
            ZwDeleteKey(KeyHandle);
          if ( Handle )
            ZwDeleteKey(Handle);
          if ( *(_QWORD *)&cbMax[1] )
            ZwDeleteKey(*(HANDLE *)&cbMax[1]);
          PnpCleanupDeviceRegistryValues(v23 + 40);
          PpDevNodeRemoveFromTree((_QWORD *)v23);
          IoDeleteDevice(*(PDEVICE_OBJECT *)(v23 + 32));
          ObfDereferenceObject(*(PVOID *)(v23 + 32));
        }
LABEL_35:
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        PpDevNodeUnlockTree(1);
        if ( KeyHandle )
          ZwClose(KeyHandle);
        if ( Handle )
          ZwClose(Handle);
        if ( *(_QWORD *)&cbMax[1] )
          ZwClose(*(HANDLE *)&cbMax[1]);
        if ( P )
          PiPnpRtlEndOperation((PVOID **)P);
        return appended;
      }
      Handle = 0LL;
      v48 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v23 + 48), 19, 0, 983103, 1, (__int64)&Handle, 0LL);
      appended = v48;
      if ( v48 < 0 )
        goto LABEL_80;
      v48 = PnpSetRegistryDword(Handle);
      appended = v48;
      if ( v48 < 0 )
        goto LABEL_80;
      v51 = v80;
      if ( (v80->Flags & 4) == 0 )
      {
        LOBYTE(v50) = 1;
        PpDeviceRegistration((__int64)&Destination, v50, v23 + 56, 1);
      }
      v52 = (v51->Flags & 4) == 0;
      v53 = (UNICODE_STRING *)&v86;
      Destination.Buffer = 0LL;
      if ( v52 )
        v53 = p_ServiceKeyName;
      *(_DWORD *)&Destination.Length = 0;
      cbMax[0] = 400;
      if ( (int)IopGetOriginalServiceName(v53, v90, cbMax) >= 0 && cbMax[0] > 2u )
      {
        WORD1(v87) = 400;
        *((_QWORD *)&v87 + 1) = v90;
        LOWORD(v87) = LOWORD(cbMax[0]) - 2;
        v53 = (UNICODE_STRING *)&v87;
      }
      LegacyDeviceIds = IopCreateLegacyDeviceIds(v37, v53, ResourceList);
      appended = LegacyDeviceIds;
      v47 = v23;
      if ( LegacyDeviceIds < 0 )
      {
        v45 = (unsigned int)LegacyDeviceIds;
        v46 = 19LL;
        goto LABEL_84;
      }
      PipSetDevNodeFlags(v23, 17);
      *(_DWORD *)(v23 + 660) = *((_DWORD *)IopRootDeviceNode + 165);
      PipSetDevNodeState(v23, 772);
      PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, v23);
      DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance((__int64)v37, v23 + 40);
      appended = DeviceInstancePath;
      if ( DeviceInstancePath < 0 )
      {
LABEL_78:
        v45 = (unsigned int)DeviceInstancePath;
        goto LABEL_79;
      }
      ObfReferenceObject(v37);
    }
    v32 = v84;
    if ( !ResourceList && !v84
      || (v48 = CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v23 + 48),
                  20,
                  0,
                  983103,
                  1,
                  (__int64)&KeyHandle,
                  0LL),
          appended = v48,
          v48 >= 0)
      && (!ResourceList || (v48 = PnpSetRegistryResourceList(KeyHandle), appended = v48, v48 >= 0))
      && (!v32 || (v48 = PnpSetRegistryRequirementsList(KeyHandle), appended = v48, v48 >= 0)) )
    {
      if ( ResourceAssigned )
      {
        PipSetDevNodeFlags(v23, 256);
        PnpSetRegistryDword(*(HANDLE *)&cbMax[1]);
        v33 = PnpDetermineResourceListSize(ResourceList);
        IopWriteAllocatedResourcesToRegistry(v23, ResourceList, v33);
      }
      else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
      {
        v57 = PnpDetermineResourceListSize(ResourceList);
        v58 = (void *)ExAllocatePool2(256LL, v57, 1198550608LL);
        v59 = v58;
        if ( !v58 )
        {
LABEL_77:
          v45 = 3221225626LL;
          appended = -1073741670;
LABEL_79:
          v46 = 3LL;
          goto LABEL_82;
        }
        memmove(v58, ResourceList, v57);
        pszFormat = *(NTSTRSAFE_PCWSTR *)(v23 + 32);
        v60 = *((_QWORD *)pszFormat + 1);
        v69 = 0;
        appended = IoReportResourceUsageInternal(
                     0,
                     v61,
                     v60,
                     0,
                     v62,
                     (__int64)pszFormat,
                     (__int64)v59,
                     v65,
                     v66,
                     (__int64)&v69);
        ExFreePoolWithTag(v59, 0x47706E50u);
        if ( appended >= 0 && !v69 )
        {
LABEL_32:
          *(_DWORD *)(v23 + 660) = *(_DWORD *)(*(_QWORD *)(v23 + 16) + 660LL);
          IopDoDeferredSetInterfaceState(v23);
          PipSetDevNodeState(v23, 777);
          if ( v70 )
            PipSetDevNodeFlags(v23, 0x80000000);
          *v89 = *(PDEVICE_OBJECT *)(v23 + 32);
          goto LABEL_35;
        }
        if ( !(unsigned int)PipIsDevNodeDNStarted(v23) )
          PipSetDevNodeProblem(v23, 12LL, (unsigned int)appended);
        appended = -1073741800;
      }
      else
      {
        PipSetDevNodeFlags(v23, 256);
      }
      if ( appended < 0 )
        goto LABEL_59;
      goto LABEL_32;
    }
LABEL_80:
    v45 = (unsigned int)v48;
    goto LABEL_81;
  }
  return result;
}
