/*
 * XREFs of PpCheckInDriverDatabase @ 0x14073DC80
 * Callers:
 *     PnpPrepareDriverLoading @ 0x14073DBBC (PnpPrepareDriverLoading.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x14050DE48 (McTemplateK0j_EtwWriteTransfer.c)
 *     PiLookupInDDBCache @ 0x14073DD80 (PiLookupInDDBCache.c)
 *     IopBuildFullDriverPath @ 0x1407404C8 (IopBuildFullDriverPath.c)
 *     PiLookupInDDB @ 0x14077E3BC (PiLookupInDDB.c)
 *     PnpLogEvent @ 0x1408A205C (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v18 = 0LL;
  if ( InitIsWinPEMode || !PpBootDDBInitialized )
    return 0LL;
  v10 = IopBuildFullDriverPath(a1, a2, &v18);
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
    v10 = PiLookupInDDBCache(&v18, a3, v13, a6);
    if ( v10 == -1073741823 )
      v10 = PiLookupInDDB(&v18, a3, a4, a6);
    if ( v10 == -1073740948 && !a5 )
      v10 = -1073740949;
    ExReleaseResourceLite(&PiDDBLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
    ExFreePoolWithTag(*((PVOID *)&v18 + 1), 0);
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
