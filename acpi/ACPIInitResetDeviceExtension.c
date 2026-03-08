/*
 * XREFs of ACPIInitResetDeviceExtension @ 0x1C002D7B0
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0016C30 (ACPIBusIrpRemoveDevice.c)
 *     ACPIDispatchIrpDepRemoveDevice @ 0x1C0017A90 (ACPIDispatchIrpDepRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C0028500 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002CC88 (ACPIInitDeleteChildDeviceList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C000B64C (AcpiArblibFreeArbiterInstance.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C0010E04 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C002D060 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x1C002E874 (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C003C580 (PnpiCleanupForceActiveBothInterrupts.c)
 */

void __fastcall ACPIInitResetDeviceExtension(ULONG_PTR BugCheckParameter4)
{
  struct _DEVICE_OBJECT *v2; // r12
  KIRQL v3; // r13
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // r14
  void *v7; // rsi
  void *v8; // rdi
  struct _DEVICE_OBJECT *v9; // rbp
  __int64 v10; // r15
  unsigned __int8 v11; // cf
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int128 *v14; // rbx
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  v15 = 0LL;
  v16 = 0LL;
  v2 = 0LL;
  ACPIBuildProcessNotifyPepDeleteDevice(BugCheckParameter4, 0);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v4 = *(_QWORD *)(BugCheckParameter4 + 8);
  if ( (v4 & 0x40) != 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v5 = *(void **)(BugCheckParameter4 + 776);
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    else
    {
      v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 776);
    }
  }
  PnpiCleanupForceActiveBothInterrupts(BugCheckParameter4);
  ACPIInternalInterruptPolarityCacheCleanup(BugCheckParameter4);
  v6 = *(void **)(BugCheckParameter4 + 688);
  if ( v6 )
    *(_QWORD *)(BugCheckParameter4 + 688) = 0LL;
  v7 = *(void **)(BugCheckParameter4 + 672);
  if ( v7 )
    *(_QWORD *)(BugCheckParameter4 + 672) = 0LL;
  v8 = *(void **)(BugCheckParameter4 + 680);
  if ( v8 )
    *(_QWORD *)(BugCheckParameter4 + 680) = 0LL;
  v9 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 768);
  v10 = 3LL;
  if ( !v9 )
    goto LABEL_19;
  v9->DeviceExtension = 0LL;
  v11 = _bittest64((const signed __int64 *)(BugCheckParameter4 + 8), 0x25u);
  *(_QWORD *)(BugCheckParameter4 + 768) = 0LL;
  if ( v11 && *(_BYTE *)(BugCheckParameter4 + 184) )
  {
    v12 = 3LL;
    v13 = (_QWORD *)(BugCheckParameter4 + 192);
    do
    {
      *(_QWORD *)((char *)v13 + (_QWORD)&v15 - BugCheckParameter4 - 192) = *v13;
      *v13++ = 0LL;
      --v12;
    }
    while ( v12 );
  }
  if ( ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4) )
  {
    v7 = 0LL;
    v8 = 0LL;
    v6 = 0LL;
  }
  else
  {
LABEL_19:
    *(_QWORD *)(BugCheckParameter4 + 776) = 0LL;
    *(_QWORD *)(BugCheckParameter4 + 784) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 1008), 0xFFFFFFFFFFFFFFBFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 1008), 0xFFFFFFFFDFFFFFFFuLL);
    if ( (*(_BYTE *)(BugCheckParameter4 + 8) & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 8), 0xFFFFFFFFFFFFFC00uLL);
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 8), 8uLL);
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 8), 4uLL);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  v14 = &v15;
  do
  {
    if ( *(_QWORD *)v14 )
      AcpiArblibFreeArbiterInstance(*(_BYTE **)v14);
    v14 = (__int128 *)((char *)v14 + 8);
    --v10;
  }
  while ( v10 );
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v2 )
    IoDetachDevice(v2);
  if ( v9 )
    IoDeleteDevice(v9);
}
