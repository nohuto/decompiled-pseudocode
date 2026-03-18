/*
 * XREFs of ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01C8E60
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01C0DD4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00C5E70 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01BE95C (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::GetCoalesceInfo(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned int v9; // eax
  PVOID v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  char v14; // r12
  __int64 Pool2; // rsi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = a2;
  v7 = 0LL;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( !(_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v8 = (unsigned __int64)(this + 16);
  *((_DWORD *)this + 33) = 0;
  if ( *((_DWORD *)this + 32) < (unsigned int)v2 )
  {
    CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
    if ( (_DWORD)v2 )
    {
      v9 = 16 * v2;
      if ( (unsigned __int64)(16 * v2) <= 0xFFFFFFFF )
      {
        if ( v9 )
        {
          v10 = gpLeakTrackingAllocator;
          v11 = v9;
          if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70647355) == 0x70647355 )
          {
            v12 = 0LL;
            if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
            {
              while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1885631317 )
              {
                if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                  goto LABEL_13;
              }
              v14 = 0;
              if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
              {
                v14 = 1;
                v11 += 16LL;
              }
              Pool2 = ExAllocatePool2(260LL, v11);
              if ( !Pool2 )
                goto LABEL_14;
              memset(BackTrace, 0, sizeof(BackTrace));
              RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
              if ( v14 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                       (__int64)v10,
                       (const void *)Pool2,
                       (struct NSInstrumentation::CBackTrace *)BackTrace) )
                {
                  v7 = Pool2 + 16;
                  goto LABEL_14;
                }
              }
              else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                          (__int64)v10,
                          Pool2,
                          (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                v7 = Pool2;
                goto LABEL_14;
              }
              ExFreePoolWithTag((PVOID)Pool2, 0);
              goto LABEL_14;
            }
          }
LABEL_13:
          v7 = ExAllocatePool2(260LL, v11);
LABEL_14:
          this[17] = (struct _KTHREAD *)v7;
          *(_DWORD *)v8 = v2;
        }
      }
    }
  }
  return (struct tagCPointerCoalesceInfo *)(v8 & -(__int64)(this[17] != 0LL));
}
