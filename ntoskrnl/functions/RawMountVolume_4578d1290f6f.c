NTSTATUS __fastcall RawMountVolume(_QWORD *a1)
{
  __int64 v2; // r15
  NTSTATUS result; // eax
  PDEVICE_OBJECT v4; // rbx
  ULONG v5; // eax
  int v6; // esi
  struct _FILE_OBJECT *StreamFileObjectLite; // r15
  LIST_ENTRY *p_DeviceListHead; // rbx
  __int64 v9; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-78h] BYREF
  struct _FILE_OBJECT *v11; // [rsp+48h] [rbp-70h]
  PDEVICE_OBJECT v12; // [rsp+50h] [rbp-68h]
  _BYTE Event[44]; // [rsp+58h] [rbp-60h] BYREF
  int v14; // [rsp+84h] [rbp-34h]
  int v15; // [rsp+88h] [rbp-30h]
  int v16; // [rsp+8Ch] [rbp-2Ch]
  wchar_t v17; // [rsp+90h] [rbp-28h]
  int v18; // [rsp+92h] [rbp-26h]

  DeviceObject = 0LL;
  RawScanDeletedList();
  v2 = a1[2];
  if ( *(_WORD *)(v2 + 304) > 0x1000u )
    return -1073741489;
  result = IoCreateDevice(*(PDRIVER_OBJECT *)(a1[5] + 8LL), 0x160u, 0LL, 8u, 0, 0, &DeviceObject);
  if ( result >= 0 )
  {
    v4 = DeviceObject;
    v5 = *(_DWORD *)(v2 + 152);
    if ( v5 > DeviceObject->AlignmentRequirement )
      DeviceObject->AlignmentRequirement = v5;
    v4->SectorSize = *(_WORD *)(v2 + 304);
    v4->Flags |= 0x10u;
    v12 = v4 + 1;
    v6 = RawInitializeVcb(&v4[1], a1[2], a1[1]);
    if ( v6 < 0 )
    {
      RawCleanupVcb((PFSRTL_ADVANCED_FCB_HEADER)&v4[1]);
      IoDeleteDevice(v4);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)&v4[1].DeviceQueue.1 + 8LL) = v4;
      *(_DWORD *)(*(_QWORD *)&v4[1].DeviceQueue.1 + 24LL) = -1;
      *(_WORD *)(*(_QWORD *)&v4[1].DeviceQueue.1 + 6LL) = 0;
      v4->Flags &= ~0x80u;
      v4->StackSize = *(_BYTE *)(v2 + 76) + 1;
      v11 = 0LL;
      memset(&Event[4], 0, 20);
      v18 = 0;
      StreamFileObjectLite = IoCreateStreamFileObjectLite(0LL, v4);
      v11 = StreamFileObjectLite;
      HIDWORD(v4[1].Queue.Wcb.DeviceContext) += 2;
      v4[1].Queue.Wcb.NumberOfMapRegisters += 2;
      *(_DWORD *)Event = 4063233;
      *(_QWORD *)&Event[24] = 0LL;
      *(_DWORD *)&Event[32] = -1;
      *(_QWORD *)&Event[36] = 1LL;
      v14 = 6;
      v15 = 16;
      v16 = *(_DWORD *)L"RAW";
      v17 = aRaw[2];
      FsRtlNotifyVolumeEventEx(StreamFileObjectLite, 6u, (PTARGET_DEVICE_CUSTOM_NOTIFICATION)Event);
      ObfDereferenceObject(StreamFileObjectLite);
      HIDWORD(v4[1].Queue.Wcb.DeviceContext) -= 2;
      v4[1].Queue.Wcb.NumberOfMapRegisters -= 2;
      ExAcquireFastMutex(&RawGlobalLock);
      p_DeviceListHead = &v4[1].DeviceQueue.DeviceListHead;
      v9 = RawMountedQueue;
      if ( *(__int64 **)(RawMountedQueue + 8) != &RawMountedQueue )
        __fastfail(3u);
      p_DeviceListHead->Flink = (struct _LIST_ENTRY *)RawMountedQueue;
      p_DeviceListHead->Blink = (struct _LIST_ENTRY *)&RawMountedQueue;
      *(_QWORD *)(v9 + 8) = p_DeviceListHead;
      RawMountedQueue = (__int64)p_DeviceListHead;
      ExReleaseFastMutex(&RawGlobalLock);
    }
    return v6;
  }
  return result;
}
