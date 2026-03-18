/*
 * XREFs of ?Initialize@CActivationObjectManager@@SAJXZ @ 0x1C005315C
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C005351C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 CActivationObjectManager::Initialize(void)
{
  PVOID v0; // rsi
  unsigned int v1; // ebx
  __int64 Pool2; // rdi
  __int64 v4; // rax
  PVOID BackTrace[20]; // [rsp+30h] [rbp-A8h] BYREF

  v0 = gpLeakTrackingAllocator;
  v1 = 0;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D676155) != 0x6D676155
    || (v4 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 40LL);
LABEL_3:
    if ( !Pool2 )
    {
LABEL_15:
      qword_1C0296548 = 0LL;
      return (unsigned int)-1073741801;
    }
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != 1835491669 )
  {
    if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 56LL);
  if ( !Pool2 )
    goto LABEL_15;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v0,
                             Pool2,
                             BackTrace) )
      goto LABEL_14;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v0,
                           Pool2,
                           BackTrace) )
  {
LABEL_14:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_15;
  }
LABEL_4:
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_DWORD *)(ExActivationObjectType + 92LL) = 983043;
  *(_QWORD *)(ExActivationObjectType + 104LL) = 80LL;
  *(_DWORD *)(ExActivationObjectType + 76LL) = 131073;
  *(_DWORD *)(ExActivationObjectType + 80LL) = 131074;
  *(_DWORD *)(ExActivationObjectType + 84LL) = 0x20000;
  *(_DWORD *)(ExActivationObjectType + 88LL) = 983043;
  *(_BYTE *)(ExActivationObjectType + 66LL) |= 0x10u;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  qword_1C0296548 = (CActivationObjectManager *)Pool2;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    ExActivationObjectType,
    11LL,
    1LL,
    2LL,
    Pool2,
    &lambda_e0b5bc6a6e53c9aba0ac2786547e6048_::_lambda_invoker_cdecl_);
  if ( !qword_1C0296548 )
    return (unsigned int)-1073741801;
  return v1;
}
