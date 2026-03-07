__int64 __fastcall PiInitializeDevice(PCUNICODE_STRING SourceString)
{
  WCHAR *Pool2; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *v4; // rax
  int DeviceInstancePath; // edi
  __int64 v6; // r13
  unsigned __int16 Length; // bx
  int v8; // eax
  struct _DEVICE_OBJECT *v9; // r14
  int DeviceNode; // eax
  __int64 v11; // rsi
  __int16 v13; // ax
  int FailedInstallProblemStatus; // r8d
  int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-38h] BYREF
  void *v22; // [rsp+50h] [rbp-30h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  int v26; // [rsp+C8h] [rbp+48h] BYREF
  int v27; // [rsp+D0h] [rbp+50h] BYREF
  int v28; // [rsp+D8h] [rbp+58h] BYREF

  v28 = 0;
  Pool2 = 0LL;
  v26 = 0;
  v27 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  P = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  PpDevNodeLockTree(1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)SourceString, 0x43706E50u);
  DeviceObject = v4;
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v4, 0x43706E50u);
    DeviceInstancePath = 0;
LABEL_21:
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_22;
  }
  DeviceInstancePath = PnpUnicodeStringToWstr(&v22, 0LL, &SourceString->Length);
  if ( DeviceInstancePath < 0 )
    goto LABEL_21;
  DeviceInstancePath = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( DeviceInstancePath < 0 )
    goto LABEL_21;
  v6 = (__int64)v22;
  DeviceInstancePath = CmOpenDeviceRegKey(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)v22,
                         16,
                         0,
                         983103,
                         0,
                         (__int64)&Handle,
                         0LL);
  if ( DeviceInstancePath < 0 )
    goto LABEL_21;
  DestinationString.MaximumLength = 0;
  Length = 0;
  v26 = 512;
  DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, 512LL, 538996816LL);
  if ( !Pool2 )
  {
    DeviceInstancePath = -1073741670;
    goto LABEL_21;
  }
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v6,
              (__int64)Handle,
              5,
              (__int64)&v27,
              (__int64)Pool2,
              (__int64)&v26,
              0) >= 0
    && v27 == 1
    && v26 )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, Pool2) >= 0 )
    {
      Length = DestinationString.Length;
    }
    else
    {
      Length = 0;
      DestinationString.MaximumLength = 0;
      DestinationString.Length = 0;
      DestinationString.Buffer = 0LL;
    }
  }
  v8 = IopCreateRootEnumeratedDeviceObject(&DeviceObject);
  v9 = DeviceObject;
  DeviceInstancePath = v8;
  if ( v8 < 0 )
  {
LABEL_19:
    if ( v9 )
      IoDeleteDevice(v9);
    goto LABEL_21;
  }
  DeviceObject->Flags |= 0x1000u;
  DeviceNode = PipAllocateDeviceNode((__int64)v9, (__int64)&v20);
  v11 = v20;
  if ( !v20 )
  {
    if ( DeviceNode == -1073740946 )
      DeviceNode = -1073741670;
    DeviceInstancePath = DeviceNode;
    if ( DeviceNode >= 0 )
      goto LABEL_21;
    goto LABEL_19;
  }
  PipSetDevNodeFlags(v20, 17);
  PipSetDevNodeState(v11, 772);
  v26 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v6,
              (__int64)Handle,
              11,
              (__int64)&v27,
              (__int64)&v28,
              (__int64)&v26,
              0) >= 0 )
  {
    if ( v27 == 4 && v26 == 4 )
    {
      v13 = v28;
    }
    else
    {
      v13 = 0;
      v28 = 0;
    }
    if ( (v13 & 0x20) != 0 )
    {
      FailedInstallProblemStatus = 0;
      v15 = 18;
LABEL_42:
      PipSetDevNodeProblem(v11, v15, FailedInstallProblemStatus);
      goto LABEL_43;
    }
    if ( (v13 & 0x2000) != 0 )
    {
      FailedInstallProblemStatus = 0;
      v15 = 16;
      goto LABEL_42;
    }
    if ( (v13 & 0x40) != 0 )
    {
      FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(v6, (__int64)Handle);
      v15 = 28;
      goto LABEL_42;
    }
  }
LABEL_43:
  DeviceInstancePath = PnpAllocateDeviceInstancePath(v11, (unsigned int)SourceString->Length + 2);
  if ( DeviceInstancePath < 0 )
    goto LABEL_19;
  RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 40), SourceString);
  if ( !Length || (int)PnpConcatenateUnicodeStrings((PUNICODE_STRING)(v11 + 56), &DestinationString) < 0 )
  {
    *(_DWORD *)(v11 + 56) = 0;
    *(_QWORD *)(v11 + 64) = 0LL;
  }
  DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(v11 + 32), v11 + 40);
  if ( DeviceInstancePath < 0 )
    goto LABEL_19;
  PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, v11);
  ObfReferenceObject(v9);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v16 = v20;
  PnpQueryAndSaveDeviceNodeCapabilities(v20);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v17, *(_QWORD *)(v16 + 48), 1);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v18, *(_QWORD *)(v16 + 48), 14);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v19, *((_QWORD *)IopRootDeviceNode + 6), 15);
  PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, *(_QWORD **)(v11 + 32));
LABEL_22:
  PpDevNodeUnlockTree(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  if ( v22 )
    PnpUnicodeStringToWstrFree(v22, (__int64)SourceString);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)DeviceInstancePath;
}
