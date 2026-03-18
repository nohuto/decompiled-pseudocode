/*
 * XREFs of CreatePTPEngine @ 0x1C0204F3C
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DE46C (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CreatePTPEngine(__int64 *a1)
{
  PVOID v1; // rdi
  __int64 v3; // rax
  __int64 Pool2; // rbx
  __int64 result; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70747355) == 0x70747355
    && (v3 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v3) != 1886679893 )
    {
      if ( ++v3 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 3960LL);
    if ( !Pool2 )
      goto LABEL_12;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
              (__int64)v1,
              Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_11:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        goto LABEL_12;
      }
LABEL_7:
      memset((void *)Pool2, 0, 0xF68uLL);
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_QWORD *)Pool2 = &CPTPEngine::`vftable';
      result = 0LL;
      *a1 = Pool2;
      return result;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v1,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_11;
    Pool2 += 16LL;
  }
  else
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 3944LL);
  }
  if ( Pool2 )
    goto LABEL_7;
LABEL_12:
  *a1 = 0LL;
  return 3221225495LL;
}
