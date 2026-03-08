/*
 * XREFs of PnpDisableDeviceInterfaces @ 0x14087E3BC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B1D8C (PnpRemoveLockedDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     IoSetDeviceInterfaceState @ 0x1406832E0 (IoSetDeviceInterfaceState.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1406C42E4 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     PnpUnicodeStringToWstr @ 0x1406D07D4 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406D08F4 (PnpUnicodeStringToWstrFree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpDisableDeviceInterfaces(unsigned __int16 *a1)
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
                                              1,
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
              IoSetDeviceInterfaceState(&DestinationString, 0);
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
