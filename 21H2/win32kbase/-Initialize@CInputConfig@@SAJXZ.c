/*
 * XREFs of ?Initialize@CInputConfig@@SAJXZ @ 0x1C0053250
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 * Callees:
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C005351C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     ??0CInputConfig@@AEAA@XZ @ 0x1C00535F4 (--0CInputConfig@@AEAA@XZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

NTSTATUS CInputConfig::Initialize(void)
{
  struct _ERESOURCE *Pool2; // rax
  NTSTATUS result; // eax
  PVOID v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  PVOID BackTrace[21]; // [rsp+30h] [rbp-A8h] BYREF

  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL);
  CInputConfig::slock = Pool2;
  if ( !Pool2 )
    return -1073741801;
  result = ExInitializeResourceLite(Pool2);
  if ( result < 0 )
    return result;
  v2 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6F436E49) == 0x6F436E49
    && (v5 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1866690121 )
    {
      if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_4;
    }
    v3 = ExAllocatePool2(260LL, 1528LL);
    if ( !v3 )
      goto LABEL_18;
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(v3 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                               v2,
                               v3,
                               BackTrace) )
      {
LABEL_17:
        ExFreePoolWithTag((PVOID)v3, 0);
        goto LABEL_18;
      }
      goto LABEL_6;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v2,
                             v3,
                             BackTrace) )
      goto LABEL_17;
    v3 += 16LL;
  }
  else
  {
LABEL_4:
    v3 = ExAllocatePool2(260LL, 1512LL);
  }
  if ( !v3 )
  {
LABEL_18:
    gpInputConfig = 0LL;
    return -1073741801;
  }
LABEL_6:
  gpInputConfig = CInputConfig::CInputConfig((CInputConfig *)v3);
  if ( !gpInputConfig )
    return -1073741801;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    v4,
    7LL,
    0LL,
    1LL,
    0LL,
    lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_);
  return 0;
}
