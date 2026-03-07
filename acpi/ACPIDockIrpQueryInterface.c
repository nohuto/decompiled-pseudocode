__int64 __fastcall ACPIDockIrpQueryInterface(PVOID Object, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rcx
  unsigned __int8 MinorFunction; // r12
  char v8; // di
  unsigned int Status; // esi
  __int64 v10; // rbx
  unsigned __int16 Size; // ax
  unsigned __int16 v12; // si
  __int64 v13; // rcx
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10
  _WORD Src[2]; // [rsp+60h] [rbp-48h] BYREF
  int v19; // [rsp+64h] [rbp-44h]
  PVOID v20; // [rsp+68h] [rbp-40h]
  char (__fastcall *v21)(PVOID); // [rsp+70h] [rbp-38h]
  LONG_PTR (__fastcall *v22)(PVOID); // [rsp+78h] [rbp-30h]
  __int64 (__fastcall *v23)(ULONG_PTR, int); // [rsp+80h] [rbp-28h]
  __int64 (__fastcall *v24)(ULONG_PTR); // [rsp+88h] [rbp-20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v8 = 0;
  Status = Irp->IoStatus.Status;
  v10 = DeviceExtension;
  if ( SecurityContext == &GUID_DOCK_INTERFACE || RtlCompareMemory(SecurityContext, &GUID_DOCK_INTERFACE, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v12 = 48;
    v19 = 0;
    if ( Size <= 0x30u )
      v12 = Size;
    Src[0] = v12;
    Src[1] = 1;
    v20 = Object;
    v21 = ACPIDockIntfReference;
    v22 = ACPIDockIntfDereference;
    v23 = ACPIDockIntfSetMode;
    v24 = ACPIDockIntfUpdateDeparture;
    ACPIDockIntfReference(Object);
    memmove(CurrentStackLocation->Parameters.SetFile.FileObject, Src, v12);
    Status = 0;
    Irp->IoStatus.Status = 0;
  }
  IofCompleteRequest(Irp, 0);
  if ( v10 )
    v8 = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v13, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x17u,
      (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
      (char)Irp,
      (__int64)IrpText,
      Status,
      v8,
      v15,
      v16);
  }
  return Status;
}
