__int64 __fastcall DpiMiracastSendAsyncUserModeRequest(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        PDEVICE_OBJECT DeviceObject,
        IRP **a11)
{
  unsigned int v12; // r12d
  char v13; // r14
  struct _FILE_OBJECT *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 Pool2; // rax
  _QWORD *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  PIRP Irp; // rax
  IRP *v26; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  struct _IO_STACK_LOCATION *v29; // rax
  __int64 v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 v33; // [rsp+30h] [rbp-48h]
  __int64 v34; // [rsp+38h] [rbp-40h]
  DWORD v35; // [rsp+90h] [rbp+18h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+50h]

  v35 = a3;
  v12 = a7;
  v13 = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(0LL, &EventEnterMiracastSendUserModeRequest, a3, a1[12], 0, Size, a7, 0);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 0;
  if ( a11 )
    *a11 = 0LL;
  if ( (struct _KTHREAD *)a1[11] != KeGetCurrentThread() )
  {
    v13 = 1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 4);
    a1[11] = KeGetCurrentThread();
  }
  v15 = (struct _FILE_OBJECT *)a1[22];
  DeviceObjecta = (PDEVICE_OBJECT)a1[23];
  if ( v15 )
    ObfReferenceObject(v15);
  if ( v13 )
  {
    a1[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 4);
  }
  if ( !v15 )
  {
    WdLogSingleEntry1(3LL, a1);
    v18 = -1073741130;
    goto LABEL_35;
  }
  v19 = Size;
  if ( (unsigned int)Size <= a7 )
    v19 = a7;
  v20 = v19 + 64;
  if ( v20 < 0x40 )
  {
    v18 = -1073741675;
    v23 = -1073741675LL;
    v24 = 2LL;
    goto LABEL_33;
  }
  Pool2 = ExAllocatePool2(64LL, v20, 1953656900LL);
  v22 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v23 = -1073741801LL;
    v18 = -1073741801;
    v24 = 6LL;
LABEL_33:
    WdLogSingleEntry1(v24, v23);
    goto LABEL_34;
  }
  *(_QWORD *)Pool2 = v15;
  *(_QWORD *)(Pool2 + 8) = a1[12];
  *(_QWORD *)(Pool2 + 32) = a8;
  *(_QWORD *)(Pool2 + 40) = a9;
  *(_DWORD *)(Pool2 + 56) = a11 == 0LL;
  Irp = IoAllocateIrp(DeviceObjecta->StackSize, 0);
  v26 = Irp;
  if ( !Irp )
  {
    v18 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    ExFreePoolWithTag(v22, 0);
LABEL_34:
    ObfDereferenceObject(v15);
    goto LABEL_35;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v35;
  if ( !a7 )
    a6 = 0LL;
  CurrentStackLocation[-1].MajorFunction = 14;
  CurrentStackLocation[-1].Parameters.Read.Length = a7;
  CurrentStackLocation[-1].Parameters.Create.Options = Size;
  Irp->UserBuffer = a6;
  v22[6] = a6;
  if ( (_DWORD)Size || a7 )
  {
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)(v22 + 8);
    if ( (_DWORD)Size )
      memmove(v22 + 8, a4, (unsigned int)Size);
  }
  CurrentStackLocation[-1].FileObject = v15;
  v29 = v26->Tail.Overlay.CurrentStackLocation;
  v29[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
  v29[-1].Context = v22;
  v29[-1].Control = -32;
  if ( a11 )
    *a11 = v26;
  v12 = a7;
  v18 = IofCallDriver(DeviceObjecta, v26);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 1;
LABEL_35:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    LODWORD(v34) = v18;
    LODWORD(v33) = v12;
    LODWORD(v32) = Size;
    LODWORD(v31) = 0;
    McTemplateK0pqtqq_EtwWriteTransfer(v16, &EventLeaveMiracastSendUserModeRequest, v17, a1[12], v31, v32, v33, v34);
  }
  return v18;
}
