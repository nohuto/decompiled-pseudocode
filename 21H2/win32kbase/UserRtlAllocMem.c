/*
 * XREFs of UserRtlAllocMem @ 0x1C01670C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall UserRtlAllocMem(unsigned __int64 a1)
{
  PVOID v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rax
  char v5; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x74727355) != 0x74727355 )
    return ExAllocatePool2(260LL, a1);
  v2 = 0LL;
  v3 = 0LL;
  if ( !*((_DWORD *)gpLeakTrackingAllocator + 11) )
    return ExAllocatePool2(260LL, a1);
  while ( *((_DWORD *)gpLeakTrackingAllocator + v3) != 1953657685 )
  {
    if ( ++v3 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      return ExAllocatePool2(260LL, a1);
  }
  v5 = 0;
  if ( a1 < 0x1000 || (a1 & 0xFFF) != 0 )
  {
    v5 = 1;
    a1 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, a1);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v5 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v1,
                              Pool2,
                              BackTrace) )
        return Pool2 + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v1,
                                 Pool2,
                                 BackTrace) )
    {
      return Pool2;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return v2;
}
