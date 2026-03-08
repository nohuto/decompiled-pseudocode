/*
 * XREFs of IopUnloadDriver @ 0x1408549C8
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x140866C04 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x14094EB70 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140B68368 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x140202BAC (PnpDiagnosticTraceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1402B153C (PnpDiagnosticTraceDriverFullInfo.c)
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     IopCheckUnloadDriver @ 0x1403A623C (IopCheckUnloadDriver.c)
 *     IopCleanupNotifications @ 0x1403A62E8 (IopCleanupNotifications.c)
 *     ZwUnloadDriver @ 0x140415DD0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopGetDriverNameFromKeyNode @ 0x1406C1730 (IopGetDriverNameFromKeyNode.c)
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 *     IopOpenRegistryKey @ 0x1407803E0 (IopOpenRegistryKey.c)
 *     ObMakeTemporaryObject @ 0x140791C40 (ObMakeTemporaryObject.c)
 *     PnpIsLegacyDriver @ 0x1407976A8 (PnpIsLegacyDriver.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140854C60 (EtwTiLogDriverObjectUnLoad.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadDriver(UNICODE_STRING *a1, char a2)
{
  __int16 v4; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v6; // rdx
  __int64 v7; // rcx
  int DriverNameFromKeyNode; // edi
  _QWORD *v9; // rbx
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  void *Pool2; // rdi
  unsigned int v16; // ebx
  void *v17; // rcx
  HANDLE v18; // [rsp+40h] [rbp-E8h] BYREF
  void *Src[2]; // [rsp+48h] [rbp-E0h] BYREF
  UNICODE_STRING Destination; // [rsp+58h] [rbp-D0h] BYREF
  PVOID v21; // [rsp+68h] [rbp-C0h]
  PVOID Object; // [rsp+70h] [rbp-B8h] BYREF
  _DWORD v23[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+80h] [rbp-A8h]
  UNICODE_STRING *p_Destination; // [rsp+88h] [rbp-A0h]
  int v26; // [rsp+90h] [rbp-98h]
  int v27; // [rsp+94h] [rbp-94h]
  __int128 v28; // [rsp+98h] [rbp-90h]
  struct _WORK_QUEUE_ITEM WorkItem[3]; // [rsp+B0h] [rbp-78h] BYREF
  char v30; // [rsp+140h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+148h] [rbp+20h] BYREF

  *(_OWORD *)Src = 0LL;
  v21 = 0LL;
  v23[1] = 0;
  v27 = 0;
  Handle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v18 = 0LL;
  v30 = 0;
  LOBYTE(v4) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, &a1->Length);
    Destination.Buffer = 0LL;
    *(_DWORD *)&Destination.Length = 0;
    if ( PsIsCurrentThreadInServerSilo(v7, v6) )
    {
      DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
      return 3221225569LL;
    }
    DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, a1, 0x20019u, 0);
    if ( DriverNameFromKeyNode >= 0 )
    {
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( DriverNameFromKeyNode >= 0 )
      {
        v23[0] = 48;
        v24 = 0LL;
        v26 = 576;
        p_Destination = &Destination;
        v28 = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName(
                                  (__int64)v23,
                                  (__int64)IoDriverObjectType,
                                  0,
                                  0LL,
                                  1,
                                  0LL,
                                  (__int64)&v18);
        if ( DriverNameFromKeyNode >= 0 )
        {
          Object = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v18, 0, IoDriverObjectType, 0, &Object, 0LL);
          v9 = Object;
          ObCloseHandle(v18, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v4 = *(_WORD *)(RtlImageNtHeader(v9[3]) + 70);
            if ( v9[13] && v9[5] )
            {
              if ( a2 || (unsigned int)PnpIsLegacyDriver((__int64)v9) )
              {
                DriverNameFromKeyNode = IopCheckUnloadDriver(v9, &v30);
                if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
                {
                  if ( v30 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                    {
                      ((void (__fastcall *)(_QWORD *))v9[13])(v9);
                    }
                    else
                    {
                      memset(WorkItem, 0, 0x50uLL);
                      KeInitializeEvent((PRKEVENT)&WorkItem[1], NotificationEvent, 0);
                      WorkItem[1].Parameter = v9;
                      WorkItem[0].WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                      WorkItem[0].Parameter = WorkItem;
                      WorkItem[0].List.Flink = 0LL;
                      ExQueueWorkItem(WorkItem, DelayedWorkQueue);
                      KeWaitForSingleObject(&WorkItem[1], Executive, 0, 0, 0LL);
                    }
                    EtwTiLogDriverObjectUnLoad(v9 + 7);
                    IopCleanupNotifications(v9, v9);
                    ObMakeTemporaryObject(v9);
                    ObfDereferenceObject(v9);
                  }
                  ObfDereferenceObject(v9);
                  DriverNameFromKeyNode = 0;
                }
                goto LABEL_17;
              }
            }
            else
            {
              v17 = v9;
            }
            ObfDereferenceObject(v17);
            DriverNameFromKeyNode = -1073741808;
          }
        }
      }
    }
LABEL_17:
    PnpDiagnosticTraceDriverFullInfo(&KMPnPEvt_DriverUnload_Stop, &a1->Length, DriverNameFromKeyNode, &Destination, v4);
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)DriverNameFromKeyNode;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    return 3221225569LL;
  v11 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v11 = (__int64)a1;
  v12 = *(_DWORD *)v11;
  LODWORD(Src[0]) = v12;
  v13 = *(void **)(v11 + 8);
  Src[1] = v13;
  if ( !(_WORD)v12 )
    return 3221225485LL;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int64)v13 + (unsigned __int16)v12;
  if ( v14 > 0x7FFFFFFF0000LL || v14 < (unsigned __int64)v13 )
    MEMORY[0x7FFFFFFF0000] = 0;
  Pool2 = (void *)ExAllocatePool2(289LL, LOWORD(Src[0]), 844001097LL);
  v21 = Pool2;
  memmove(Pool2, Src[1], LOWORD(Src[0]));
  Src[1] = Pool2;
  v16 = ZwUnloadDriver((PUNICODE_STRING)Src);
  ExFreePoolWithTag(Pool2, 0);
  return v16;
}
