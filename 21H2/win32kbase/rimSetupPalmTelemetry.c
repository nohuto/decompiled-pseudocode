/*
 * XREFs of rimSetupPalmTelemetry @ 0x1C018F170
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01B77CC (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  PVOID v2; // rdi
  __int64 v3; // rax
  int v4; // edx
  __int64 Pool2; // rbx
  int v6; // r8d
  PVOID BackTrace[20]; // [rsp+40h] [rbp-A8h] BYREF

  if ( *(_QWORD *)(a1 + 1080) )
    return;
  v2 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76656B52) != 0x76656B52
    || (v3 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, 12304LL);
    goto LABEL_7;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v3) != 1986358098 )
  {
    if ( ++v3 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_6;
  }
  Pool2 = ExAllocatePool2(260LL, 12320LL);
  if ( !Pool2 )
    goto LABEL_8;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v2,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_15;
    }
    goto LABEL_19;
  }
  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
         (__int64)v2,
         (const void *)Pool2,
         (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
    Pool2 += 16LL;
LABEL_7:
    if ( Pool2 )
    {
LABEL_15:
      PalmTelemetry::_ResetTelemetryData((PalmTelemetry *)Pool2);
      *(_DWORD *)(Pool2 + 16) = 0;
      *(_DWORD *)Pool2 = 0;
      *(_DWORD *)(Pool2 + 4) = 0;
      *(_QWORD *)(a1 + 1080) = Pool2;
      return;
    }
    goto LABEL_8;
  }
LABEL_19:
  ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_8:
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v6,
      (_DWORD)gRimLog,
      3,
      1,
      11,
      (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
  }
}
