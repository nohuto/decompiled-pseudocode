/*
 * XREFs of ?EmitBeginInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00911C8
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

char __fastcall DirectComposition::CTelemetryInfo::EmitBeginInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char v2; // di
  DirectComposition::CTelemetryInfo *v6; // rdx
  __int64 v7; // rax
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  char *v9; // rax
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    if ( *(DirectComposition::CTelemetryInfo **)this == this )
      return 1;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x44uLL, &v10) )
      break;
    v6 = *(DirectComposition::CTelemetryInfo **)this;
    if ( *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)this + 8LL) != this
      || (v7 = *(_QWORD *)v6, *(DirectComposition::CTelemetryInfo **)(*(_QWORD *)v6 + 8LL) != v6) )
    {
      __fastfail(3u);
    }
    v8 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
    *(_QWORD *)this = v7;
    *(_QWORD *)(v7 + 8) = this;
    v9 = (char *)v10;
    *(_DWORD *)v10 = 68;
    *((_DWORD *)v9 + 1) = 285;
    *(_OWORD *)(v9 + 12) = *((_OWORD *)v6 + 1);
    *(_OWORD *)(v9 + 28) = *((_OWORD *)v6 + 2);
    *(_OWORD *)(v9 + 44) = *((_OWORD *)v6 + 3);
    *(_QWORD *)(v9 + 60) = *((_QWORD *)v6 + 8);
    NSInstrumentation::CLeakTrackingAllocator::Free(v8, (char *)v6);
  }
  if ( *(DirectComposition::CTelemetryInfo **)this == this )
    return 1;
  return v2;
}
