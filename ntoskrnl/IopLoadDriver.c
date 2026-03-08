/*
 * XREFs of IopLoadDriver @ 0x14072A9DC
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x140780340 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140B57B44 (IopInitializeSystemDrivers.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x140202BAC (PnpDiagnosticTraceObject.c)
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1402B146C (PnpDiagnosticTraceObjectWithStatus.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1402B153C (PnpDiagnosticTraceDriverFullInfo.c)
 *     HeadlessKernelAddLogEntry @ 0x1402B17D0 (HeadlessKernelAddLogEntry.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     IopResurrectDriver @ 0x1403025A0 (IopResurrectDriver.c)
 *     VfDifCaptureIoCallbacks @ 0x1403035C4 (VfDifCaptureIoCallbacks.c)
 *     VfDifCaptureDriverEntry @ 0x1403035E8 (VfDifCaptureDriverEntry.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopGetDriverNameFromKeyNode @ 0x1406C1730 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     IopBuildFullDriverPath @ 0x1406C25D8 (IopBuildFullDriverPath.c)
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     NtQueryObject @ 0x14071EA20 (NtQueryObject.c)
 *     MiFreeDriverInitialization @ 0x140729EFC (MiFreeDriverInitialization.c)
 *     IopReadyDeviceObjects @ 0x14072A854 (IopReadyDeviceObjects.c)
 *     PnpCallDriverEntry @ 0x14072A87C (PnpCallDriverEntry.c)
 *     IopBootLog @ 0x14072A928 (IopBootLog.c)
 *     MmLoadSystemImage @ 0x14072CDE0 (MmLoadSystemImage.c)
 *     EtwTiLogDriverObjectLoad @ 0x14078FD38 (EtwTiLogDriverObjectLoad.c)
 *     ObMakeTemporaryObject @ 0x140791C40 (ObMakeTemporaryObject.c)
 *     KseShimDriverIoCallbacks @ 0x14079D690 (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x14079DAE0 (PnpPrepareDriverLoading.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     ObInsertObject @ 0x1407F0A20 (ObInsertObject.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 *     PnpDriverLoadingFailed @ 0x14085EEA4 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x140941674 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x1409422E4 (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x1409426D4 (IopSafebootDriverLoad.c)
 *     CmBootLastKnownGood @ 0x140A07880 (CmBootLastKnownGood.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE Handle, char a2, unsigned __int8 a3, int *a4)
{
  unsigned int v4; // r14d
  wchar_t *Buffer; // r15
  int Key; // eax
  unsigned __int16 *v9; // rbx
  int DriverNameFromKeyNode; // esi
  __int64 v11; // rcx
  wchar_t *Pool2; // rax
  int SystemImage; // eax
  __int64 v14; // rax
  int v15; // ecx
  _QWORD *v16; // rbx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v22; // eax
  char *v23; // r14
  __int64 v24; // rax
  void *v25; // rbx
  unsigned int MaximumLength; // edi
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // edx
  int v30; // r8d
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 Lock; // rdi
  __int64 v36; // rdx
  PVOID v37; // rbx
  PVOID *NewObject; // [rsp+20h] [rbp-E0h]
  char v39[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v43; // [rsp+78h] [rbp-88h] BYREF
  char v44[4]; // [rsp+88h] [rbp-78h]
  ULONG ReturnLength[2]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v46; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v47; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  int v49; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v50; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  PVOID P; // [rsp+D8h] [rbp-28h]
  int *v53; // [rsp+E0h] [rbp-20h]
  _DWORD v54[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING *v56; // [rsp+F8h] [rbp-8h]
  int v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+104h] [rbp+4h]
  __int128 v59; // [rsp+108h] [rbp+8h]
  _WORD v60[40]; // [rsp+120h] [rbp+20h] BYREF

  v53 = a4;
  *a4 = 0;
  v4 = a3;
  P = 0LL;
  LODWORD(v41) = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  *(_QWORD *)&v43.Length = 0LL;
  Buffer = 0LL;
  v43.Buffer = 0LL;
  v54[1] = 0;
  v58 = 0;
  v50 = 0LL;
  *(_QWORD *)&v47.Length = 0LL;
  Object = 0LL;
  v48 = 0LL;
  *(_DWORD *)v44 = 0;
  v46 = 0LL;
  v47.Buffer = 0LL;
  Destination.Buffer = 0LL;
  v49 = 0;
  v39[0] = 0;
  Key = NtQueryKey(Handle, 0, 0LL, 0, (unsigned int *)&v41);
  if ( Key != -1073741789 && Key != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_40;
  }
  if ( (int)v41 + 8 < (unsigned int)v41 )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_40;
  }
  P = (PVOID)ExAllocatePool2(64LL, (unsigned int)(v41 + 8), 1699442505LL);
  v9 = (unsigned __int16 *)P;
  if ( !P )
  {
LABEL_65:
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_40;
  }
  DriverNameFromKeyNode = NtQueryKey(Handle, 0, (unsigned __int64)P, v41, (unsigned int *)&v41);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_40;
  v11 = v9[6];
  Destination.Length = v11;
  Destination.MaximumLength = v11 + 8;
  Destination.Buffer = v9 + 8;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v11 + 2, 827223881LL);
  v43.Buffer = Pool2;
  Buffer = Pool2;
  if ( !Pool2 )
  {
    Destination.Buffer = 0LL;
    goto LABEL_65;
  }
  v43.Length = Destination.Length;
  v43.MaximumLength = Destination.Length + 2;
  memmove(Pool2, Destination.Buffer, Destination.Length);
  Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
  RtlAppendUnicodeToString(&Destination, L".SYS");
  HeadlessKernelAddLogEntry();
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v43.Length);
  if ( a2 )
  {
    if ( (_DWORD)InitSafeBootMode )
    {
      ReturnLength[0] = 0;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Group");
      memset(v60, 0, 0x4CuLL);
      LODWORD(NewObject) = 76;
      if ( (int)NtQueryValueKey(Handle, &DestinationString, 2u, (unsigned __int64)v60, (size_t)NewObject, ReturnLength) < 0
        || (DestinationString.Length = v60[4] - 2,
            DestinationString.MaximumLength = v60[4] - 2,
            DestinationString.Buffer = &v60[6],
            !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
      {
        if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
        {
          IopBootLog(&Destination, 0);
          DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
          HeadlessKernelAddLogEntry();
          ObCloseHandle(Handle, 0);
          return 3221226335LL;
        }
      }
    }
  }
  DriverNameFromKeyNode = IopBuildFullDriverPath(&v43, Handle, &Destination);
  if ( DriverNameFromKeyNode < 0 )
  {
    Destination.Buffer = 0LL;
    goto LABEL_40;
  }
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &v47);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_40;
  v54[0] = 48;
  v55 = 0LL;
  v56 = &v47;
  v57 = IopCaseInsensitive != 0 ? 592 : 528;
  v59 = 0LL;
  ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
  SystemImage = MmLoadSystemImage((unsigned int)&Destination, 0, 0, 0, (__int64)&v50, (__int64)&v48);
  DriverNameFromKeyNode = SystemImage;
  if ( SystemImage < 0 )
  {
    if ( SystemImage == -1073741554 )
    {
      DriverNameFromKeyNode = ObOpenObjectByName(
                                (__int64)v54,
                                (__int64)IoDriverObjectType,
                                0,
                                0LL,
                                0,
                                0LL,
                                (__int64)&v46);
      if ( DriverNameFromKeyNode < 0 )
      {
        ExReleaseResourceLite(&IopDriverLoadResource);
        IopBootLog(&Destination, 0);
        if ( DriverNameFromKeyNode == -1073741772 )
          DriverNameFromKeyNode = -1073740914;
        goto LABEL_40;
      }
      *(_QWORD *)ReturnLength = 0LL;
      DriverNameFromKeyNode = ObReferenceObjectByHandle(v46, 0, IoDriverObjectType, 0, (PVOID *)ReturnLength, 0LL);
      ZwClose(v46);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopResurrectDriver(*(__int64 *)ReturnLength);
        ObfDereferenceObject(*(PVOID *)ReturnLength);
      }
    }
    else if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
    {
      DriverNameFromKeyNode = ((_BYTE)v4 != 0) - 1073740949;
      IopLogBlockedDriverEvent(&Destination, v36, (unsigned int)DriverNameFromKeyNode);
    }
    ExReleaseResourceLite(&IopDriverLoadResource);
    IopBootLog(&Destination, 0);
    goto LABEL_40;
  }
  v14 = RtlImageNtHeader(v48);
  *(_WORD *)v44 = *(_WORD *)(v14 + 70);
  *(_WORD *)&v44[2] = *(_WORD *)(v14 + 68);
  DriverNameFromKeyNode = PnpPrepareDriverLoading(&v43, Handle, v48, v4, &v49, v39);
  if ( DriverNameFromKeyNode < 0
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        DriverNameFromKeyNode = ObCreateObjectEx(v15, (_DWORD)IoDriverObjectType, (unsigned int)v54, 0),
        DriverNameFromKeyNode < 0) )
  {
    MmUnloadSystemImage(v50);
    ExReleaseResourceLite(&IopDriverLoadResource);
LABEL_77:
    IopBootLog(&Destination, 0);
LABEL_79:
    Buffer = v43.Buffer;
    goto LABEL_40;
  }
  v16 = Object;
  memset(Object, 0, 0x1A0uLL);
  v16[6] = v16 + 42;
  v16[42] = v16;
  v17 = 0;
  v18 = 0LL;
  do
  {
    v16[v18 + 14] = IopInvalidDeviceRequest;
    v18 = (unsigned int)(v17 + 1);
    v17 = v18;
  }
  while ( (unsigned int)v18 <= 0x1B );
  *(_DWORD *)v16 = 22020100;
  ReturnLength[0] = v18;
  v19 = RtlImageNtHeader(v48);
  *(_WORD *)v44 = *(_WORD *)(v19 + 70);
  *(_WORD *)&v44[2] = *(_WORD *)(v19 + 68);
  v20 = v48 + *(unsigned int *)(v19 + 40);
  if ( !_bittest16((const signed __int16 *)(v19 + 94), 0xDu) )
    *((_DWORD *)v16 + 4) |= 2u;
  v16[11] = v20;
  v16[5] = v50;
  v16[3] = v48;
  *((_DWORD *)v16 + 8) = *(_DWORD *)(v19 + 80);
  DriverNameFromKeyNode = ObInsertObject(v16, 0LL, 1u, 0, 0LL, &v46);
  ExReleaseResourceLite(&IopDriverLoadResource);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_77;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v22 = ObReferenceObjectByHandle(v46, 0, IoDriverObjectType, PreviousMode, &Object, 0LL);
  if ( v22 )
    KeBugCheckEx(0x11Fu, (ULONG_PTR)v46, v22, (ULONG_PTR)Object, 0LL);
  ZwClose(v46);
  v23 = (char *)Object;
  *((_QWORD *)Object + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
  v24 = ExAllocatePool2(64LL, v47.MaximumLength, 827223881LL);
  *((_QWORD *)v23 + 8) = v24;
  if ( v24 )
  {
    *((_WORD *)v23 + 29) = v47.MaximumLength;
    *((_WORD *)v23 + 28) = v47.Length;
    memmove(*((void **)v23 + 8), v47.Buffer, v47.MaximumLength);
  }
  v25 = (void *)ExAllocatePool2(64LL, 4096LL, 538996553LL);
  if ( v25 )
  {
    DriverNameFromKeyNode = NtQueryObject(Handle, ObjectNameInformation, v25, 0x1000u, ReturnLength);
    if ( DriverNameFromKeyNode >= 0 )
    {
      Buffer = v43.Buffer;
      if ( v43.Buffer )
      {
        MaximumLength = v43.MaximumLength;
        *(_QWORD *)(*((_QWORD *)v23 + 6) + 32LL) = ExAllocatePool2(64LL, v43.MaximumLength, 827223881LL);
        v27 = *((_QWORD *)v23 + 6);
        if ( *(_QWORD *)(v27 + 32) )
        {
          *(_WORD *)(v27 + 26) = MaximumLength;
          *(_WORD *)(*((_QWORD *)v23 + 6) + 24LL) = v43.Length;
          memmove(*(void **)(*((_QWORD *)v23 + 6) + 32LL), Buffer, MaximumLength);
        }
      }
      if ( (v49 & 1) != 0 )
        *((_DWORD *)v23 + 4) |= 0x100u;
      if ( v39[0] )
        *((_DWORD *)v23 + 4) |= 0x1000u;
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v25);
      VfDifCaptureDriverEntry((__int64)v23);
      DriverNameFromKeyNode = PnpCallDriverEntry((__int64)v23, (__int64)v25);
      if ( DriverNameFromKeyNode >= 0 )
      {
        VfDifCaptureIoCallbacks((__int64)v23);
        KseShimDriverIoCallbacks(v23, v28, &Destination);
      }
      PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverInit_Stop, (unsigned __int16 *)v25, DriverNameFromKeyNode);
      v29 = 0;
      v30 = 0;
      v31 = 0;
      *v53 = DriverNameFromKeyNode;
      if ( DriverNameFromKeyNode < 0 )
        DriverNameFromKeyNode = -1073740955;
      v32 = 0LL;
      do
      {
        if ( !*(_QWORD *)&v23[8 * v32 + 112] )
        {
          v29 = v30;
          *(_QWORD *)&v23[8 * v31 + 112] = IopInvalidDeviceRequest;
        }
        v32 = (unsigned int)(v29 + 1);
        v31 = v32;
        ++v29;
        v30 = v32;
      }
      while ( (unsigned int)v32 <= 0x1B );
      ExFreePoolWithTag(v25, 0);
      if ( DriverNameFromKeyNode < 0 )
      {
        ObMakeTemporaryObject(v23);
        ObfDereferenceObject(v23);
      }
      else
      {
        IopBootLog(&Destination, 1);
        v33 = *((_QWORD *)v23 + 5);
        Lock = MmAcquireLoadLock();
        MiFreeDriverInitialization(v33);
        MmReleaseLoadLock(Lock);
        IopReadyDeviceObjects((__int64)v23);
        EtwTiLogDriverObjectLoad(v23 + 56);
      }
      goto LABEL_40;
    }
    ObMakeTemporaryObject(v23);
    ObfDereferenceObject(v23);
    ExFreePoolWithTag(v25, 0);
    goto LABEL_79;
  }
  ObMakeTemporaryObject(v23);
  ObfDereferenceObject(v23);
  Buffer = v43.Buffer;
  DriverNameFromKeyNode = -1073741670;
LABEL_40:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741218 && DriverNameFromKeyNode != -1073740948 )
  {
    Object = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(Handle);
      if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(Handle, L"ErrorControl", 0, &Object) >= 0 )
      {
        v37 = Object;
        if ( *((_DWORD *)Object + 3) )
          CmBootLastKnownGood(
            *(unsigned int *)((char *)Object + *((unsigned int *)Object + 2)),
            (unsigned __int64)&v47 & -(__int64)(v47.Buffer != 0LL),
            (unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL),
            (unsigned int)DriverNameFromKeyNode);
        ExFreePoolWithTag(v37, 0);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Buffer )
  {
    PnpDiagnosticTraceDriverFullInfo(&KMPnPEvt_DriverLoad_Stop, &v43.Length, DriverNameFromKeyNode, &v47, v44[0]);
    ExFreePoolWithTag(Buffer, 0);
  }
  if ( v47.Buffer )
    ExFreePoolWithTag(v47.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(Handle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
