/*
 * XREFs of ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C00307E4
 * Callers:
 *     HMAllocObjectEx @ 0x1C002D20C (HMAllocObjectEx.c)
 * Callees:
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0030E00 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void *__fastcall HMAllocateUserOrIsolatedType(unsigned __int64 a1, __int16 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // r9
  PVOID v5; // rsi
  int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rax
  char v9; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a1;
  if ( (a2 & 0x200) != 0 )
    return HMAllocateIsolatedType(a3);
  v5 = gpLeakTrackingAllocator;
  v6 = *((_DWORD *)&unk_1C024AF48 + 6 * a3);
  if ( (v6 & *((_DWORD *)gpLeakTrackingAllocator + 10)) == v6 )
  {
    v7 = 0LL;
    v8 = 0LL;
    if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != v6 )
      {
        if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          return (void *)ExAllocatePool2(260LL, a1);
      }
      v9 = 0;
      if ( a1 < 0x1000 || (a1 & 0xFFF) != 0 )
      {
        v9 = 1;
        v3 = a1 + 16;
      }
      Pool2 = ExAllocatePool2(260LL, v3);
      if ( !Pool2 )
        return (void *)v7;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v5,
                                Pool2,
                                BackTrace) )
          return (void *)(Pool2 + 16);
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v5,
                                   Pool2,
                                   BackTrace) )
      {
        return (void *)Pool2;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return (void *)v7;
    }
  }
  return (void *)ExAllocatePool2(260LL, a1);
}
