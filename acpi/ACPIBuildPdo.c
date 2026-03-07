NTSTATUS __fastcall ACPIBuildPdo(struct _DRIVER_OBJECT *a1, __int64 a2, struct _DEVICE_OBJECT *a3, char a4)
{
  __int64 v4; // r14
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  NTSTATUS result; // eax
  int v10; // r14d
  KIRQL v11; // r14
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rcx
  char *v14; // rax
  unsigned int v15; // edi
  unsigned int *v16; // r15
  _BYTE **v17; // rbx
  const char *v18; // rax
  unsigned int v19; // esi
  __int64 v20; // rdi
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp+38h] BYREF

  v4 = *(_QWORD *)(a2 + 760);
  DeviceObject = 0LL;
  AttachedDeviceReference = 0LL;
  result = IoCreateDevice(a1, 0, 0LL, 0x32u, 0x180u, 0, &DeviceObject);
  if ( result < 0 )
    return result;
  if ( a4 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x100000) != 0 )
    {
      a4 = 0;
    }
    else
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(a3);
      if ( !AttachedDeviceReference )
      {
        v10 = -1073741810;
LABEL_22:
        IoDeleteDevice(DeviceObject);
        return v10;
      }
    }
  }
  if ( _bittest64((const signed __int64 *)(a2 + 8), 0x25u) )
  {
    if ( (unsigned __int8)AMLIIsNamedChildPresent(v4, 1397900127LL) )
    {
      v15 = 0;
      *(_BYTE *)(a2 + 184) = 1;
      v16 = (unsigned int *)&AcpiArbiterResourceTypes;
      while ( 1 )
      {
        v10 = AcpiArblibInitializeArbiter(a2, *v16, (_QWORD *)(a2 + 192 + 8LL * v15));
        if ( v10 < 0 )
          break;
        ++v15;
        ++v16;
        if ( v15 >= 3 )
          goto LABEL_10;
      }
      if ( v15 )
      {
        v17 = (_BYTE **)(a2 + 8LL * v15 + 192);
        do
        {
          AcpiArblibFreeArbiterInstance(*--v17);
          --v15;
        }
        while ( v15 );
      }
      goto LABEL_22;
    }
    *(_BYTE *)(a2 + 184) = 0;
  }
LABEL_10:
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceObject->DeviceExtension = (void *)a2;
  v12 = DeviceObject;
  *(_QWORD *)(a2 + 768) = DeviceObject;
  *(_QWORD *)(a2 + 784) = v12;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 732));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x20uLL);
  *(_DWORD *)(a2 + 372) = *(_DWORD *)(a2 + 368);
  *(_QWORD *)(a2 + 8) |= 0x800uLL;
  *(_QWORD *)(a2 + 1008) |= 0x800uLL;
  *(_DWORD *)(a2 + 368) = 0;
  *(_QWORD *)(a2 + 24) = &AcpiPdoIrpDispatch;
  if ( a4 )
  {
    *(_QWORD *)(a2 + 776) = AttachedDeviceReference;
    _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40uLL);
    *(_QWORD *)(a2 + 24) = &AcpiBusFilterIrpDispatch;
    DeviceObject->StackSize = AttachedDeviceReference->StackSize + 1;
    DeviceObject->AlignmentRequirement = AttachedDeviceReference->AlignmentRequirement;
    if ( (AttachedDeviceReference->Flags & 0x2000) != 0 )
      DeviceObject->Flags |= 0x2000u;
  }
  v13 = *(_QWORD *)(a2 + 8);
  if ( (v13 & 0x1000000000LL) != 0 )
  {
    v14 = (char *)&AcpiProcessorIrpDispatch;
  }
  else if ( (v13 & 0x8000000) != 0 )
  {
    v14 = (char *)&AcpiThermalZoneIrpDispatch;
  }
  else if ( _bittest64((const signed __int64 *)(a2 + 1008), 0x28u) )
  {
    v14 = (char *)&AcpiPepIrpDispatch;
  }
  else
  {
    if ( (v13 & 0x200000000000LL) == 0 )
      goto LABEL_36;
    if ( !*(_QWORD *)(a2 + 608) )
      goto LABEL_36;
    v18 = AcpiInternalDeviceTable;
    v19 = 0;
    if ( !AcpiInternalDeviceTable )
      goto LABEL_36;
    v20 = 0LL;
    while ( !strstr(*(const char **)(a2 + 608), v18) )
    {
      v20 = ++v19;
      v18 = (&AcpiInternalDeviceTable)[2 * v19];
      if ( !v18 )
        goto LABEL_36;
    }
    v14 = (&AcpiInternalDeviceTable)[2 * v20 + 1];
  }
  *(_QWORD *)(a2 + 24) = v14;
LABEL_36:
  if ( (*(_QWORD *)(a2 + 8) & 0x8000000040000LL) == 0x8000000040000LL )
    FixedButtonDeviceObject = (__int64)DeviceObject;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
  ACPIAddInitializationDependencies(a2);
  if ( (*(_BYTE *)(a2 + 1008) & 0x40) != 0 )
    *(_QWORD *)(a2 + 24) = &AcpiDepPdoIrpDispatch;
  AcpiEvaluateBiosMethodsOnPciRootBus(a2);
  if ( !_bittest64((const signed __int64 *)(a2 + 8), 0x33u) && (int)ACPIIsDebuggingDevice(DeviceObject) >= 0 )
    DeviceObject->Flags |= 0x2000000u;
  DeviceObject->Flags &= ~0x80u;
  if ( _bittest64((const signed __int64 *)(a2 + 8), 0x34u) )
    DeviceObject->Flags |= 8u;
  return 0;
}
