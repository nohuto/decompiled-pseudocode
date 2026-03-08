/*
 * XREFs of ACPIFilterIrpSetPower @ 0x1C0028B10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C0002AF0 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIBuildRegRequest @ 0x1C00133EC (ACPIBuildRegRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C001DBF8 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C001E474 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalCheckPowerReferences @ 0x1C002E494 (ACPIInternalCheckPowerReferences.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIFilterIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // r14
  __int64 v11; // rsi
  KIRQL v12; // al
  _QWORD *v13; // r12
  _QWORD *v14; // r15
  _QWORD *v15; // rcx
  ULONG_PTR v16; // rsi
  KIRQL v17; // al
  KIRQL v18; // r13
  void *v19; // r12
  __int64 (__fastcall *v20)(); // r8
  _IO_STACK_LOCATION *v21; // rax
  _IO_STACK_LOCATION *v22; // rax
  _QWORD *v25; // [rsp+68h] [rbp+10h]

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0LL;
  CurrentStackLocation->Control |= 1u;
  if ( !CurrentStackLocation->Parameters.Create.Options )
  {
    if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
    {
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 728), 1u);
      ACPIDeviceIrpWarmEjectRequest(
        (_QWORD *)DeviceExtension,
        (__int64)a2,
        (void (__fastcall *)(__int64, __int64, __int64))ACPIDeviceIrpForwardRequest,
        0);
    }
    else
    {
      ACPIDispatchForwardPowerIrp(a1, a2);
    }
    return 259LL;
  }
  if ( !_bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u) )
    v7 = AMLIGetNamedChild(*(_QWORD *)(DeviceExtension + 760), 1195725407LL);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
  {
    if ( !v7 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
      v21 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v21[-1].MajorFunction = *(_OWORD *)&v21->MajorFunction;
      *(_OWORD *)&v21[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v21->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v21[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v21->Parameters.SetQuota + 6);
      v21[-1].FileObject = v21->FileObject;
      v21[-1].Control = 0;
      v22 = a2->Tail.Overlay.CurrentStackLocation;
      v22[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
      v22[-1].Context = ACPIDeviceIrpCompleteRequest;
      v22[-1].Control = -32;
      PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 776), a2);
      return 259LL;
    }
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
    ACPIBuildRegRequest(
      a1,
      (__int64)a2,
      (void (__fastcall *)(__int64, __int64, _QWORD))ACPIDeviceIrpDelayedDeviceOffRequest);
    goto LABEL_37;
  }
  *(_BYTE *)(v6 + 556) = 1;
  a2->IoStatus.Status = 0;
  _InterlockedAdd((volatile signed __int32 *)(v6 + 728), 1u);
  v8 = *(_QWORD **)(v6 + 416);
  while ( v8 )
  {
    v9 = v8[1];
    v8 = (_QWORD *)*v8;
    if ( (*(_DWORD *)(v9 + 16) & 0x810LL) == 0 )
      _InterlockedOr64((volatile signed __int64 *)(v9 + 16), 0x800uLL);
  }
  v10 = *(_QWORD **)(v6 + 416);
  while ( v10 )
  {
    v11 = v10[1];
    v10 = (_QWORD *)*v10;
    if ( (*(_BYTE *)(v11 + 16) & 0x10) == 0 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v13 = (_QWORD *)(v11 + 48);
      v14 = *(_QWORD **)(v11 + 48);
      v25 = (_QWORD *)(v11 + 48);
      if ( v14 != (_QWORD *)(v11 + 48) )
      {
        do
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
          v16 = *(v15 - 1);
          if ( *((_DWORD *)v15 - 5) == 1 )
          {
            KeReleaseSpinLock(&AcpiPowerLock, v12);
            v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
            v18 = v17;
            if ( !v16 || v16 == v6 || (unsigned int)(*(_DWORD *)(v16 + 368) - 2) > 1 || *(_BYTE *)(v16 + 556) )
            {
              KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
            }
            else
            {
              v19 = *(void **)(v16 + 784);
              if ( v19 )
              {
                ACPIInitReferenceDeviceExtension(v16);
                ObfReferenceObject(v19);
                KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
                if ( (unsigned __int8)ACPIInternalCheckPowerReferences(v16) == 1 )
                {
                  *(_BYTE *)(v16 + 556) = 1;
                  PoFxNotifySurprisePowerOn(v19);
                }
                ObfDereferenceObject(v19);
                ACPIInitDereferenceDeviceExtensionUnlocked(v16);
              }
              else
              {
                KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
              }
              v13 = v25;
            }
            v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          }
        }
        while ( v14 != v13 );
      }
      KeReleaseSpinLock(&AcpiPowerLock, v12);
    }
  }
  v20 = (__int64 (__fastcall *)())ACPIDeviceIrpDelayedDeviceOnRequest;
  if ( !v7 )
    v20 = (__int64 (__fastcall *)())ACPIDeviceIrpForwardRequest;
  ACPIDeviceIrpDeviceRequest(a1, (__int64)a2, v20);
  if ( v7 )
LABEL_37:
    AMLIDereferenceHandleEx(v7);
  return 259LL;
}
