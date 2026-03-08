/*
 * XREFs of IopCompleteUnloadOrDelete @ 0x1402F0CC4
 * Callers:
 *     IoDetachDevice @ 0x1402F0C40 (IoDetachDevice.c)
 *     IopDecrementDeviceObjectRef @ 0x14030F5C0 (IopDecrementDeviceObjectRef.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x140240028 (IopGetDeviceAttachmentBase.c)
 *     IopInsertRemoveDevice @ 0x140241748 (IopInsertRemoveDevice.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1402F0E78 (IopDecrementDeviceObjectRefCount.c)
 *     MmIsDriverVerifying @ 0x140303C10 (MmIsDriverVerifying.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14030F910 (IopIncrementDeviceObjectRefCount.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PnpIsAnyDeviceInUse @ 0x1403CE7F8 (PnpIsAnyDeviceInUse.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 *     IopLoadUnloadDriver @ 0x140780340 (IopLoadUnloadDriver.c)
 *     ObMakeTemporaryObject @ 0x140791C40 (ObMakeTemporaryObject.c)
 *     PnpChainDereferenceComplete @ 0x14087CAC8 (PnpChainDereferenceComplete.c)
 *     VfFastIoCheckState @ 0x140AC8204 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140AC82DC (VfFastIoSnapState.c)
 */

char __fastcall IopCompleteUnloadOrDelete(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, KIRQL a3)
{
  char v3; // bl
  __int64 v4; // rsi
  char v7; // r13
  char v8; // r12
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // r13
  void (__fastcall *v14)(__int64, ULONG_PTR); // r13
  void *v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // r8d
  int IsAnyDeviceInUse; // ebx
  _BYTE WorkItem[80]; // [rsp+30h] [rbp-50h] BYREF
  __int64 DeviceAttachmentBase; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v25; // [rsp+C8h] [rbp+48h]

  v25 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v7 = 0;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL);
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      if ( (v9 & 1) == 0 || (*(_DWORD *)(v4 + 16) & 1) != 0 )
        v8 = 0;
      v10 = *(_QWORD *)(BugCheckParameter2 + 24);
      DeviceAttachmentBase = v10;
      if ( v10 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 80LL);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2);
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        if ( v13 )
        {
          if ( *(_DWORD *)v13 > 0x68u )
          {
            v14 = *(void (__fastcall **)(__int64, ULONG_PTR))(v13 + 104);
            if ( v14 )
            {
              v15 = (MmVerifierData & 0x10) != 0
                 && MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(BugCheckParameter2 + 8))
                  ? (void *)VfFastIoSnapState()
                  : 0LL;
              v14(DeviceAttachmentBase, BugCheckParameter2);
              if ( v15 )
                VfFastIoCheckState(v15);
            }
          }
        }
        a3 = KeAcquireQueuedSpinLock(0xAuLL);
        IopDecrementDeviceObjectRefCount(BugCheckParameter2);
        if ( *(_QWORD *)(BugCheckParameter2 + 24) || *(_DWORD *)(BugCheckParameter2 + 4) )
          goto LABEL_18;
      }
      KeReleaseQueuedSpinLock(0xAuLL, a3);
      v11 = *(_QWORD *)(BugCheckParameter2 + 272);
      if ( v11 )
        ObDereferenceSecurityDescriptor(v11, 1LL);
      IopInsertRemoveDevice(*(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter2, 0);
      ObfDereferenceObject((PVOID)BugCheckParameter2);
      v7 = 1;
      if ( !v8 )
        return v7;
      a3 = KeAcquireQueuedSpinLock(0xAuLL);
      if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
      {
        v3 = 1;
LABEL_18:
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        return v3;
      }
    }
    v16 = *(_QWORD *)(v4 + 8);
    v17 = v16;
    if ( v16 )
    {
      while ( !*(_DWORD *)(v17 + 4) && !*(_QWORD *)(v17 + 24) && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 6) == 0 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_24;
      }
      v8 = 0;
    }
LABEL_24:
    v18 = *(_DWORD *)(v4 + 16);
    if ( (v18 & 0x80u) != 0 && v16 )
    {
      v8 = 0;
    }
    else if ( v8 )
    {
      *(_DWORD *)(v4 + 16) = v18 | 1;
    }
    KeReleaseQueuedSpinLock(0xAuLL, a3);
    if ( v8 )
    {
      memset(WorkItem, 0, sizeof(WorkItem));
      WorkItem[34] = 6;
      *(_QWORD *)&WorkItem[48] = &WorkItem[40];
      *(_DWORD *)&WorkItem[36] = 0;
      *(_QWORD *)&WorkItem[40] = &WorkItem[40];
      *(_QWORD *)&WorkItem[56] = v4;
      if ( v25 )
      {
        IopLoadUnloadDriver(WorkItem);
      }
      else
      {
        *(_QWORD *)WorkItem = 0LL;
        *(_QWORD *)&WorkItem[16] = IopLoadUnloadDriver;
        *(_QWORD *)&WorkItem[24] = WorkItem;
        ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
        KeWaitForSingleObject(&WorkItem[32], Executive, 0, 0, 0LL);
      }
      ObMakeTemporaryObject((PVOID)v4);
      ObfDereferenceObject((PVOID)v4);
    }
    return v7;
  }
  DeviceAttachmentBase = IopGetDeviceAttachmentBase(BugCheckParameter2);
  v19 = DeviceAttachmentBase;
  IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&DeviceAttachmentBase, v20, 0LL);
  KeReleaseQueuedSpinLock((unsigned int)(v21 + 10), a3);
  if ( IsAnyDeviceInUse != 1 )
    PnpChainDereferenceComplete(v19, v25);
  return 0;
}
