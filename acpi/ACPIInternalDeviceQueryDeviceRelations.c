__int64 __fastcall ACPIInternalDeviceQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v3; // bp
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  __int64 v8; // rcx
  unsigned int Length; // ebx
  const char *v10; // r14
  __int64 v11; // rdi
  char *IrpText; // rax
  __int64 v13; // rdx
  const char *v14; // r8
  char v15; // r10
  const char *v16; // r11
  int TargetRelation; // eax
  unsigned int Status; // ebx
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r8
  unsigned __int64 v23; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v23 = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = byte_1C00622D0;
  v11 = DeviceExtension;
  if ( Length != 4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(v8, MinorFunction);
      WPP_RECORDER_SF_qsdqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v13,
        (__int64)v14,
        0xBu,
        (__int64)&WPP_3f059b4445c33feb0bcb2acb2d7cf140_Traceguids,
        (char)Irp,
        IrpText,
        Length,
        v15,
        v16,
        v14);
    }
    goto LABEL_8;
  }
  TargetRelation = ACPIBusIrpQueryTargetRelation(Object, (char)Irp, (PVOID *)&v23);
  Status = TargetRelation;
  if ( TargetRelation < 0 )
  {
    if ( TargetRelation == -1073741637 )
    {
LABEL_8:
      Status = Irp->IoStatus.Status;
      goto LABEL_9;
    }
    Irp->IoStatus.Status = TargetRelation;
    Irp->IoStatus.Information = 0LL;
  }
  else
  {
    Irp->IoStatus.Status = TargetRelation;
    Irp->IoStatus.Information = v23;
  }
LABEL_9:
  IofCompleteRequest(Irp, 0);
  if ( v11 )
  {
    v3 = v11;
    if ( (*(_QWORD *)(v11 + 8) & 0x200000000000LL) != 0 )
      v10 = *(const char **)(v11 + 608);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = ACPIDebugGetIrpText(v19, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_3f059b4445c33feb0bcb2acb2d7cf140_Traceguids,
      (char)Irp,
      (__int64)v20,
      Status,
      v3,
      v10,
      v21);
  }
  return Status;
}
