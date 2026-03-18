/*
 * XREFs of PpCheckInDriverDatabase @ 0x14075EA10
 * Callers:
 *     PnpPrepareDriverLoading @ 0x1406797C8 (PnpPrepareDriverLoading.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1402D1708 (McTemplateK0j_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IopBuildFullDriverPath @ 0x14067B1DC (IopBuildFullDriverPath.c)
 *     PiLookupInDDB @ 0x14075E908 (PiLookupInDDB.c)
 *     PiLookupInDDBCache @ 0x14075EB84 (PiLookupInDDBCache.c)
 *     PnpLogEvent @ 0x140947068 (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(
        UNICODE_STRING *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _OWORD *a6)
{
  int v8; // ebx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  UNICODE_STRING P; // [rsp+30h] [rbp-18h] BYREF

  P = 0LL;
  if ( InitIsWinPEMode || !PpBootDDBInitialized )
    return 0LL;
  v8 = IopBuildFullDriverPath(a1, a2, &P);
  if ( v8 < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 8) == 0 )
    {
      PiLoggedErrorEventsMask |= 8u;
      P = 0LL;
      RtlInitUnicodeString(&P, L"BUILD DRIVER PATH FAILED");
      PnpLogEvent(&P, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
    v8 = PiLookupInDDBCache(&P, a3, v11, a6);
    if ( v8 == -1073741823 )
      v8 = PiLookupInDDB((__int64)&P, a3, a4, a6);
    if ( v8 == -1073740948 )
    {
      if ( !a5 )
        v8 = -1073740949;
    }
    else if ( v8 == -1073740949 && a5 )
    {
      v8 = -1073740948;
    }
    ExReleaseResourceLite(&PiDDBLock);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(P.Buffer, 0);
  }
  if ( (unsigned int)(v8 + 1073740949) <= 1 )
  {
    if ( (byte_140C0DD4A & 2) != 0 )
      McTemplateK0j_EtwWriteTransfer(
        (__int64)MS_KernelPnP_Provider_Context,
        (__int64)KMPnPEvt_Driver_Blocked,
        v9,
        (__int64)a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v8;
}
