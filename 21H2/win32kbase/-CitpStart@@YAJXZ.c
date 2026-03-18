/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1C00A3AFC
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C00A3954 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2D54 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A31F4 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C00A3EDC (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A3F18 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A51C4 (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A6008 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A6064 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 CitpStart(void)
{
  unsigned int v0; // ebx
  struct _CIT_IMPACT_CONTEXT *v2; // rsi
  int v3; // ebp
  __int16 v4; // ax
  PVOID v5; // rsi
  __int64 v6; // rax
  const char *v7; // rdx
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v0 = 0;
  if ( byte_1C029A201 )
    return (unsigned int)-1073741431;
  if ( !CitpIsInteractiveSession() )
    return (unsigned int)-1073741637;
  v5 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) != 0x49637355
    || (v6 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_16:
    Pool2 = ExAllocatePool2(260LL, 896LL);
    goto LABEL_5;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1231254357 )
  {
    if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_16;
  }
  Pool2 = ExAllocatePool2(260LL, 912LL);
  if ( !Pool2 )
    goto LABEL_24;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v5,
                             Pool2,
                             BackTrace) )
      goto LABEL_23;
    Pool2 += 16LL;
LABEL_5:
    v2 = (struct _CIT_IMPACT_CONTEXT *)Pool2;
    if ( Pool2 )
      goto LABEL_6;
LABEL_24:
    v0 = -1073741670;
    CitpLogFailureWorker(-1073741670, v7, 0xC8u);
    return v0;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v5,
                           Pool2,
                           BackTrace) )
  {
LABEL_23:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_24;
  }
  v2 = (struct _CIT_IMPACT_CONTEXT *)Pool2;
LABEL_6:
  CitpContextInitialize((struct _CIT_IMPACT_CONTEXT *)Pool2);
  v3 = CitpContextTrackingDataStart((struct _CIT_IMPACT_CONTEXT *)Pool2);
  if ( v3 < 0 )
  {
    CitpContextCleanup(v2);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v2);
    return (unsigned int)v3;
  }
  else
  {
    v4 = MEMORY[0xFFFFF780000002C4];
    if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
      v4 = -1;
    *(_WORD *)(Pool2 + 116) = v4;
    xmmword_1C029A230 = (struct _CIT_IMPACT_CONTEXT *)Pool2;
    if ( !(unsigned __int8)RtlIsMultiSessionSku() )
    {
      CitpPostUpdateUseInfoLoad(xmmword_1C029A230);
      CitpDPDataLoad(xmmword_1C029A230);
      CitpUpdateBootStats(xmmword_1C029A230);
    }
  }
  return v0;
}
