/*
 * XREFs of ?CreateInstance@CMouseProcessor@@SAJPEAPEAV1@@Z @ 0x1C005C978
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C005D270 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C005CA00 (--0CMouseProcessor@@IEAA@XZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CMouseProcessor::CreateInstance(struct CMouseProcessor **a1)
{
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  struct CMouseProcessor *v4; // rax
  __int64 v6; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  *a1 = 0LL;
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70724D50) != 0x70724D50
    || (v6 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 4968LL);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1886539088 )
  {
    if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 4984LL);
  if ( !Pool2 )
    return 3221225495LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v1,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
LABEL_3:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_4;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v1,
                           Pool2,
                           BackTrace) )
  {
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 3221225495LL;
  }
LABEL_4:
  v4 = CMouseProcessor::CMouseProcessor((CMouseProcessor *)Pool2);
  if ( v4 )
  {
    *a1 = v4;
    return 0LL;
  }
  return 3221225495LL;
}
