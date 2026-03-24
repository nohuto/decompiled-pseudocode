/*
 * XREFs of ?EmitUpdateInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0065684
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C005EE20 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0063BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitUpdateInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v2; // rbx
  bool v4; // zf
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v8; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (char *)this + 16;
  while ( 1 )
  {
    v4 = *(_QWORD *)v2 == (_QWORD)v2;
    if ( *(char **)v2 == v2 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x64uLL, &v9) )
      return *(_QWORD *)v2 == (_QWORD)v2;
    v6 = *(_QWORD *)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v2 = v7;
    *(_QWORD *)(v7 + 8) = v2;
    v8 = (char *)v9;
    *(_DWORD *)v9 = 100;
    *((_DWORD *)v8 + 1) = 294;
    *(_OWORD *)(v8 + 12) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(v8 + 28) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(v8 + 44) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(v8 + 60) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(v8 + 76) = *(_OWORD *)(v6 + 80);
    *(_QWORD *)(v8 + 92) = *(_QWORD *)(v6 + 96);
    Win32FreePool(v6);
  }
  return v4;
}
