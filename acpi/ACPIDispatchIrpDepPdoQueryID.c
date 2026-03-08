/*
 * XREFs of ACPIDispatchIrpDepPdoQueryID @ 0x1C0017830
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C000B64C (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibInitializeArbiter @ 0x1C000B688 (AcpiArblibInitializeArbiter.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C000E1CC (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001EABC (ACPIDevicePowerFlushQueue.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C00345C4 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     AMLIIsNamedChildPresent @ 0x1C00487BC (AMLIIsNamedChildPresent.c)
 *     ACPIBuildFlushQueue @ 0x1C007D42C (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDispatchIrpDepPdoQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  KIRQL v7; // r12
  __int64 v8; // rcx
  _UNKNOWN **v9; // rax
  char *v10; // rax
  unsigned int *v11; // rsi
  __int64 v12; // rbx
  int v13; // r14d
  _BYTE **v14; // rdi
  const char *v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger(DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  ACPIBuildFlushQueue(DeviceExtension, v6);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !_bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) )
  {
LABEL_4:
    v8 = *(_QWORD *)(DeviceExtension + 8);
    v9 = &AcpiBusFilterIrpDispatch;
    if ( (v8 & 0x40) == 0 )
      v9 = &AcpiPdoIrpDispatch;
    *(_QWORD *)(DeviceExtension + 24) = v9;
    if ( (v8 & 0x1000000000LL) != 0 )
    {
      v10 = (char *)&AcpiProcessorIrpDispatch;
    }
    else if ( (v8 & 0x8000000) != 0 )
    {
      v10 = (char *)&AcpiThermalZoneIrpDispatch;
    }
    else if ( _bittest64((const signed __int64 *)(DeviceExtension + 1008), 0x28u) )
    {
      v10 = (char *)&AcpiPepIrpDispatch;
    }
    else
    {
      if ( (v8 & 0x200000000000LL) == 0
        || !*(_QWORD *)(DeviceExtension + 608)
        || (v16 = AcpiInternalDeviceTable, v17 = 0, !AcpiInternalDeviceTable) )
      {
LABEL_29:
        if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000040000LL) == 0x8000000040000LL )
          FixedButtonDeviceObject = a1;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
        AcpiEvaluateBiosMethodsOnPciRootBus(DeviceExtension);
        return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 24) + 24LL)
                                                             + 152LL))(
                 a1,
                 a2);
      }
      v18 = 0LL;
      while ( !strstr(*(const char **)(DeviceExtension + 608), v16) )
      {
        v18 = ++v17;
        v16 = (&AcpiInternalDeviceTable)[2 * v17];
        if ( !v16 )
          goto LABEL_29;
      }
      v10 = (&AcpiInternalDeviceTable)[2 * v18 + 1];
    }
    *(_QWORD *)(DeviceExtension + 24) = v10;
    goto LABEL_29;
  }
  if ( !(unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(DeviceExtension + 760), 1397900127LL) )
  {
    *(_BYTE *)(DeviceExtension + 184) = 0;
    goto LABEL_4;
  }
  *(_BYTE *)(DeviceExtension + 184) = 1;
  v11 = (unsigned int *)&AcpiArbiterResourceTypes;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = AcpiArblibInitializeArbiter(DeviceExtension, *v11, (_QWORD *)(DeviceExtension + 192 + 8 * v12));
    if ( v13 < 0 )
      break;
    v12 = (unsigned int)(v12 + 1);
    ++v11;
    if ( (unsigned int)v12 >= 3 )
      goto LABEL_4;
  }
  if ( (_DWORD)v12 )
  {
    v14 = (_BYTE **)(DeviceExtension + 8 * v12 + 192);
    do
    {
      AcpiArblibFreeArbiterInstance(*--v14);
      LODWORD(v12) = v12 - 1;
    }
    while ( (_DWORD)v12 );
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return (unsigned int)v13;
}
