__int64 __fastcall ACPIBusIrpQueryInterface(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // ebx
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rdi
  unsigned int EaLength; // r13d
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // ebx
  const void *v12; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  struct _DEVICE_OBJECT *v15; // rcx
  unsigned int Size; // ebx
  _QWORD *QuadPart; // rdi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = -1073741637;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v9 = DeviceExtension;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, Size);
    if ( Size > 0x10 )
      QuadPart[1] = a1;
    goto LABEL_80;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v11 = 88;
    if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x58u )
      v11 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v12 = &ACPIInterfaceTable2;
LABEL_47:
    v13 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v13, v12, v11);
    if ( v11 > 0x10 )
      v13[1] = v9;
LABEL_80:
    Status = 0;
    goto LABEL_81;
  }
  if ( SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( ((EaLength - 1) & 0xFFFFFFF9) == 0 && EaLength != 5 )
    {
      if ( !(unsigned __int8)IsPciBus(a1) )
        goto LABEL_71;
      v10 = TranslateEjectInterface(a1, a2);
      goto LABEL_70;
    }
    if ( EaLength == 6 && (unsigned __int8)IsPciBus(a1) && (AcpiOverrideAttributes & 0x1000) == 0 )
    {
      v10 = AcpiEjectBusNumberTranslator(a1, a2);
      goto LABEL_70;
    }
  }
  else
  {
    if ( SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD
      || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) == 16
      || SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD2
      || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) == 16 )
    {
      if ( !(unsigned __int8)IsPciBus(a1) )
        goto LABEL_71;
      v10 = PciBusEjectInterface(a1, a2);
      goto LABEL_70;
    }
    if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
      || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      a2->IoStatus.Status = -1073741127;
      v14 = *(_QWORD *)(v9 + 792);
      if ( v14 )
      {
        v15 = *(struct _DEVICE_OBJECT **)(v14 + 768);
        if ( v15 )
        {
          if ( v14 == RootDeviceExtension )
            CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)a1;
          a2->IoStatus.Status = ACPIInternalSendSynchronousIrp(v15);
        }
      }
      goto LABEL_72;
    }
    if ( SecurityContext != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
        || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        if ( !_bittest64((const signed __int64 *)(v9 + 8), 0x25u) )
          goto LABEL_71;
        v10 = ACPIEjectPartitionUnitInterface(a1, a2);
      }
      else
      {
        if ( SecurityContext != &GUID_PCC_INTERFACE_STANDARD
          && RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) != 16 )
        {
          if ( SecurityContext != &GUID_D3COLD_SUPPORT_INTERFACE
            && RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) != 16 )
          {
            if ( SecurityContext == &GUID_THERMAL_COOLING_INTERFACE
              || RtlCompareMemory(SecurityContext, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
            {
              if ( !_bittest64((const signed __int64 *)(v9 + 1008), 0x21u) )
                goto LABEL_71;
              v10 = AcpiFanEjectInterface(a1, a2);
            }
            else if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
                   || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
            {
              v10 = ACPIEjectPnpLocationInterface(a1, a2);
            }
            else if ( SecurityContext == &GUID_DMA_CACHE_COHERENCY_INTERFACE
                   || RtlCompareMemory(SecurityContext, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 0x10uLL) == 16 )
            {
              v10 = ACPICacheCoherencyInterface(v9, CurrentStackLocation);
            }
            else if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
                   || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
            {
              v10 = AcpiDeviceResetInterface(a1, a2, 0LL, 0LL);
            }
            else if ( SecurityContext == &GUID_REENUMERATE_SELF_INTERFACE_STANDARD
                   || RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
            {
              v10 = ACPIBusReenumerateSelfInterface(v9, CurrentStackLocation);
            }
            else
            {
              if ( SecurityContext != &GUID_IOMMU_BUS_INTERFACE
                && RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) != 16 )
              {
                if ( SecurityContext != &GUID_SDEV_IDENTIFIER_INTERFACE
                  && RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) != 16 )
                {
                  goto LABEL_72;
                }
                v10 = AcpiSdevIdentifierInterface(a1, CurrentStackLocation);
                goto LABEL_70;
              }
              v10 = ACPIBusIommuBusInterface(a1, a2);
            }
            goto LABEL_37;
          }
          v11 = 72;
          if ( CurrentStackLocation->Parameters.QueryInterface.Size <= 0x48u )
            v11 = CurrentStackLocation->Parameters.QueryInterface.Size;
          v12 = &D3Interface;
          goto LABEL_47;
        }
        v10 = AcpiPccEjectInterface(a1, a2);
      }
LABEL_37:
      a2->IoStatus.Status = v10;
LABEL_70:
      Status = v10;
      goto LABEL_71;
    }
    if ( _bittest64((const signed __int64 *)(v9 + 8), 0x25u) && *(_BYTE *)(v9 + 184) )
    {
      v10 = AcpiArblibEjectInterface(a1, a2);
      goto LABEL_37;
    }
  }
LABEL_71:
  if ( Status != -1073741637 )
  {
LABEL_81:
    a2->IoStatus.Status = Status;
    goto LABEL_82;
  }
LABEL_72:
  Status = a2->IoStatus.Status;
LABEL_82:
  IofCompleteRequest(a2, 0);
  return Status;
}
