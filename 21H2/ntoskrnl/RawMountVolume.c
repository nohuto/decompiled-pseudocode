/*
 * XREFs of RawMountVolume @ 0x14071C1B0
 * Callers:
 *     RawFileSystemControl @ 0x14071B378 (RawFileSystemControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     RawCleanupVcb @ 0x14071A630 (RawCleanupVcb.c)
 *     RawScanDeletedList @ 0x14071B3D8 (RawScanDeletedList.c)
 *     IoCreateDevice @ 0x14071B4E0 (IoCreateDevice.c)
 *     RawInitializeVcb @ 0x14071BBE0 (RawInitializeVcb.c)
 *     IoCreateStreamFileObjectLite @ 0x14071BEC0 (IoCreateStreamFileObjectLite.c)
 *     FsRtlNotifyVolumeEventEx @ 0x14071C400 (FsRtlNotifyVolumeEventEx.c)
 */

NTSTATUS __fastcall RawMountVolume(__int64 *a1)
{
  __int64 v2; // r14
  NTSTATUS result; // eax
  PDEVICE_OBJECT v4; // rbx
  ULONG v5; // eax
  int v6; // esi
  struct _FILE_OBJECT *StreamFileObjectLite; // r14
  KDEVICE_QUEUE *p_DeviceQueue; // rbx
  __int64 v9; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-78h] BYREF
  struct _FILE_OBJECT *v11; // [rsp+48h] [rbp-70h]
  _BYTE Event[44]; // [rsp+50h] [rbp-68h] BYREF
  int v13; // [rsp+7Ch] [rbp-3Ch]
  int v14; // [rsp+80h] [rbp-38h]
  int v15; // [rsp+84h] [rbp-34h]
  wchar_t v16; // [rsp+88h] [rbp-30h]
  int v17; // [rsp+8Ah] [rbp-2Eh]

  DeviceObject = 0LL;
  RawScanDeletedList();
  v2 = a1[2];
  if ( *(_WORD *)(v2 + 304) > 0x1000u )
    return -1073741489;
  result = IoCreateDevice(*(PDRIVER_OBJECT *)(a1[5] + 8), 0x150u, 0LL, 8u, 0, 0, &DeviceObject);
  if ( result >= 0 )
  {
    v4 = DeviceObject;
    v5 = *(_DWORD *)(v2 + 152);
    if ( v5 > DeviceObject->AlignmentRequirement )
      DeviceObject->AlignmentRequirement = v5;
    v4->SectorSize = *(_WORD *)(v2 + 304);
    v4->Flags |= 0x10u;
    v6 = RawInitializeVcb(&v4[1].Type, a1[2], a1[1]);
    if ( v6 < 0 )
    {
      RawCleanupVcb((PFSRTL_ADVANCED_FCB_HEADER)&v4[1]);
      IoDeleteDevice(v4);
    }
    else
    {
      *(_QWORD *)(v4[1].DeviceQueue.Lock + 8) = v4;
      *(_DWORD *)(v4[1].DeviceQueue.Lock + 24) = -1;
      *(_WORD *)(v4[1].DeviceQueue.Lock + 6) = 0;
      v4->Flags &= ~0x80u;
      v4->StackSize = *(_BYTE *)(v2 + 76) + 1;
      v11 = 0LL;
      memset(&Event[4], 0, 20);
      v17 = 0;
      StreamFileObjectLite = IoCreateStreamFileObjectLite(0LL, v4);
      v11 = StreamFileObjectLite;
      HIDWORD(v4[1].Queue.Wcb.DeviceRoutine) += 2;
      LODWORD(v4[1].Queue.Wcb.DeviceContext) += 2;
      *(_DWORD *)Event = 4063233;
      *(_QWORD *)&Event[24] = 0LL;
      *(_DWORD *)&Event[32] = -1;
      *(_QWORD *)&Event[36] = 1LL;
      v13 = 6;
      v14 = 16;
      v15 = *(_DWORD *)L"RAW";
      v16 = aRaw[2];
      FsRtlNotifyVolumeEventEx(StreamFileObjectLite, 6u, (PTARGET_DEVICE_CUSTOM_NOTIFICATION)Event);
      HalPutDmaAdapter((PADAPTER_OBJECT)StreamFileObjectLite);
      HIDWORD(v4[1].Queue.Wcb.DeviceRoutine) -= 2;
      LODWORD(v4[1].Queue.Wcb.DeviceContext) -= 2;
      ExAcquireFastMutex(&RawGlobalLock);
      p_DeviceQueue = &v4[1].DeviceQueue;
      v9 = RawMountedQueue;
      if ( *(__int64 **)(RawMountedQueue + 8) != &RawMountedQueue )
        __fastfail(3u);
      *(_QWORD *)&p_DeviceQueue->Type = RawMountedQueue;
      p_DeviceQueue->DeviceListHead.Flink = (struct _LIST_ENTRY *)&RawMountedQueue;
      *(_QWORD *)(v9 + 8) = p_DeviceQueue;
      RawMountedQueue = (__int64)p_DeviceQueue;
      KeReleaseGuardedMutex(&RawGlobalLock);
    }
    return v6;
  }
  return result;
}
