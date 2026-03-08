/*
 * XREFs of EtwpCovSampModuleCleanup @ 0x1409EF8C8
 * Callers:
 *     EtwpCovSampContextPruneModules @ 0x1408A4560 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextGetModule @ 0x1409EE4AC (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1409EF334 (EtwpCovSampContextRemoveAndFreeModule.c)
 * Callees:
 *     EtwpCovSampModuleNameInfoCleanup @ 0x1409EFA24 (EtwpCovSampModuleNameInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampModuleCleanup(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx

  v2 = (_QWORD *)(a1 + 104);
  if ( *v2 )
  {
    EtwpCovSampModuleNameInfoCleanup(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_WORD *)(a1 + 120) = 0;
  }
  v3 = *(void **)(a1 + 48);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_DWORD *)(a1 + 56) = 0;
  }
}
