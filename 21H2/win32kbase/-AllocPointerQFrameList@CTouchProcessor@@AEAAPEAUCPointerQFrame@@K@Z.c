/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C01BE26C
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01C1E20 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01C2E94 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned int v5; // eax
  PVOID v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  __int64 Pool2; // rbx
  _BYTE *v10; // rdi
  char v12; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = (unsigned int)a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (_DWORD)v3 )
  {
    v4 = v3;
    v5 = 160 * v3;
    if ( (unsigned __int64)(160 * v3) <= 0xFFFFFFFF )
    {
      if ( v5 )
      {
        v6 = gpLeakTrackingAllocator;
        v7 = v5;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x51707355) == 0x51707355 )
        {
          v8 = 0LL;
          if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
          {
            while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1366324053 )
            {
              if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                goto LABEL_10;
            }
            v12 = 0;
            if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
            {
              v12 = 1;
              v7 += 16LL;
            }
            Pool2 = ExAllocatePool2(260LL, v7);
            if ( !Pool2 )
              return 0LL;
            memset(BackTrace, 0, sizeof(BackTrace));
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                     (__int64)v6,
                     (const void *)Pool2,
                     (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                Pool2 += 16LL;
LABEL_11:
                if ( !Pool2 )
                  return (struct CPointerQFrame *)Pool2;
LABEL_12:
                v10 = (_BYTE *)(Pool2 + 16);
                do
                {
                  *((_DWORD *)v10 - 4) = -1;
                  memset(v10, 0, 0x70uLL);
                  v10[112] = 0;
                  v10 += 160;
                  --v4;
                }
                while ( v4 );
                return (struct CPointerQFrame *)Pool2;
              }
            }
            else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                        (__int64)v6,
                        Pool2,
                        (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              goto LABEL_12;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
            return 0LL;
          }
        }
LABEL_10:
        Pool2 = ExAllocatePool2(260LL, v7);
        goto LABEL_11;
      }
    }
  }
  return 0LL;
}
