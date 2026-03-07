__int64 __fastcall ACPIBusIrpQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rax
  __int64 v7; // rcx
  unsigned int Length; // ebx
  const char *v9; // r15
  char v10; // bp
  __int64 v11; // rsi
  char *IrpText; // rax
  __int64 v13; // rdx
  const char *v14; // r8
  char v15; // r10
  const char *v16; // r11
  int EjectRelations; // eax
  unsigned int Status; // ebx
  __int64 v19; // rcx
  char *v20; // rax
  const char *v21; // r8
  unsigned __int64 Information; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Information = Irp->IoStatus.Information;
  MinorFunction = CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  Length = CurrentStackLocation->Parameters.Read.Length;
  v9 = byte_1C00622D0;
  v10 = 0;
  v11 = DeviceExtension;
  if ( Length )
  {
    switch ( Length )
    {
      case 1u:
        EjectRelations = ACPIBusAndFilterIrpQueryEjectRelations((ULONG_PTR)Object, (char)Irp, (PVOID *)&Information);
        break;
      case 3u:
        EjectRelations = ACPIBusAndFilterIrpQueryRemovalRelations((ULONG_PTR)Object, (PVOID *)&Information);
        break;
      case 4u:
        EjectRelations = ACPIBusIrpQueryTargetRelation(Object);
        break;
      default:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          IrpText = ACPIDebugGetIrpText(v7, MinorFunction);
          WPP_RECORDER_SF_qsdqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v13,
            (__int64)v14,
            0x24u,
            (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
            (char)Irp,
            IrpText,
            Length,
            v15,
            v16,
            v14);
        }
        goto LABEL_16;
    }
  }
  else
  {
    EjectRelations = ACPIBusIrpQueryBusRelations((ULONG_PTR)Object, (char)Irp, (PVOID *)&Information);
  }
  Status = EjectRelations;
  if ( EjectRelations < 0 )
  {
    if ( EjectRelations == -1073741637 || Information )
    {
LABEL_16:
      Status = Irp->IoStatus.Status;
      goto LABEL_17;
    }
    Irp->IoStatus.Status = EjectRelations;
    Irp->IoStatus.Information = 0LL;
  }
  else
  {
    Irp->IoStatus.Status = EjectRelations;
    Irp->IoStatus.Information = Information;
  }
LABEL_17:
  IofCompleteRequest(Irp, 0);
  if ( v11 )
  {
    v10 = v11;
    if ( (*(_QWORD *)(v11 + 8) & 0x200000000000LL) != 0 )
      v9 = *(const char **)(v11 + 608);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = ACPIDebugGetIrpText(v19, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x25u,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      (char)Irp,
      (__int64)v20,
      Status,
      v10,
      v9,
      v21);
  }
  return Status;
}
