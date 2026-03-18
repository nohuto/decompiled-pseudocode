/*
 * XREFs of ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C00A5E10
 * Callers:
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C00A5814 (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00A58B0 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C02404A4 (-CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall CitpStringDuplicate(unsigned __int16 **a1, const unsigned __int16 *a2, __int64 a3)
{
  PVOID v5; // rdi
  size_t v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 Pool2; // rbx
  __int64 v10; // rax
  char v11; // bp
  signed __int32 v12[8]; // [rsp+0h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  if ( !a2 || !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  v5 = gpLeakTrackingAllocator;
  v6 = 2 * a3;
  v7 = 2 * a3 + 2;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x49637355) != 0x49637355
    || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, v7);
    goto LABEL_5;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1231254357 )
  {
    if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_4;
  }
  v11 = 0;
  if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
  {
    v11 = 1;
    v7 = v6 + 18;
  }
  Pool2 = ExAllocatePool2(260LL, v7);
  if ( !Pool2 )
    return 3221225626LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v11 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v5,
                            Pool2,
                            BackTrace) )
      goto LABEL_6;
    goto LABEL_23;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v5,
                           Pool2,
                           BackTrace) )
  {
LABEL_23:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 3221225626LL;
  }
  Pool2 += 16LL;
LABEL_5:
  if ( Pool2 )
  {
LABEL_6:
    *a1 = (unsigned __int16 *)Pool2;
    _InterlockedOr(v12, 0);
    memmove((void *)Pool2, a2, v6);
    *(_WORD *)(v6 + Pool2) = 0;
    return 0LL;
  }
  return 3221225626LL;
}
