/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x1C0053334
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C005351C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 CCursorClip::Initialize(void)
{
  PVOID v0; // rbx
  unsigned int v1; // edi
  __int64 Pool2; // rsi
  __int64 v3; // rcx
  __int64 v5; // rax
  PVOID BackTrace[20]; // [rsp+30h] [rbp-A8h] BYREF

  v0 = gpLeakTrackingAllocator;
  v1 = 0;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72705443) != 0x72705443
    || (v5 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 280LL);
LABEL_3:
    if ( !Pool2 )
    {
LABEL_14:
      gpCursorClip = 0LL;
      return (unsigned int)-1073741801;
    }
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1919964227 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 296LL);
  if ( !Pool2 )
    goto LABEL_14;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v0,
                             Pool2,
                             BackTrace) )
      goto LABEL_13;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v0,
                           Pool2,
                           BackTrace) )
  {
LABEL_13:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_14;
  }
LABEL_4:
  *(_OWORD *)Pool2 = 0LL;
  *(_OWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  memset((void *)(Pool2 + 48), 0, 0xC8uLL);
  *(_QWORD *)(Pool2 + 248) = Pool2 + 48;
  *(_DWORD *)(Pool2 + 256) = 0;
  *(_QWORD *)(Pool2 + 264) = 0LL;
  *(_DWORD *)(Pool2 + 272) = 0;
  *(_WORD *)(Pool2 + 276) = 0;
  gpCursorClip = (CCursorClip *)Pool2;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    v3,
    1LL,
    0LL,
    2LL,
    0LL,
    lambda_0106af77700bc4a134663e8cc2385985_::_lambda_invoker_cdecl_);
  return v1;
}
