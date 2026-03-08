/*
 * XREFs of ACPIRootIrpQueryInterface @ 0x1C00944D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDispatchForwardIrp @ 0x1C0001770 (ACPIDispatchForwardIrp.c)
 *     AcpiPccEjectInterface @ 0x1C0033D34 (AcpiPccEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C0087570 (ACPIEjectPnpLocationInterface.c)
 *     AcpiIrqLibEjectArbiterInterface @ 0x1C0098D24 (AcpiIrqLibEjectArbiterInterface.c)
 *     IrqTranslatorEjectInterface @ 0x1C009A750 (IrqTranslatorEjectInterface.c)
 */

__int64 __fastcall ACPIRootIrpQueryInterface(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  char v5; // r15
  __int64 v6; // rcx
  unsigned __int8 MinorFunction; // r12
  unsigned int EaLength; // ebp
  GUID *SecurityContext; // rbx
  int v10; // eax
  __int64 v11; // rcx
  GUID *v12; // rdx
  int v13; // eax
  char *IrpText; // rax
  const char *v15; // r8
  const char *v16; // r10
  char v17; // r11
  unsigned int Status; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 1;
  ACPIInternalGetDeviceExtension(BugCheckParameter3);
  MinorFunction = CurrentStackLocation->MinorFunction;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v10 = AcpiIrqLibEjectArbiterInterface(v6, Irp);
LABEL_9:
    Irp->IoStatus.Status = v10;
    goto LABEL_18;
  }
  v12 = &GUID_TRANSLATOR_INTERFACE_STANDARD;
  if ( (SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
     || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16)
    && EaLength == 2 )
  {
    v10 = IrqTranslatorEjectInterface(*(_QWORD *)(RootDeviceExtension + 784), v12, Irp);
    goto LABEL_9;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    v13 = AcpiPccEjectInterface(BugCheckParameter3, (__int64)Irp);
    Irp->IoStatus.Status = v13;
    v11 = v13 + 0x80000000;
    if ( (int)v11 >= 0 && v13 != -1073741637 )
      v5 = 0;
  }
  else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
         || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v10 = ACPIEjectPnpLocationInterface(BugCheckParameter3, (__int64)Irp);
    goto LABEL_9;
  }
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v11, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x14u,
      (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
      (char)Irp,
      (__int64)IrpText,
      Irp->IoStatus.Status,
      v17,
      v15,
      v16);
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
