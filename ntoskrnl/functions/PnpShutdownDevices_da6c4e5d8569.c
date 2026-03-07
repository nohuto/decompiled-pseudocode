__int64 PnpShutdownDevices()
{
  unsigned int v0; // esi
  GUID *DeviceEventEntry; // rdi
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  _QWORD *v6; // rax
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  __int64 v8; // [rsp+80h] [rbp-88h] BYREF
  __int64 v9; // [rsp+88h] [rbp-80h] BYREF
  char *v10; // [rsp+90h] [rbp-78h]
  char v11; // [rsp+98h] [rbp-70h] BYREF

  P = 0LL;
  HIDWORD(v9) = 0;
  LODWORD(v8) = 0;
  KeSetEvent(&PnpShutdownEvent, 0, 0);
  v0 = 0;
  if ( PnpTearDownPnpStacksOnShutdown || (PopShutdownCleanly & 0x20) != 0 )
  {
    DeviceEventEntry = (GUID *)PnpCreateDeviceEventEntry(0x189u);
    if ( !DeviceEventEntry )
      return 3221225626LL;
    KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
    KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
    v3 = IopRootDeviceNode;
    v10 = &v11;
    LODWORD(v9) = 10485760;
    PipSetDevNodeUserFlags((__int64)IopRootDeviceNode, 16);
    while ( 2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v3 = (_QWORD *)v3[1];
LABEL_19:
      if ( !v3 )
      {
LABEL_10:
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( v3 )
        {
          PnpInitializeTargetDeviceRemoveEvent(
            DeviceEventEntry,
            0x189uLL,
            (PVOID)v3[4],
            0,
            1,
            0,
            0,
            0x2Eu,
            0,
            0LL,
            0LL,
            (__int64)&v8,
            (__int64)&v9);
          P = DeviceEventEntry;
          v0 = PnpProcessQueryRemoveAndEject((__int64 *)&P);
          if ( P != DeviceEventEntry && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
            ExFreePoolWithTag(P, 0x4B706E50u);
          continue;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&DeviceEventEntry[4], 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag(DeviceEventEntry, 0x4B706E50u);
        return v0;
      }
      break;
    }
    while ( 1 )
    {
      v5 = *((_DWORD *)v3 + 100);
      if ( (v5 & 0x20) != 0 )
      {
        if ( v3 == IopRootDeviceNode )
        {
          v3 = 0LL;
          goto LABEL_10;
        }
      }
      else
      {
        if ( (v5 & 0x10) == 0 )
          goto LABEL_10;
        v6 = (_QWORD *)v3[1];
        if ( v6 )
          goto LABEL_21;
        PipSetDevNodeUserFlags((__int64)v3, 32);
      }
      v6 = (_QWORD *)*v3;
      if ( !*v3 )
      {
        v3 = (_QWORD *)v3[2];
        PipSetDevNodeUserFlags((__int64)v3, 32);
        goto LABEL_19;
      }
LABEL_21:
      v3 = v6;
    }
  }
  return v0;
}
