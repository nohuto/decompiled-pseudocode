/*
 * XREFs of DpiFdoHandleRemoveDevice @ 0x1C0396F80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiCheckSpbResourceLeakage @ 0x1C0065810 (DpiCheckSpbResourceLeakage.c)
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C039868C (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoResetFdo @ 0x1C0398754 (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C03A2624 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C03A4380 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C03A48CC (DpiDxgkDdiRemoveDevice.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C03A4D90 (DpiPdoDestroyPendingPdoObjects.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D1DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 */

__int64 __fastcall DpiFdoHandleRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rbx
  __int64 v5; // r14
  int v6; // eax
  _QWORD *v7; // rcx
  PVOID *v8; // rax
  __int64 v9; // rcx
  void *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  void *v13; // rcx
  int v14; // eax
  void (__fastcall *v15)(_QWORD); // rax
  void (__fastcall *v16)(_QWORD); // rax
  void (__fastcall *v17)(_QWORD); // rax
  void (__fastcall *v18)(_QWORD); // rax
  unsigned int v19; // ebp
  __int64 v20; // r8
  PVOID v21; // rsi
  struct SYSMM_ADAPTER *v22; // rcx

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C013B748 == DeviceObject )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    qword_1C013B748 = 0LL;
  }
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    if ( (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1
      && (unsigned int)(*((_DWORD *)DeviceExtension + 60) - 1) <= 1 )
    {
      DpiFdoHandleStopDevice(DeviceObject, Irp);
    }
    if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
      DpiPdoDestroyPendingPdoObjects(DeviceObject);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, 0x20u);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiFdoRemoveChildDescriptors(DeviceObject);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v6;
  *((_DWORD *)DeviceExtension + 59) = 7;
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C013B740 == DeviceObject )
    qword_1C013B740 = 0LL;
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
  v7 = *(_QWORD **)DeviceExtension;
  if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
    || (v8 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v8 != DeviceExtension) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  v7[1] = v8;
  --*(_DWORD *)(v5 + 128);
  v9 = *((_QWORD *)DeviceExtension + 21);
  if ( *(_DWORD *)(v9 + 104) == 1 )
  {
    ExDeleteResourceLite((PERESOURCE)v9);
    v10 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1 )
  {
    v11 = (_DWORD *)*((_QWORD *)DeviceExtension + 182);
    if ( v11[2] == 1 && v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)DeviceExtension + 182) = 0LL;
    }
    v12 = (_DWORD *)*((_QWORD *)DeviceExtension + 183);
    if ( v12[2] == 1 && v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)DeviceExtension + 183) = 0LL;
    }
    if ( *((_DWORD *)DeviceExtension + 126) )
      DpiLdaUnLinkDeviceFromChain(DeviceObject);
    v13 = (void *)*((_QWORD *)DeviceExtension + 139);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)DeviceExtension + 139) = 0LL;
    }
    DpiCheckSpbResourceLeakage((__int64)DeviceExtension);
  }
  KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    v14 = *((_DWORD *)DeviceExtension + 5);
    if ( v14 == 2 )
    {
      DpiFdoResetFdo(DeviceObject);
    }
    else if ( v14 != 3 )
    {
      goto LABEL_49;
    }
    if ( DeviceExtension[1158] == 1 )
      DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
    v15 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 73);
    if ( v15 )
    {
      v15(*((_QWORD *)DeviceExtension + 71));
      memset(DeviceExtension + 560, 0, 0x40uLL);
    }
    v16 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 81);
    if ( v16 )
    {
      v16(*((_QWORD *)DeviceExtension + 79));
      *((_OWORD *)DeviceExtension + 39) = 0LL;
      *((_OWORD *)DeviceExtension + 40) = 0LL;
      *((_OWORD *)DeviceExtension + 41) = 0LL;
    }
    v17 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 87);
    if ( v17 )
    {
      v17(*((_QWORD *)DeviceExtension + 85));
      memset(DeviceExtension + 672, 0, 0xB8uLL);
    }
    v18 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 110);
    if ( v18 )
    {
      v18(*((_QWORD *)DeviceExtension + 108));
      memset(DeviceExtension + 856, 0, 0x58uLL);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 32);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 33);
  }
LABEL_49:
  Irp->IoStatus.Status = 0;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v19 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  DpiDxgkDdiRemoveDevice(v5, *((_QWORD *)DeviceExtension + 6), v20);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v21 = DeviceObject->DeviceExtension;
    v22 = (struct SYSMM_ADAPTER *)*((_QWORD *)v21 + 711);
    if ( v22 )
    {
      SysMmDestroyAdapter(v22);
      *((_QWORD *)v21 + 711) = 0LL;
    }
  }
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 20));
  IoDeleteDevice(DeviceObject);
  return v19;
}
