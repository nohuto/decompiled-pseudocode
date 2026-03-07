LONG __fastcall ACPIThermalStopZoneWorker(__int64 a1)
{
  __int64 v1; // rbx
  PIRP *v3; // rsi
  void *v4; // rcx
  IRP *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  KIRQL v10; // al
  __int64 v11; // r9
  _QWORD *v12; // r8

  v1 = *(_QWORD *)(a1 + 200);
  v3 = (PIRP *)(v1 + 208);
  if ( *(_BYTE *)(v1 + 274) )
    IoCancelIrp(*v3);
  ACPIThermalCompletePendingIrps(a1);
  v4 = *(void **)(v1 + 240);
  if ( v4 )
  {
    IoUnregisterPlugPlayNotificationEx(v4);
    IoFreeIrp(*v3);
    ObfDereferenceObject(*(PVOID *)(v1 + 216));
    *(_QWORD *)(v1 + 240) = 0LL;
  }
  *v3 = 0LL;
  *(_QWORD *)(v1 + 216) = 0LL;
  v5 = *(IRP **)(v1 + 192);
  if ( v5 )
  {
    IoFreeIrp(v5);
    *(_QWORD *)(v1 + 192) = 0LL;
  }
  v6 = *(void **)(v1 + 200);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *(_QWORD *)(v1 + 200) = 0LL;
  }
  v7 = *(_QWORD *)(v1 + 112);
  if ( v7 )
  {
    AMLIDereferenceHandleEx(v7);
    *(_QWORD *)(v1 + 112) = 0LL;
  }
  v8 = *(_QWORD *)(v1 + 120);
  if ( v8 )
  {
    AMLIDereferenceHandleEx(v8);
    *(_QWORD *)(v1 + 120) = 0LL;
  }
  v9 = *(void **)(v1 + 312);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_OWORD *)(v1 + 304) = 0LL;
  }
  AcpiThermalDestroyContraints(a1);
  if ( (*(_DWORD *)(a1 + 192) & 0x1000) != 0 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    v11 = *(_QWORD *)(a1 + 208);
    if ( *(_QWORD *)(v11 + 8) != a1 + 208 || (v12 = *(_QWORD **)(a1 + 216), *v12 != a1 + 208) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    KeReleaseSpinLock(&AcpiThermalConstraintLock, v10);
  }
  ACPIUnregisterForDeviceNotifications(*(_QWORD *)(a1 + 768));
  if ( *(_QWORD *)(a1 + 224) )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 768), 2u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x54706341u);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  ACPIThermalLoopEx(a1, 23839, 0);
  return KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
}
