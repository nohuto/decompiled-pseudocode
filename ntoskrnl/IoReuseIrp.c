/*
 * XREFs of IoReuseIrp @ 0x1402B1EB0
 * Callers:
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 *     PopPrepareIoctl @ 0x140846A50 (PopPrepareIoctl.c)
 *     SmKmFileInfoCleanup @ 0x1409D5B90 (SmKmFileInfoCleanup.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwActivityIdControl @ 0x140244870 (EtwActivityIdControl.c)
 *     IopIrpHasExtensionType @ 0x1402B1D58 (IopIrpHasExtensionType.c)
 *     IoSetActivityIdIrp @ 0x1402B2080 (IoSetActivityIdIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1402F98FC (IopFreeCopyObjectsFromIrp.c)
 *     IopIsActivityTracingEventEnabled @ 0x1403BD158 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IovpLogStackTrace @ 0x140ABEE08 (IovpLogStackTrace.c)
 *     VfIoInitializeIrp @ 0x140ACA99C (VfIoInitializeIrp.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // si
  __int64 StackCount; // r15
  UCHAR v6; // bp
  size_t Size; // r13
  __int64 v8; // rax
  signed __int8 AllocationFlags; // cl
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r14
  USHORT v14; // di
  CCHAR ApcStateIndex; // cl
  GUID ActivityId; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0;
  ActivityId = 0LL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfIoInitializeIrp(Irp, retaddr, 1);
    IovpLogStackTrace(Irp);
  }
  StackCount = Irp->StackCount;
  v6 = Irp->AllocationFlags & 0x6D;
  Size = Irp->Size;
  v8 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  AllocationFlags = Irp->AllocationFlags;
  if ( AllocationFlags < 0 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
    Irp->AllocationFlags = AllocationFlags & 0x7F;
  }
  else
  {
    if ( v8 && (*(_BYTE *)(v8 + 2) & 1) != 0 )
    {
      v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
      v2 = 1;
      ActivityId = *(GUID *)(v10 + 24);
    }
    else
    {
      v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    }
    v11 = v10;
    if ( v10 )
    {
      if ( (Irp->AllocationFlags & 0x80u) == 0 && (*(_BYTE *)(v10 + 2) & 0x20) != 0 )
        *(_QWORD *)(v10 + 40) = 0LL;
      v12 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
      if ( (Irp->AllocationFlags & 0x80u) == 0
        && v12
        && _bittest16((const signed __int16 *)(v12 + 2), 9u)
        && _bittest((const signed __int32 *)&Irp->Flags, 9u) )
      {
        IopFreeCopyObjectsFromIrp(Irp);
        Irp->PendingReturned = 1;
      }
      *(_WORD *)(v11 + 2) = 0;
    }
  }
  v13 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  v14 = *(&Irp->Size + 1);
  memset(Irp, 0, Size);
  Irp->Size = Size;
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->StackCount = StackCount;
  ApcStateIndex = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  Irp->ApcEnvironment = ApcStateIndex;
  *(&Irp->Size + 1) = v14;
  Irp->AllocationFlags = v6;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1]
                                                                       + 64 * StackCount
                                                                       + 8 * StackCount);
  if ( v13 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v13;
    if ( v2 == 1 )
      IoSetActivityIdIrp(Irp, &ActivityId);
    if ( (IopFunctionPointerMask & 4) != 0
      && (IopIrpExtensionStatus & 1) != 0
      && (!IopIrpHasExtensionType((__int64)Irp, 0)
       || (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp)) )
    {
      ActivityId = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_ReuseIrp) )
        EtwWriteEx(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp, 0LL, 0, (LPCGUID)(v13 + 24), &ActivityId, 0, 0LL);
      IoSetActivityIdIrp(Irp, &ActivityId);
    }
  }
}
