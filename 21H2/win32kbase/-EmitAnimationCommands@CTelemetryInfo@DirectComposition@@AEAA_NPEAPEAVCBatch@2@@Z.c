/*
 * XREFs of ?EmitAnimationCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0091288
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

char __fastcall DirectComposition::CTelemetryInfo::EmitAnimationCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rdi
  char v4; // si
  char *v5; // rbx
  __int64 v7; // rax
  char *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)this + 48;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(char **)v3;
    if ( *(char **)v3 == v3 )
      return 1;
    v9 = 0LL;
    if ( *((char **)v5 + 1) != v3 )
      goto LABEL_9;
    v7 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
      goto LABEL_9;
    *(_QWORD *)v3 = v7;
    *(_QWORD *)(v7 + 8) = v3;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, *((unsigned int *)v5 + 4), &v9) )
      break;
    memmove(v9, v5 + 20, *((unsigned int *)v5 + 4));
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
  }
  v8 = *(char **)v3;
  if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
LABEL_9:
    __fastfail(3u);
  *(_QWORD *)v5 = v8;
  *((_QWORD *)v5 + 1) = v3;
  *((_QWORD *)v8 + 1) = v5;
  *(_QWORD *)v3 = v5;
  return v4;
}
