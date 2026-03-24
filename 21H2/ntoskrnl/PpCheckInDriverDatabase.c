/*
 * XREFs of PpCheckInDriverDatabase @ 0x14073DAC0
 * Callers:
 *     PnpPrepareDriverLoading @ 0x14073D9FC (PnpPrepareDriverLoading.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x14050DC08 (McTemplateK0j_EtwWriteTransfer.c)
 *     PiLookupInDDBCache @ 0x14073DBC0 (PiLookupInDDBCache.c)
 *     IopBuildFullDriverPath @ 0x140740308 (IopBuildFullDriverPath.c)
 *     PiLookupInDDB @ 0x14077E1FC (PiLookupInDDB.c)
 *     PnpLogEvent @ 0x1408A1EFC (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v15 = 0LL;
  if ( InitIsWinPEMode || !PpBootDDBInitialized )
    return 0LL;
  v10 = IopBuildFullDriverPath(a1, a2, &v15);
  if ( v10 < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 8) == 0 )
    {
      PiLoggedErrorEventsMask |= 8u;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"BUILD DRIVER PATH FAILED");
      PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
    v10 = PiLookupInDDBCache(&v15, a3, v13, a6);
    if ( v10 == -1073741823 )
      v10 = PiLookupInDDB(&v15, a3, a4, a6);
    if ( v10 == -1073740948 && !a5 )
      v10 = -1073740949;
    ExReleaseResourceLite(&PiDDBLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(*((PVOID *)&v15 + 1), 0);
  }
  if ( (unsigned int)(v10 + 1073740949) <= 1 )
  {
    if ( (byte_140C1327A & 2) != 0 )
      McTemplateK0j_EtwWriteTransfer(v9, v8, v11, a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
