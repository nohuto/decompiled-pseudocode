/*
 * XREFs of newpathalloc @ 0x1C00CCAC0
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0019374 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C0092A08 (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 newpathalloc()
{
  __int64 Pool2; // rbx
  __int64 v1; // rdi
  struct PATHALLOC *v2; // rax
  PVOID v4; // rsi
  __int64 v5; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF
  HSEMAPHORE v7; // [rsp+D0h] [rbp+8h] BYREF

  v7 = PATHALLOC::hsemFreelist;
  EngAcquireSemaphore(PATHALLOC::hsemFreelist);
  Pool2 = (__int64)PATHALLOC::freelist;
  v1 = 0LL;
  if ( PATHALLOC::freelist )
  {
    v2 = *(struct PATHALLOC **)PATHALLOC::freelist;
    --PATHALLOC::cFree;
    PATHALLOC::freelist = v2;
LABEL_3:
    *(_QWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 24;
    v1 = Pool2;
    *(_DWORD *)(Pool2 + 16) = 4032;
    goto LABEL_4;
  }
  v4 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74617047) != 0x74617047
    || (v5 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, 4032LL);
    goto LABEL_7;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1952542791 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_6;
  }
  Pool2 = ExAllocatePool2(260LL, 4048LL);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v4,
                               Pool2,
                               BackTrace) )
      {
LABEL_16:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_4;
      }
LABEL_8:
      ++PATHALLOC::cAllocated;
      goto LABEL_3;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v4,
                             Pool2,
                             BackTrace) )
      goto LABEL_16;
    Pool2 += 16LL;
LABEL_7:
    if ( !Pool2 )
      goto LABEL_4;
    goto LABEL_8;
  }
LABEL_4:
  SEMOBJ::vUnlock((PERESOURCE *)&v7);
  return v1;
}
