/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1C0099170
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001E60 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C009872C (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C0098E4C (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIFilterIrpQueryIommuInterface @ 0x1C00994CC (ACPIFilterIrpQueryIommuInterface.c)
 *     AcpiSdevIdentifierInterface @ 0x1C00B5608 (AcpiSdevIdentifierInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v6; // r14
  GUID *SecurityContext; // rbx
  __int64 v8; // r9
  unsigned int v10; // ebx
  _QWORD *v11; // rbp
  unsigned int v12; // ebx
  _QWORD *v13; // rbp
  int v14; // ebx
  unsigned int Size; // ebx
  _QWORD *QuadPart; // rbp

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, Size);
    if ( Size > 0x10 )
      QuadPart[1] = DeviceObject;
    goto LABEL_27;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v12 = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      v12 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v13 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v13, &ACPIInterfaceTable2, v12);
    if ( v12 > 0x10 )
      v13[1] = v6;
LABEL_27:
    v14 = 0;
LABEL_28:
    Irp->IoStatus.Status = v14;
    if ( v14 < 0 )
    {
      IofCompleteRequest(Irp, 0);
      return (unsigned int)v14;
    }
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v10 = 72;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
      v10 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v11 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v11, &D3Interface, v10);
    if ( v10 > 0x10 )
      v11[1] = v6;
    Irp->IoStatus.Status = 0;
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    return ACPIFilterIrpQueryPnpLocationInterface((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    return ACPIIrpSetPagableCompletionRoutineAndForward(
             DeviceObject,
             Irp,
             (__int64)AcpiDeviceResetInterface,
             v8,
             1,
             1,
             1);
  }
  if ( SecurityContext == &GUID_SDEV_IDENTIFIER_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) == 16 )
  {
    v14 = AcpiSdevIdentifierInterface(DeviceObject, CurrentStackLocation);
    if ( v14 == -1073741637 )
      return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
    goto LABEL_28;
  }
  if ( SecurityContext != &GUID_IOMMU_BUS_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) != 16 )
  {
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  return ACPIFilterIrpQueryIommuInterface(DeviceObject, Irp);
}
