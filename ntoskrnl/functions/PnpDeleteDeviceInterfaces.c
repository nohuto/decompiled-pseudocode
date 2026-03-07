__int64 __fastcall PnpDeleteDeviceInterfaces(unsigned __int16 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *Pool2; // rbx
  int inited; // edi
  unsigned int v5; // r14d
  const WCHAR *v6; // rsi
  int MatchingFilteredDeviceInterfaceList; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+98h] [rbp+38h] BYREF
  void *v11; // [rsp+A0h] [rbp+40h] BYREF

  v10 = 0;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  Pool2 = 0LL;
  DestinationString = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  inited = PnpUnicodeStringToWstr(&v11, 0LL, a1);
  if ( inited >= 0 )
  {
    v10 = 4096;
    inited = -1073741789;
    v5 = 0;
    while ( v5 < 5 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v10, 538996816LL);
      v6 = (const WCHAR *)Pool2;
      if ( !Pool2 )
      {
        inited = -1073741670;
        break;
      }
      MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              0LL,
                                              (__int64)v11,
                                              0,
                                              0LL,
                                              0LL,
                                              (__int64)Pool2,
                                              v10,
                                              (__int64)&v10,
                                              0);
      ++v5;
      inited = MatchingFilteredDeviceInterfaceList;
      if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
      {
        if ( MatchingFilteredDeviceInterfaceList >= 0 )
        {
          while ( *v6 )
          {
            inited = RtlInitUnicodeStringEx(&DestinationString, v6);
            if ( inited >= 0 )
              CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, DestinationString.Buffer, 0LL);
            v6 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
          }
        }
        break;
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  PnpUnicodeStringToWstrFree(v11, (__int64)a1);
  return (unsigned int)inited;
}
