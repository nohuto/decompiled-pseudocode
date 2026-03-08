/*
 * XREFs of PpCheckInDriverDatabase @ 0x14079DC60
 * Callers:
 *     PnpPrepareDriverLoading @ 0x14079DAE0 (PnpPrepareDriverLoading.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1403BE348 (McTemplateK0j_EtwWriteTransfer.c)
 *     IopBuildFullDriverPath @ 0x1406C25D8 (IopBuildFullDriverPath.c)
 *     PiLookupInDDBCache @ 0x14079DD70 (PiLookupInDDBCache.c)
 *     PiLookupInDDB @ 0x14079DE5C (PiLookupInDDB.c)
 *     PnpLogEvent @ 0x140955B40 (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(
        UNICODE_STRING *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  int v8; // ebx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  UNICODE_STRING P; // [rsp+38h] [rbp-20h] BYREF

  P = 0LL;
  if ( InitIsWinPEMode || !BYTE1(NlsMbCodePageTag) )
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
      v8 = PiLookupInDDB(&P, a3, a4, a6);
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
    if ( (byte_140C0E10A & 2) != 0 )
      McTemplateK0j_EtwWriteTransfer((__int64)MS_KernelPnP_Provider_Context, (__int64)KMPnPEvt_Driver_Blocked, v9, a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v8;
}
