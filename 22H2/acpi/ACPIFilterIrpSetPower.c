/*
 * XREFs of ACPIFilterIrpSetPower @ 0x1C002D790
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C000CE50 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017F20 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017F40 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C002D984 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIBuildRegRequest @ 0x1C004C3DC (ACPIBuildRegRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0050D60 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIInternalCheckPowerReferences @ 0x1C0056C40 (ACPIInternalCheckPowerReferences.c)
 */

__int64 __fastcall ACPIFilterIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  ULONG_PTR v3; // rbp
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v6; // rbx
  __int64 *v7; // r14
  _QWORD *v8; // rdi
  __int64 (__fastcall *v9)(__int64, IRP *, int); // r8
  _IO_STACK_LOCATION *v11; // rax
  _IO_STACK_LOCATION *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rbp
  KIRQL v16; // al
  _QWORD *v17; // r12
  _QWORD *v18; // r15
  _QWORD *v19; // rcx
  ULONG_PTR v20; // rbp
  KIRQL v21; // al
  KIRQL v22; // r13
  void *v23; // r12
  _QWORD *v25; // [rsp+68h] [rbp+10h]

  v3 = a1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  v7 = 0LL;
  CurrentStackLocation->Control |= 1u;
  if ( CurrentStackLocation->Parameters.Create.Options )
  {
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000000000LL) == 0 )
      v7 = AMLIGetNamedChild(*(__int64 **)(DeviceExtension + 720), 1195725407);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    {
      *(_BYTE *)(v6 + 516) = 1;
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 688), 1u);
      v8 = *(_QWORD **)(v6 + 376);
      if ( v8 )
      {
        do
        {
          v13 = v8[1];
          v8 = (_QWORD *)*v8;
          if ( (*(_DWORD *)(v13 + 16) & 0x810LL) == 0 )
            _InterlockedOr64((volatile signed __int64 *)(v13 + 16), 0x800uLL);
        }
        while ( v8 );
        v14 = *(_QWORD **)(v6 + 376);
        if ( v14 )
        {
          do
          {
            v15 = v14[1];
            v14 = (_QWORD *)*v14;
            if ( (*(_BYTE *)(v15 + 16) & 0x10) == 0 )
            {
              v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
              v17 = (_QWORD *)(v15 + 48);
              v18 = *(_QWORD **)(v15 + 48);
              v25 = (_QWORD *)(v15 + 48);
              if ( v18 != (_QWORD *)(v15 + 48) )
              {
                do
                {
                  v19 = v18;
                  v18 = (_QWORD *)*v18;
                  v20 = *(v19 - 1);
                  if ( *((_DWORD *)v19 - 5) == 1 )
                  {
                    KeReleaseSpinLock(&AcpiPowerLock, v16);
                    v21 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
                    v22 = v21;
                    if ( !v20 || v20 == v6 || (unsigned int)(*(_DWORD *)(v20 + 328) - 2) > 1 || *(_BYTE *)(v20 + 516) )
                    {
                      KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
                    }
                    else
                    {
                      v23 = *(void **)(v20 + 744);
                      if ( v23 )
                      {
                        ACPIInitReferenceDeviceExtension(v20);
                        ObfReferenceObject(v23);
                        KeReleaseSpinLock(&AcpiDeviceTreeLock, v22);
                        if ( (unsigned __int8)ACPIInternalCheckPowerReferences(v20) == 1 )
                        {
                          *(_BYTE *)(v20 + 516) = 1;
                          PoFxNotifySurprisePowerOn(v23);
                        }
                        ObfDereferenceObject(v23);
                        ACPIInitDereferenceDeviceExtensionUnlocked(v20);
                      }
                      else
                      {
                        KeReleaseSpinLock(&AcpiDeviceTreeLock, v21);
                      }
                      v17 = v25;
                    }
                    v16 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
                  }
                }
                while ( v18 != v17 );
              }
              KeReleaseSpinLock(&AcpiPowerLock, v16);
            }
          }
          while ( v14 );
          v3 = a1;
        }
      }
      v9 = (__int64 (__fastcall *)(__int64, IRP *, int))&ACPIDeviceIrpDelayedDeviceOnRequest;
      if ( !v7 )
        v9 = ACPIDeviceIrpForwardRequest;
      ACPIDeviceIrpDeviceRequest(v3, a2, v9);
    }
    else if ( v7 )
    {
      a2->IoStatus.Status = 0;
      _InterlockedAdd((volatile signed __int32 *)(v6 + 688), 1u);
      ACPIBuildRegRequest(v3, a2, &ACPIDeviceIrpDelayedDeviceOffRequest);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 688), 1u);
      v11 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
      *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v11[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v11->Parameters.SetQuota + 6);
      v11[-1].FileObject = v11->FileObject;
      v11[-1].Control = 0;
      v12 = a2->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIDeviceIrpDeviceFilterRequest;
      v12[-1].Context = ACPIDeviceIrpCompleteRequest;
      v12[-1].Control = -32;
      PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 736), a2);
    }
    if ( v7 )
      AMLIDereferenceHandleEx((__int64)v7);
  }
  else if ( CurrentStackLocation->Parameters.Create.EaLength == 7 )
  {
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 688), 1u);
    ACPIDeviceIrpWarmEjectRequest(DeviceExtension, a2, ACPIDeviceIrpForwardRequest, 0LL);
  }
  else
  {
    ACPIDispatchForwardPowerIrp(v3, a2);
  }
  return 259LL;
}
