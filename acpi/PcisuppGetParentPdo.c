__int64 __fastcall PcisuppGetParentPdo(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  _QWORD v6[3]; // [rsp+60h] [rbp-18h] BYREF
  int v7; // [rsp+90h] [rbp+18h] BYREF
  int v8; // [rsp+98h] [rbp+20h] BYREF

  v6[0] = 0LL;
  v8 = 0;
  v7 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&PciRouteInterfaceLock, 1u);
  if ( InterruptRouting )
  {
    v8 = -1;
    v7 = -1;
    v4 = (*((__int64 (__fastcall **)(__int64, int *, int *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, _QWORD, _QWORD, _QWORD))InterruptRouting
          + 4))(
           a1,
           &v8,
           &v7,
           0LL,
           0LL,
           0LL,
           0LL,
           v6,
           0LL,
           0LL,
           0LL);
  }
  else
  {
    v4 = -1073741275;
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  if ( v4 < 0 )
    return (unsigned int)v4;
  *a2 = v6[0];
  return 0LL;
}
