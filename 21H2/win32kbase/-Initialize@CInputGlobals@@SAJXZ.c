/*
 * XREFs of ?Initialize@CInputGlobals@@SAJXZ @ 0x1C0053BBC
 * Callers:
 *     InitializeInputComponents @ 0x1C0053064 (InitializeInputComponents.c)
 * Callees:
 *     ??0CInputGlobals@@AEAA@XZ @ 0x1C0053C48 (--0CInputGlobals@@AEAA@XZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 CInputGlobals::Initialize(void)
{
  PVOID v0; // rsi
  unsigned int v1; // ebx
  __int64 Pool2; // rdi
  __int64 v4; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v0 = gpLeakTrackingAllocator;
  v1 = 0;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72705443) != 0x72705443
    || (v4 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, 112LL);
LABEL_3:
    if ( !Pool2 )
    {
LABEL_15:
      gpInputGlobals = 0LL;
      return (unsigned int)-1073741801;
    }
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v4) != 1919964227 )
  {
    if ( ++v4 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(260LL, 128LL);
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
  gpInputGlobals = CInputGlobals::CInputGlobals((CInputGlobals *)Pool2);
  if ( !gpInputGlobals )
    return (unsigned int)-1073741801;
  return v1;
}
