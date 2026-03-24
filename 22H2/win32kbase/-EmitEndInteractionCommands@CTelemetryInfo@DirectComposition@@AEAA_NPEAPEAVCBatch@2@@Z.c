/*
 * XREFs of ?EmitEndInteractionCommands@CTelemetryInfo@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00655F4
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C005EE20 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0063BD8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CTelemetryInfo::EmitEndInteractionCommands(
        DirectComposition::CTelemetryInfo *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v2; // rbx
  bool v4; // zf
  _QWORD *v6; // rcx
  __int64 v7; // rax
  char *v8; // rdx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v2 = (char *)this + 32;
  while ( 1 )
  {
    v4 = *(_QWORD *)v2 == (_QWORD)v2;
    if ( *(char **)v2 == v2 )
      break;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v9) )
      return *(_QWORD *)v2 == (_QWORD)v2;
    v6 = *(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v2 = v7;
    *(_QWORD *)(v7 + 8) = v2;
    v8 = (char *)v9;
    *(_DWORD *)v9 = 20;
    *((_DWORD *)v8 + 1) = 293;
    *(_QWORD *)(v8 + 12) = v6[2];
    Win32FreePool((__int64)v6);
  }
  return v4;
}
