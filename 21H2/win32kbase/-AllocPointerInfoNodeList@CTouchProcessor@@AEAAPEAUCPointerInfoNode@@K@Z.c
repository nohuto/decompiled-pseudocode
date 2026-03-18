/*
 * XREFs of ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C01BE0DC
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01C2E94 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInfoNode *__fastcall CTouchProcessor::AllocPointerInfoNodeList(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // ecx
  PVOID v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  char v10; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = (unsigned int)a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = 0LL;
  if ( (_DWORD)v3 )
  {
    v5 = 480 * v3;
    if ( (unsigned __int64)(480 * v3) <= 0xFFFFFFFF )
    {
      if ( v5 )
      {
        v6 = gpLeakTrackingAllocator;
        v7 = v5;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x65707355) == 0x65707355 )
        {
          v8 = 0LL;
          if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
          {
            while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1701868373 )
            {
              if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                return (struct CPointerInfoNode *)ExAllocatePool2(260LL, v5);
            }
            v10 = 0;
            if ( v5 < 0x1000uLL || (v5 & 0xFFF) != 0 )
            {
              v10 = 1;
              v7 = v5 + 16LL;
            }
            Pool2 = ExAllocatePool2(260LL, v7);
            if ( !Pool2 )
              return (struct CPointerInfoNode *)v4;
            memset(BackTrace, 0, sizeof(BackTrace));
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                     (__int64)v6,
                     (const void *)Pool2,
                     (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                return (struct CPointerInfoNode *)(Pool2 + 16);
              }
            }
            else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                        (__int64)v6,
                        Pool2,
                        (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              return (struct CPointerInfoNode *)Pool2;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
            return (struct CPointerInfoNode *)v4;
          }
        }
        return (struct CPointerInfoNode *)ExAllocatePool2(260LL, v5);
      }
    }
  }
  return 0LL;
}
