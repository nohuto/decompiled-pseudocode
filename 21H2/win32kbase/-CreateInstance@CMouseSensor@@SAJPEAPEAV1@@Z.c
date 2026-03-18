/*
 * XREFs of ?CreateInstance@CMouseSensor@@SAJPEAPEAV1@@Z @ 0x1C005C858
 * Callers:
 *     CMouseSensor_CreateInstance @ 0x1C005B2B0 (CMouseSensor_CreateInstance.c)
 * Callees:
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1C005C8DC (--0CMouseSensor@@IEAA@XZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CMouseSensor::CreateInstance(struct CMouseSensor **a1)
{
  PVOID v1; // rdi
  __int64 Pool2; // rbx
  CHidInput *v3; // rax
  __int64 v5; // rax
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  gpMouseSensor = 0LL;
  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70694843) != 0x70694843
    || (v5 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 1792LL);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1885947971 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 1808LL);
  if ( !Pool2 )
    return 3221225495LL;
  memset(BackTrace, 0, 0xA0uLL);
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
  v3 = CMouseSensor::CMouseSensor((CMouseSensor *)Pool2);
  if ( v3 )
  {
    gpMouseSensor = v3;
    return 0LL;
  }
  return 3221225495LL;
}
