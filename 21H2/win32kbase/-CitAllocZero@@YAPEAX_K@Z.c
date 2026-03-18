/*
 * XREFs of ?CitAllocZero@@YAPEAX_K@Z @ 0x1C00B43FC
 * Callers:
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A6008 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00B437C (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CitAllocZero(size_t Size)
{
  PVOID v1; // rsi
  size_t v3; // rdx
  __int64 Pool2; // rbx
  __int64 v6; // rax
  char v7; // bp
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = gpLeakTrackingAllocator;
  v3 = Size;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) != 0x49637355
    || (v6 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, Size);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1231254357 )
  {
    if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  v7 = 0;
  if ( Size < 0x1000 || (Size & 0xFFF) != 0 )
  {
    v7 = 1;
    v3 = Size + 16;
  }
  Pool2 = ExAllocatePool2(260LL, v3);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v7 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v1,
                            Pool2,
                            BackTrace) )
      goto LABEL_4;
    goto LABEL_18;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v1,
                           Pool2,
                           BackTrace) )
  {
LABEL_18:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
  Pool2 += 16LL;
LABEL_3:
  if ( Pool2 )
LABEL_4:
    memset((void *)Pool2, 0, Size);
  return Pool2;
}
