/*
 * XREFs of ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC04
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?GeneratedCreateResource@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1C00A6550 (-GeneratedCreateResource@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        unsigned __int64 a3,
        int a4)
{
  PVOID v4; // rsi
  unsigned __int64 v5; // r10
  __int64 v6; // rbx
  __int64 v8; // rax
  char v9; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v4 = gpLeakTrackingAllocator;
  v5 = a3;
  if ( (a4 & *((_DWORD *)gpLeakTrackingAllocator + 10)) != a4 )
    return ExAllocatePool2(261LL, a3);
  v6 = 0LL;
  v8 = 0LL;
  if ( !*((_DWORD *)gpLeakTrackingAllocator + 11) )
    return ExAllocatePool2(261LL, a3);
  while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != a4 )
  {
    if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      return ExAllocatePool2(261LL, a3);
  }
  v9 = 0;
  if ( a3 < 0x1000 || (a3 & 0xFFF) != 0 )
  {
    v9 = 1;
    v5 = a3 + 16;
  }
  Pool2 = ExAllocatePool2(261LL, v5);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v4,
                              Pool2,
                              BackTrace) )
        return Pool2 + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v4,
                                 Pool2,
                                 BackTrace) )
    {
      return Pool2;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return v6;
}
