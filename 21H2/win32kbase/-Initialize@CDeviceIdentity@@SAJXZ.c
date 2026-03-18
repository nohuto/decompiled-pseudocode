/*
 * XREFs of ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C0053414
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C005351C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CDeviceIdentity::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  PVOID v4; // rsi
  __int64 v5; // rcx
  __int64 Pool2; // rdi
  __int64 v8; // rax
  PVOID BackTrace[20]; // [rsp+30h] [rbp-A8h] BYREF

  v3 = 0;
  if ( gpDeviceIdentity )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70446549) != 0x70446549
    || (v8 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, 24LL);
LABEL_5:
    if ( !Pool2 )
    {
LABEL_17:
      gpDeviceIdentity = 0LL;
      return (unsigned int)-1073741801;
    }
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1883530569 )
  {
    if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(260LL, 40LL);
  if ( !Pool2 )
    goto LABEL_17;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v4,
                             Pool2,
                             BackTrace) )
      goto LABEL_16;
    Pool2 += 16LL;
    goto LABEL_5;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v4,
                           Pool2,
                           BackTrace) )
  {
LABEL_16:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_17;
  }
LABEL_6:
  gpDeviceIdentity = (void *)Pool2;
  *(_OWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_DWORD *)(Pool2 + 16) = 1;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    v5,
    0LL,
    1LL,
    2LL,
    Pool2,
    lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_);
  if ( !gpDeviceIdentity )
    return (unsigned int)-1073741801;
  return v3;
}
