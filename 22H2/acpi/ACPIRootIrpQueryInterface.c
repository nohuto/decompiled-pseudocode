/*
 * XREFs of ACPIRootIrpQueryInterface @ 0x1C0098F50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001E60 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002DA4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     AcpiPccEjectInterface @ 0x1C0011A0C (AcpiPccEjectInterface.c)
 *     AcpiIrqLibEjectArbiterInterface @ 0x1C009885C (AcpiIrqLibEjectArbiterInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1C00988E4 (IrqTranslatorEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C00993E0 (ACPIEjectPnpLocationInterface.c)
 */

__int64 __fastcall ACPIRootIrpQueryInterface(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v5; // r15
  __int64 DeviceExtension; // rax
  __int64 v7; // rcx
  unsigned __int8 MinorFunction; // r12
  unsigned int EaLength; // ebp
  __int64 v10; // rsi
  GUID *SecurityContext; // rbx
  GUID *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  char *IrpText; // rax
  const char *v16; // r8
  const char *v17; // r10
  char v18; // r11
  unsigned int Status; // ebx
  int v21; // eax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  MinorFunction = CurrentStackLocation->MinorFunction;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v10 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v14 = AcpiIrqLibEjectArbiterInterface(v7, (__int64)Irp);
    goto LABEL_10;
  }
  v12 = &GUID_TRANSLATOR_INTERFACE_STANDARD;
  if ( (SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v14 = IrqTranslatorEjectInterface(*(_QWORD *)(RootDeviceExtension + 744), (__int64)v12, (__int64)Irp);
    goto LABEL_10;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v21 = AcpiPccEjectInterface(BugCheckParameter3, (__int64)Irp);
    Irp->IoStatus.Status = v21;
    v13 = v21 + 0x80000000;
    if ( (int)v13 >= 0 && v21 != -1073741637 )
      v5 = 0;
  }
  else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
         || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v14 = ACPIEjectPnpLocationInterface(BugCheckParameter3, Irp);
LABEL_10:
    Irp->IoStatus.Status = v14;
  }
  if ( v10 )
  {
    v13 = 0x200000000000LL;
    if ( (*(_QWORD *)(v10 + 8) & 0x200000000000LL) != 0 )
      v13 = 0x400000000000LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v13, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_a909ee2b802d35766e487243411108b1_Traceguids,
      (char)Irp,
      IrpText,
      Irp->IoStatus.Status,
      v18,
      v16,
      v17);
  }
  if ( v5 )
  {
    return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    Status = Irp->IoStatus.Status;
    IofCompleteRequest(Irp, 0);
  }
  return Status;
}
