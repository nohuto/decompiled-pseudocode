void __fastcall IopRaiseHardError(PIRP Irp, __int64 a2, char *a3)
{
  char v6; // r15
  __int64 Pool2; // rax
  UNICODE_STRING *v8; // r14
  NTSTATUS v9; // esi
  _KPROCESS *Process; // rcx
  unsigned int Status; // r10d
  unsigned int v12; // r11d
  __int64 v13; // r8
  struct _LIST_ENTRY *Flink; // rax
  int v15; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v17; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-45h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v20; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp-1h] BYREF
  struct _LIST_ENTRY *v22; // [rsp+80h] [rbp+7h]
  struct _LIST_ENTRY *v23; // [rsp+88h] [rbp+Fh]

  v17 = 0;
  v18 = 0;
  v6 = 0;
  memset(&v20, 0, sizeof(v20));
  DestinationString = 0LL;
  ObQueryNameStringMode(a3, 0LL, 0, &v18, 0);
  Pool2 = ExAllocatePool2(256LL, v18, 538996553LL);
  v8 = (UNICODE_STRING *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
LABEL_35:
    Irp->IoStatus.Status = v9;
LABEL_36:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_37;
  }
  v9 = ObQueryNameStringMode(a3, Pool2, v18, &v17, 0);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    goto LABEL_35;
  }
  if ( a2 && (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    DestinationString.MaximumLength = 64;
    DestinationString.Buffer = (wchar_t *)(a2 + 32);
    DestinationString.Length = *(_WORD *)(a2 + 6);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  Process = Irp->Tail.Overlay.Thread->Process;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(Process, 0, (__int64)&v20);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  if ( Status != -1073741806 )
  {
    if ( Status == -1073741805 || Status == -1073741804 )
    {
LABEL_17:
      p_DestinationString = v8;
      v12 = 2;
      v13 = 1LL;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v23 = 0LL;
      v22 = Flink;
      goto LABEL_19;
    }
    if ( Status != -1073741662 )
    {
      if ( Status != -1073741661 && Status != -1073741643 )
      {
        v12 = 0;
        v13 = 0LL;
        goto LABEL_19;
      }
      goto LABEL_17;
    }
  }
  v22 = (struct _LIST_ENTRY *)v8;
  p_DestinationString = &DestinationString;
  v12 = 3;
  v13 = 3LL;
  v23 = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
LABEL_19:
  if ( ExReadyForErrors )
  {
    v15 = ExRaiseHardError(Status, v12, v13, &p_DestinationString, 8, &v17);
  }
  else
  {
    v17 = 0;
    v15 = -1073741823;
  }
  if ( v6 )
    KiUnstackDetachProcess(&v20);
  ExFreePoolWithTag(v8, 0);
  if ( v15 >= 0 && v17 == 9 )
  {
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))Irp->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[Irp->Tail.Overlay.CurrentStackLocation->MajorFunction])(
      Irp->Tail.Overlay.CurrentStackLocation->DeviceObject,
      Irp);
    return;
  }
  if ( v17 == 3 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 13 && CurrentStackLocation->MinorFunction == 1 )
      Irp->IoStatus.Information = 1LL;
    else
      Irp->IoStatus.Status = -1073741248;
  }
  if ( (Irp->Flags & 0x40) != 0 )
    goto LABEL_36;
LABEL_37:
  IofCompleteRequest(Irp, 1);
}
