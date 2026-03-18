/*
 * XREFs of rimAllocPointerInfoNodeList @ 0x1C00E683E
 * Callers:
 *     rimStorePointersInHoldingFrame @ 0x1C01A7B8C (rimStorePointersInHoldingFrame.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall rimAllocPointerInfoNodeList(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  PVOID v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  char v9; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = 0LL;
  if ( a3 )
  {
    v4 = 192LL * a3;
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( (_DWORD)v4 )
      {
        v5 = gpLeakTrackingAllocator;
        v6 = (unsigned int)v4;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65707352) == 0x65707352 )
        {
          v7 = 0LL;
          if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
          {
            while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1701868370 )
            {
              if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                return ExAllocatePool2(260LL, (unsigned int)v4);
            }
            v9 = 0;
            if ( (unsigned int)v4 < 0x1000uLL || (v4 & 0xFFF) != 0 )
            {
              v9 = 1;
              v6 = (unsigned int)v4 + 16LL;
            }
            Pool2 = ExAllocatePool2(260LL, v6);
            if ( !Pool2 )
              return v3;
            memset(BackTrace, 0, sizeof(BackTrace));
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v5,
                                      Pool2,
                                      BackTrace) )
                return Pool2 + 16;
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v5,
                                         Pool2,
                                         BackTrace) )
            {
              return Pool2;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
            return v3;
          }
        }
        return ExAllocatePool2(260LL, (unsigned int)v4);
      }
    }
  }
  return 0LL;
}
