__int64 __fastcall SmKmIssueVolumeIo(__int64 a1, __int64 a2, LARGE_INTEGER *a3, IO_COMPLETION_ROUTINE *a4, void *a5)
{
  struct _DEVICE_OBJECT *v5; // rbp
  IRP *Irp; // rbx
  struct _MDL *v12; // rdi
  __int64 v13; // r9
  int v14; // r8d
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  ULONG v18; // r8d
  struct _IO_STACK_LOCATION *v19; // r8

  v5 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  if ( (*(_QWORD *)a2 & 1) != 0 )
  {
    v12 = *(struct _MDL **)(a2 + 8);
    Irp = (IRP *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  else
  {
    Irp = IoAllocateIrp(v5->StackSize, 0);
    if ( !Irp )
      return 3221225626LL;
    v12 = *(struct _MDL **)a2;
    v13 = *(unsigned int *)(a2 + 16);
    v14 = *(_QWORD *)(a2 + 8);
    v15 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFF000uLL;
    v16 = *(_QWORD *)(a2 + 8) & 0xFFFLL;
    v12->Next = 0LL;
    v12->MdlFlags = 0;
    v12->StartVa = (PVOID)v15;
    v12->ByteOffset = v14 & 0xFFF;
    v12->ByteCount = v13;
    v12->Size = 8 * (((unsigned __int64)(v16 + v13 + 4095) >> 12) + 6);
    MmBuildMdlForNonPagedPool(v12);
    MmMdlPageContentsState((__int64)v12, 1u);
  }
  Irp->MdlAddress = v12;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->UserIosb = &Irp->IoStatus;
  Irp->RequestorMode = 0;
  Irp->Tail.Overlay.OriginalFileObject = *(PFILE_OBJECT *)(a1 + 8);
  CurrentStackLocation[-1].MajorFunction = 4 - ((*(_DWORD *)(a2 + 32) & 1) != 0);
  v18 = *(_DWORD *)(a2 + 16);
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Parameters.Read.Length = v18;
  CurrentStackLocation[-1].Parameters.Create.Options = 1397572723;
  v19 = Irp->Tail.Overlay.CurrentStackLocation;
  v19[-1].CompletionRoutine = a4;
  v19[-1].Context = a5;
  v19[-1].Control = -32;
  IofCallDriver(v5, Irp);
  return 259LL;
}
