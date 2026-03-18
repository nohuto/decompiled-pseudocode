/*
 * XREFs of ?CreateInstance@CKeyboardProcessor@@SAJPEAPEAV1@@Z @ 0x1C00C31B0
 * Callers:
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00C3160 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CKeyboardProcessor::CreateInstance(struct CKeyboardProcessor **a1)
{
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  __int64 result; // rax
  __int64 v5; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  *a1 = 0LL;
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70724D50) == 0x70724D50
    && (v5 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1886539088 )
    {
      if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(260LL, 48LL);
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
      *(_DWORD *)(Pool2 + 16) = 0;
      *(_DWORD *)(Pool2 + 20) = 0;
      *(_DWORD *)(Pool2 + 24) = 0;
      *(_QWORD *)Pool2 = &CBaseProcessor::`vftable';
      result = 0LL;
      *(_DWORD *)(Pool2 + 8) = 1;
      *a1 = (struct CKeyboardProcessor *)Pool2;
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
    Pool2 = ExAllocatePool2(260LL, 32LL);
  }
  if ( Pool2 )
    goto LABEL_4;
  return 3221225495LL;
}
