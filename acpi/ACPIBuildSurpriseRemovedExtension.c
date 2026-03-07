__int64 __fastcall ACPIBuildSurpriseRemovedExtension(ULONG_PTR a1)
{
  __int64 CorrespondingDock; // rax
  __int64 i; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  KIRQL v6; // si
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+50h] [rbp-18h]
  int v20; // [rsp+54h] [rbp-14h]

  v20 = 0;
  v17 = 0LL;
  CorrespondingDock = ACPIDockFindCorrespondingDock(a1);
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 368) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v16[1] = 0LL;
  v16[0] = a1 + 800;
  v16[2] = &AcpiDeviceTreeLock;
  v18 = 816LL;
  v19 = 1;
  for ( i = ACPIExtListStartEnum(v16); ; i = ACPIExtListEnumNext(v16) )
  {
    LOBYTE(v4) = 1;
    v5 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(v16, v4) )
      break;
    ACPIBuildSurpriseRemovedExtension(v5);
  }
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v7 = *(_QWORD *)(a1 + 8) & 0x20LL;
  v8 = *(_QWORD *)(a1 + 8) & 0x40LL;
  if ( v8 || v7 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x8000000000100uLL);
    if ( v8 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x40uLL);
      *(_QWORD *)(a1 + 24) = AcpiSurpriseRemovedFilterIrpDispatch;
    }
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x20uLL);
      *(_QWORD *)(a1 + 24) = &AcpiSurpriseRemovedPdoIrpDispatch;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x80uLL);
  if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x2Bu) )
  {
    v9 = *(_QWORD *)(a1 + 792);
    if ( v9 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v9 + 8), 0x20000000000uLL);
      if ( *(_QWORD *)(a1 + 760) )
      {
        if ( ACPIDockIsDockDevice() )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v9 + 784), SingleBusRelations);
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 448);
  if ( v10 )
  {
    v11 = (_QWORD *)(v10 + 40);
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    *(_QWORD *)(a1 + 448) = 0LL;
  }
  ACPIInitRemoveDeviceExtension(a1);
  if ( *(_QWORD *)(a1 + 760) )
  {
    if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x2Bu) )
    {
      v14 = *(_QWORD *)(a1 + 784);
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 48) & 0x4000000) != 0 )
          ACPIInitDereferenceDeviceExtensionLocked(a1);
      }
    }
    *(_QWORD *)(**(_QWORD **)(a1 + 760) + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v6);
  return 0LL;
}
