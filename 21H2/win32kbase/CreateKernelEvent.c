/*
 * XREFs of CreateKernelEvent @ 0x1C005D9C0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 *     _RegisterLogonProcess @ 0x1C00BDE70 (_RegisterLogonProcess.c)
 *     VideoPortCallout @ 0x1C00D4DF0 (VideoPortCallout.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C01FB5E4 (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CreateKernelEvent(EVENT_TYPE Type, BOOLEAN a2)
{
  PVOID v2; // rdi
  __int64 Pool2; // rbx
  __int64 v7; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x654B7355) == 0x654B7355
    && (v7 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1699443541 )
    {
      if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_2;
    }
    Pool2 = ExAllocatePool2(68LL, 40LL);
    if ( !Pool2 )
      return 0LL;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v2,
                               Pool2,
                               BackTrace) )
      {
LABEL_13:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        return 0LL;
      }
      goto LABEL_4;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v2,
                             Pool2,
                             BackTrace) )
      goto LABEL_13;
    Pool2 += 16LL;
  }
  else
  {
LABEL_2:
    Pool2 = ExAllocatePool2(68LL, 24LL);
  }
  if ( Pool2 )
LABEL_4:
    KeInitializeEvent((PRKEVENT)Pool2, Type, a2);
  return Pool2;
}
