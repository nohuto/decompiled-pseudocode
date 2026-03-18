/*
 * XREFs of ?Create@LegacyInputDispatcher@@SAJPEAPEAV1@@Z @ 0x1C00C17F0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall LegacyInputDispatcher::Create(struct LegacyInputDispatcher **a1)
{
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70694843) == 0x70694843
    && (v5 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1885947971 )
    {
      if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(260LL, 80LL);
    if ( !Pool2 )
      return 3221225495LL;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v1,
                               Pool2,
                               BackTrace) )
      {
LABEL_13:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return 3221225495LL;
      }
LABEL_4:
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_DWORD *)(Pool2 + 44) = 0;
      *(_DWORD *)(Pool2 + 48) = 0;
      *(_DWORD *)(Pool2 + 52) = 0;
      *(_QWORD *)Pool2 = &LegacyInputDispatcher::`vftable';
      result = 0LL;
      *(_DWORD *)(Pool2 + 40) = 64;
      *(_WORD *)(Pool2 + 56) = 2;
      *a1 = (struct LegacyInputDispatcher *)Pool2;
      return result;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
      goto LABEL_13;
    Pool2 += 16LL;
  }
  else
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 64LL);
  }
  if ( Pool2 )
    goto LABEL_4;
  return 3221225495LL;
}
