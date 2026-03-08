/*
 * XREFs of ACPIDockIrpQueryDeviceRelations @ 0x1C007B010
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qsdqss @ 0x1C000A844 (WPP_RECORDER_SF_qsdqss.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C007B228 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C00812EC (ACPIBusIrpQueryTargetRelation.c)
 */

__int64 __fastcall ACPIDockIrpQueryDeviceRelations(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  unsigned __int8 MinorFunction; // r12
  const char *v8; // r14
  unsigned int Length; // ebx
  char v10; // bp
  __int64 v11; // rsi
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
  unsigned __int64 Information; // [rsp+98h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Information = Irp->IoStatus.Information;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  MinorFunction = CurrentStackLocation->MinorFunction;
  v8 = byte_1C00622D0;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v10 = 0;
  v11 = DeviceExtension;
  switch ( Length )
  {
    case 0u:
      goto LABEL_13;
    case 1u:
      TargetRelation = ACPIDockIrpQueryEjectRelations(Object, Irp, &Information);
      break;
    case 4u:
      TargetRelation = ACPIBusIrpQueryTargetRelation(Object);
      break;
    default:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(v6, MinorFunction);
        WPP_RECORDER_SF_qsdqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v13,
          (__int64)v14,
          0xFu,
          (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
          (char)Irp,
          IrpText,
          Length,
          v15,
          v16,
          v14);
      }
      goto LABEL_13;
  }
  Status = TargetRelation;
  if ( TargetRelation < 0 )
  {
    if ( TargetRelation != -1073741637 && !Information )
    {
      Irp->IoStatus.Status = TargetRelation;
      Irp->IoStatus.Information = 0LL;
      goto LABEL_14;
    }
LABEL_13:
    Status = Irp->IoStatus.Status;
    goto LABEL_14;
  }
  Irp->IoStatus.Status = TargetRelation;
  Irp->IoStatus.Information = Information;
LABEL_14:
  IofCompleteRequest(Irp, 0);
  if ( v11 )
  {
    v10 = v11;
    if ( (*(_QWORD *)(v11 + 8) & 0x200000000000LL) != 0 )
      v8 = *(const char **)(v11 + 608);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = ACPIDebugGetIrpText(v19, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x10u,
      (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
      (char)Irp,
      (__int64)v20,
      Status,
      v10,
      v8,
      v21);
  }
  return Status;
}
