/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1C0086160
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x1C0001770 (ACPIDispatchForwardIrp.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C007BF98 (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     ACPIFilterIrpQueryIommuInterface @ 0x1C00863F4 (ACPIFilterIrpQueryIommuInterface.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C008653C (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     AcpiSdevIdentifierInterface @ 0x1C0094D70 (AcpiSdevIdentifierInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v6; // r14
  GUID *SecurityContext; // rbx
  __int64 v8; // r9
  int v10; // ebx
  unsigned int v11; // ebx
  _QWORD *v12; // rbp
  unsigned int v13; // ebx
  _QWORD *v14; // rbp
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
    goto LABEL_33;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v13 = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      v13 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v14 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v14, &ACPIInterfaceTable2, v13);
    if ( v13 > 0x10 )
      v14[1] = v6;
LABEL_33:
    v10 = 0;
    goto LABEL_34;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v11 = 72;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
      v11 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v12 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v12, &D3Interface, v11);
    if ( v11 > 0x10 )
      v12[1] = v6;
    Irp->IoStatus.Status = 0;
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    return ACPIFilterIrpQueryPnpLocationInterface(DeviceObject, Irp);
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
  if ( SecurityContext != &GUID_SDEV_IDENTIFIER_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) != 16 )
  {
    if ( SecurityContext == &GUID_IOMMU_BUS_INTERFACE
      || RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) == 16 )
    {
      return ACPIFilterIrpQueryIommuInterface(DeviceObject, Irp);
    }
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  v10 = AcpiSdevIdentifierInterface(DeviceObject, CurrentStackLocation);
  if ( v10 == -1073741637 )
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
LABEL_34:
  Irp->IoStatus.Status = v10;
  if ( v10 >= 0 )
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v10;
}
