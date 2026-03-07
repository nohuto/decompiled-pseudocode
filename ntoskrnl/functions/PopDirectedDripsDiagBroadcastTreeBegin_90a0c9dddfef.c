signed __int32 __fastcall PopDirectedDripsDiagBroadcastTreeBegin(__int64 a1, int a2, __int64 *a3)
{
  __int64 DeviceDiagnostic; // rdi
  PVOID *v7; // rax
  int v8; // esi
  __int64 v9; // rbx
  __int64 Pool2; // rax
  __int64 *v11; // rax
  __int64 DeviceActiveStamp; // rax
  int v13; // r14d

  *a3 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  DeviceDiagnostic = *(_QWORD *)(a1 + 776);
  if ( DeviceDiagnostic || (DeviceDiagnostic = PopDirectedDripsDiagCreateDeviceDiagnostic(a1)) != 0 )
  {
    if ( *(_DWORD *)(DeviceDiagnostic + 148) == -1 )
      *(_DWORD *)(DeviceDiagnostic + 148) = dword_140C38CC4++;
    v7 = (PVOID *)PopDirectedDripsDiagSessionContext;
    v8 = *(_DWORD *)(DeviceDiagnostic + 148);
    if ( PopDirectedDripsDiagSessionContext == &PopDirectedDripsDiagSessionContext )
      goto LABEL_9;
    do
    {
      v9 = (__int64)v7;
      if ( *((_DWORD *)v7 + 8) == v8 )
        break;
      v7 = (PVOID *)*v7;
      v9 = 0LL;
    }
    while ( v7 != &PopDirectedDripsDiagSessionContext );
    if ( !v9 )
    {
LABEL_9:
      Pool2 = ExAllocatePool2(256LL, 232LL, 1734960208LL);
      v9 = Pool2;
      if ( !Pool2 )
        goto LABEL_14;
      *(_DWORD *)(Pool2 + 32) = v8;
      *(_QWORD *)(Pool2 + 16) = DeviceDiagnostic;
      v11 = (__int64 *)qword_140C38AA8;
      if ( *(PVOID **)qword_140C38AA8 != &PopDirectedDripsDiagSessionContext )
        __fastfail(3u);
      *(_QWORD *)v9 = &PopDirectedDripsDiagSessionContext;
      *(_QWORD *)(v9 + 8) = v11;
      *v11 = v9;
      qword_140C38AA8 = v9;
    }
    DeviceActiveStamp = PopDirectedDripsDiagGetDeviceActiveStamp(*(_QWORD *)(a1 + 80));
    v13 = (*(_DWORD *)(v9 + 40) ^ a2) & 0xF;
    *(_QWORD *)(v9 + 48) = DeviceActiveStamp;
    LODWORD(DeviceActiveStamp) = dword_140C38CC8;
    *(_DWORD *)(v9 + 40) ^= v13;
    *(_DWORD *)(v9 + 36) = DeviceActiveStamp;
    *(_DWORD *)(DeviceDiagnostic + 152) |= 0x60000u;
    *a3 = v9;
  }
LABEL_14:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
