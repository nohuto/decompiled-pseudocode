/*
 * XREFs of IopLoadDriver @ 0x14073CD08
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14073E9B8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x140780720 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140A5D754 (IopInitializeSystemDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14022C350 (IopVerifierExAllocatePool.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     RtlAppendUnicodeToString @ 0x14032EAB0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140364360 (DbgPrint.c)
 *     PnpDiagnosticTraceObject @ 0x1403645B8 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140364734 (PnpDiagnosticTraceObjectWithStatus.c)
 *     HeadlessKernelAddLogEntry @ 0x14036EAD0 (HeadlessKernelAddLogEntry.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14037BC28 (PnpDiagnosticTraceDriverFullInfo.c)
 *     VfDifCaptureIoCallbacks @ 0x14037D8B0 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x14037D8D4 (VfDifCaptureDriverEntry.c)
 *     IopResurrectDriver @ 0x1403A6B30 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140645C90 (NtQueryKey.c)
 *     ObOpenObjectByName @ 0x1406CEA10 (ObOpenObjectByName.c)
 *     ObMakeTemporaryObject @ 0x1406F62F0 (ObMakeTemporaryObject.c)
 *     MmReleaseLoadLock @ 0x1406FE9E0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406FEA40 (MmAcquireLoadLock.c)
 *     ObInsertObject @ 0x140701A90 (ObInsertObject.c)
 *     ObCreateObject @ 0x1407023B0 (ObCreateObject.c)
 *     NtQueryObject @ 0x14070FAF0 (NtQueryObject.c)
 *     PnpPrepareDriverLoading @ 0x140739E9C (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x14073C7A8 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14073EDA0 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14073EF38 (IopGetRegistryValue.c)
 *     KseShimDriverIoCallbacks @ 0x140757D14 (KseShimDriverIoCallbacks.c)
 *     MmLoadSystemImage @ 0x14075B2B0 (MmLoadSystemImage.c)
 *     MiFreeDriverInitialization @ 0x14075E3A4 (MiFreeDriverInitialization.c)
 *     PnpCallDriverEntry @ 0x140770084 (PnpCallDriverEntry.c)
 *     IopReadyDeviceObjects @ 0x14077121C (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x1407716E0 (IopBootLog.c)
 *     MmUnloadSystemImage @ 0x140771E10 (MmUnloadSystemImage.c)
 *     EtwTiLogDriverObjectLoad @ 0x140771E80 (EtwTiLogDriverObjectLoad.c)
 *     PnpDriverLoadingFailed @ 0x1407D2B70 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x140891340 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x140891B7C (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x140891F74 (IopSafebootDriverLoad.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rsi
  int v5; // ebx
  wchar_t *Buffer; // r12
  NTSTATUS v8; // eax
  unsigned __int16 *v9; // rdi
  int DriverNameFromKeyNode; // r14d
  __int64 v11; // rcx
  wchar_t *Pool; // rax
  int SystemImage; // eax
  PIMAGE_NT_HEADERS v14; // rax
  _QWORD *v15; // rbx
  PIMAGE_NT_HEADERS v16; // rdx
  char *v17; // rax
  HANDLE v18; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v20; // eax
  char *v21; // r15
  PVOID v22; // rax
  PVOID v23; // rdi
  unsigned int MaximumLength; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int i; // eax
  __int64 v28; // rdi
  struct _KTHREAD *Lock; // rbx
  __int64 v31; // rdx
  int RegistryValue; // eax
  ULONG_PTR v33; // r9
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v37; // [rsp+70h] [rbp-90h] BYREF
  char v38[4]; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v39; // [rsp+88h] [rbp-78h] BYREF
  PVOID BaseOfImage; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h] BYREF
  ULONG v44; // [rsp+B8h] [rbp-48h] BYREF
  ULONG ReturnLength; // [rsp+BCh] [rbp-44h] BYREF
  PVOID v46; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v47; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v50; // [rsp+E8h] [rbp-18h]
  PVOID P; // [rsp+F0h] [rbp-10h]
  int *v52; // [rsp+F8h] [rbp-8h]
  _DWORD v53[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  int v57; // [rsp+11Ch] [rbp+1Ch]
  __int128 v58; // [rsp+120h] [rbp+20h]
  _WORD KeyValueInformation[40]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v52 = a4;
  *a4 = 0;
  v5 = a3;
  P = 0LL;
  Length = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Buffer = 0LL;
  *(_QWORD *)&v37.Length = 0LL;
  v37.Buffer = 0LL;
  v53[1] = 0;
  v57 = 0;
  BugCheckParameter2 = 0LL;
  *(_QWORD *)&v39.Length = 0LL;
  Object = 0LL;
  BaseOfImage = 0LL;
  *(_DWORD *)v38 = 0;
  Handle = 0LL;
  v39.Buffer = 0LL;
  Destination.Buffer = 0LL;
  v41 = 0;
  v8 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v8 != -1073741789 && v8 != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_35;
  }
  if ( Length + 8 < Length )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_35;
  }
  P = IopVerifierExAllocatePool(NonPagedPoolNx, Length + 8);
  v9 = (unsigned __int16 *)P;
  if ( !P )
  {
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_35;
  }
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, P, Length, &Length);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v11 = v9[6];
    Destination.Length = v11;
    Destination.MaximumLength = v11 + 8;
    Destination.Buffer = v9 + 8;
    Pool = (wchar_t *)IopVerifierExAllocatePool(PagedPool, v11 + 2);
    v37.Buffer = Pool;
    Buffer = Pool;
    if ( Pool )
    {
      v37.Length = Destination.Length;
      v37.MaximumLength = Destination.Length + 2;
      memmove(Pool, Destination.Buffer, Destination.Length);
      Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
      RtlAppendUnicodeToString(&Destination, L".SYS");
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v37.Length);
      if ( InitSafeBootMode )
      {
        if ( a2 )
        {
          v44 = 0;
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"Group");
          memset(KeyValueInformation, 0, 0x4CuLL);
          if ( NtQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x4Cu,
                 &v44) < 0
            || (DestinationString.Length = KeyValueInformation[4] - 2,
                DestinationString.MaximumLength = KeyValueInformation[4] - 2,
                DestinationString.Buffer = &KeyValueInformation[6],
                !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
          {
            if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
            {
              IopBootLog(&Destination);
              DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
              HeadlessKernelAddLogEntry();
              ObCloseHandle(KeyHandle, 0);
              return 3221226335LL;
            }
          }
        }
      }
      DriverNameFromKeyNode = IopBuildFullDriverPath(&v37, KeyHandle, &Destination);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &v39);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v53[0] = 48;
          v54 = 0LL;
          v55 = &v39;
          v56 = IopCaseInsensitive != 0 ? 592 : 528;
          v58 = 0LL;
          ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
          SystemImage = MmLoadSystemImage(
                          (unsigned int)&Destination,
                          0,
                          0,
                          0,
                          (__int64)&BugCheckParameter2,
                          (__int64)&BaseOfImage);
          DriverNameFromKeyNode = SystemImage;
          if ( SystemImage < 0 )
          {
            if ( SystemImage == -1073741554 )
              goto LABEL_53;
            if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
            {
              DriverNameFromKeyNode = ((_BYTE)v5 != 0) - 1073740949;
              IopLogBlockedDriverEvent(&Destination, v31, (unsigned int)DriverNameFromKeyNode);
            }
            if ( DriverNameFromKeyNode == -1073741554 )
            {
LABEL_53:
              DriverNameFromKeyNode = ObOpenObjectByName(
                                        (__int64)v53,
                                        (__int64)IoDriverObjectType,
                                        0,
                                        0LL,
                                        0,
                                        0LL,
                                        (__int64)&Handle);
              if ( DriverNameFromKeyNode < 0 )
              {
                ExReleaseResourceLite(&IopDriverLoadResource);
                IopBootLog(&Destination);
                if ( DriverNameFromKeyNode == -1073741772 )
                  DriverNameFromKeyNode = -1073740914;
                goto LABEL_35;
              }
              v46 = 0LL;
              DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v46, 0LL);
              ZwClose(Handle);
              if ( DriverNameFromKeyNode >= 0 )
              {
                DriverNameFromKeyNode = IopResurrectDriver((__int64)v46);
                HalPutDmaAdapter((PADAPTER_OBJECT)v46);
              }
            }
            ExReleaseResourceLite(&IopDriverLoadResource);
            IopBootLog(&Destination);
          }
          else
          {
            v14 = RtlImageNtHeader(BaseOfImage);
            *(_WORD *)v38 = v14->OptionalHeader.MinorImageVersion;
            *(_WORD *)&v38[2] = v14->OptionalHeader.MajorImageVersion;
            DriverNameFromKeyNode = PnpPrepareDriverLoading((int)&v37, KeyHandle, BaseOfImage, v5, &v41);
            if ( DriverNameFromKeyNode < 0
              || (DriverNameFromKeyNode = ObCreateObject(
                                            KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10],
                                            IoDriverObjectType,
                                            (int)v53,
                                            0,
                                            0,
                                            416,
                                            0,
                                            0,
                                            &Object),
                  DriverNameFromKeyNode < 0) )
            {
              MmUnloadSystemImage(BugCheckParameter2);
              ExReleaseResourceLite(&IopDriverLoadResource);
            }
            else
            {
              v15 = Object;
              memset(Object, 0, 0x1A0uLL);
              v15[6] = v15 + 42;
              v15[42] = v15;
              ReturnLength = 28;
              memset64(v15 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
              *(_DWORD *)v15 = 22020100;
              v16 = RtlImageNtHeader(BaseOfImage);
              *(_WORD *)v38 = v16->OptionalHeader.MinorImageVersion;
              *(_WORD *)&v38[2] = v16->OptionalHeader.MajorImageVersion;
              v17 = (char *)BaseOfImage + v16->OptionalHeader.AddressOfEntryPoint;
              if ( (v16->OptionalHeader.DllCharacteristics & 0x2000) == 0 )
                *((_DWORD *)v15 + 4) |= 2u;
              v15[11] = v17;
              v15[5] = BugCheckParameter2;
              v15[3] = BaseOfImage;
              *((_DWORD *)v15 + 8) = v16->OptionalHeader.SizeOfImage;
              DriverNameFromKeyNode = ObInsertObject(v15, 0LL, 1u, 0, 0LL, &Handle);
              ExReleaseResourceLite(&IopDriverLoadResource);
              if ( DriverNameFromKeyNode >= 0 )
              {
                v18 = Handle;
                PreviousMode = KeGetCurrentThread()->PreviousMode;
                v47 = 0LL;
                v20 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, PreviousMode, &v47, 0LL);
                if ( v20 )
                  KeBugCheckEx(0x11Fu, (ULONG_PTR)v18, v20, (ULONG_PTR)v47, 0LL);
                ZwClose(v18);
                v21 = (char *)v47;
                *((_QWORD *)v47 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                v22 = IopVerifierExAllocatePool(NonPagedPoolNx, v39.MaximumLength);
                *((_QWORD *)v21 + 8) = v22;
                if ( v22 )
                {
                  *((_WORD *)v21 + 29) = v39.MaximumLength;
                  *((_WORD *)v21 + 28) = v39.Length;
                  memmove(*((void **)v21 + 8), v39.Buffer, v39.MaximumLength);
                }
                v23 = IopVerifierExAllocatePool(NonPagedPoolNx, 0x1000uLL);
                if ( v23 )
                {
                  DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v23, 0x1000u, &ReturnLength);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v21);
                    HalPutDmaAdapter((PADAPTER_OBJECT)v21);
                    ExFreePoolWithTag(v23, 0);
                    Buffer = v37.Buffer;
                  }
                  else
                  {
                    Buffer = v37.Buffer;
                    if ( v37.Buffer )
                    {
                      MaximumLength = v37.MaximumLength;
                      *(_QWORD *)(*((_QWORD *)v21 + 6) + 32LL) = IopVerifierExAllocatePool(
                                                                   NonPagedPoolNx,
                                                                   v37.MaximumLength);
                      v25 = *((_QWORD *)v21 + 6);
                      if ( *(_QWORD *)(v25 + 32) )
                      {
                        *(_WORD *)(v25 + 26) = MaximumLength;
                        *(_WORD *)(*((_QWORD *)v21 + 6) + 24LL) = v37.Length;
                        memmove(*(void **)(*((_QWORD *)v21 + 6) + 32LL), Buffer, MaximumLength);
                      }
                    }
                    if ( (v41 & 1) != 0 )
                      *((_DWORD *)v21 + 4) |= 0x100u;
                    PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v23);
                    VfDifCaptureDriverEntry((__int64)v21);
                    DriverNameFromKeyNode = PnpCallDriverEntry(v21, v23);
                    if ( DriverNameFromKeyNode >= 0 )
                    {
                      VfDifCaptureIoCallbacks((__int64)v21);
                      KseShimDriverIoCallbacks(v21, v26, &Destination);
                    }
                    PnpDiagnosticTraceObjectWithStatus(
                      &KMPnPEvt_DriverInit_Stop,
                      (unsigned __int16 *)v23,
                      DriverNameFromKeyNode);
                    *v52 = DriverNameFromKeyNode;
                    if ( DriverNameFromKeyNode < 0 )
                      DriverNameFromKeyNode = -1073740955;
                    for ( i = 0; i <= 0x1B; ++i )
                    {
                      if ( !*(_QWORD *)&v21[8 * i + 112] )
                        *(_QWORD *)&v21[8 * i + 112] = IopInvalidDeviceRequest;
                    }
                    ExFreePoolWithTag(v23, 0);
                    if ( DriverNameFromKeyNode < 0 )
                    {
                      ObMakeTemporaryObject(v21);
                      HalPutDmaAdapter((PADAPTER_OBJECT)v21);
                    }
                    else
                    {
                      IopBootLog(&Destination);
                      v28 = *((_QWORD *)v21 + 5);
                      Lock = MmAcquireLoadLock();
                      MiFreeDriverInitialization(v28);
                      MmReleaseLoadLock((__int64)Lock);
                      IopReadyDeviceObjects(v21);
                      EtwTiLogDriverObjectLoad(v21 + 56);
                    }
                  }
                }
                else
                {
                  ObMakeTemporaryObject(v21);
                  HalPutDmaAdapter((PADAPTER_OBJECT)v21);
                  Buffer = v37.Buffer;
                  DriverNameFromKeyNode = -1073741670;
                }
                goto LABEL_35;
              }
            }
            IopBootLog(&Destination);
            Buffer = v37.Buffer;
          }
        }
        goto LABEL_35;
      }
    }
    else
    {
      DriverNameFromKeyNode = -1073741670;
    }
    Destination.Buffer = 0LL;
  }
LABEL_35:
  HeadlessKernelAddLogEntry();
  if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741218 )
  {
    v50 = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(KeyHandle);
      if ( DriverNameFromKeyNode != -1073740955 )
      {
        RegistryValue = IopGetRegistryValue(KeyHandle);
        if ( RegistryValue >= 0 )
        {
          if ( *((_DWORD *)v50 + 3)
            && (_BYTE)CmFirstTime == 1
            && (unsigned int)(*(_DWORD *)((char *)v50 + *((unsigned int *)v50 + 2)) - 2) <= 1 )
          {
            if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
              v33 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
            else
              v33 = 0LL;
            if ( ((unsigned __int64)&v39 & -(__int64)(v39.Buffer != 0LL)) != 0 )
              v4 = *(_QWORD *)(((unsigned __int64)&v39 & -(__int64)(v39.Buffer != 0LL)) + 8);
            KeBugCheckEx(0x5Au, 1uLL, v4, v33, DriverNameFromKeyNode);
          }
          ExFreePoolWithTag(v50, 0);
        }
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Buffer )
  {
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverLoad_Stop,
      &v37.Length,
      DriverNameFromKeyNode,
      (__int64)&v39,
      v38[0]);
    ExFreePoolWithTag(Buffer, 0);
  }
  if ( v39.Buffer )
    ExFreePoolWithTag(v39.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
