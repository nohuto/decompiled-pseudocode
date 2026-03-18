/*
 * XREFs of ?Create@PTPEngineTraceProducer@@SAJPEAVIPTPEngine@@_KPEAPEAV1@@Z @ 0x1C0205304
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DE46C (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ??0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z @ 0x1C02051F4 (--0PTPEngineTraceProducer@@AEAA@PEAVIPTPEngine@@@Z.c)
 */

__int64 __fastcall PTPEngineTraceProducer::Create(
        struct IPTPEngine *a1,
        __int64 a2,
        struct PTPEngineTraceProducer **a3)
{
  PVOID v3; // rdi
  __int64 v7; // rax
  __int64 Pool2; // rbx
  PTPEngineTraceProducer *v9; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70747355) != 0x70747355
    || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 608LL);
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1886679893 )
  {
    if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  Pool2 = ExAllocatePool2(260LL, 624LL);
  if ( !Pool2 )
    return 3221225495LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v3,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_12;
    Pool2 += 16LL;
LABEL_6:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_7;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v3,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_12:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 3221225495LL;
  }
LABEL_7:
  v9 = PTPEngineTraceProducer::PTPEngineTraceProducer((PTPEngineTraceProducer *)Pool2, a1);
  if ( v9 )
  {
    *((_QWORD *)v9 + 75) = a2;
    *a3 = v9;
    return 0LL;
  }
  return 3221225495LL;
}
