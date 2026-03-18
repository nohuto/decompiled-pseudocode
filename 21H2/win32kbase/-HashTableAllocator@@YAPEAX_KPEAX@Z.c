/*
 * XREFs of ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1C00C58E8
 * Callers:
 *     ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00919E0 (-AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall HashTableAllocator(unsigned __int64 a1, void *a2)
{
  PVOID v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rax
  char v6; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76744143) != 0x76744143 )
    return ExAllocatePool2(260LL, a1);
  v3 = 0LL;
  v5 = 0LL;
  if ( !*((_DWORD *)gpLeakTrackingAllocator + 11) )
    return ExAllocatePool2(260LL, a1);
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1987330371 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      return ExAllocatePool2(260LL, a1);
  }
  v6 = 0;
  if ( a1 < 0x1000 || (a1 & 0xFFF) != 0 )
  {
    v6 = 1;
    a1 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, a1);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v6 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v2,
                              Pool2,
                              BackTrace) )
        return Pool2 + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v2,
                                 Pool2,
                                 BackTrace) )
    {
      return Pool2;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return v3;
}
