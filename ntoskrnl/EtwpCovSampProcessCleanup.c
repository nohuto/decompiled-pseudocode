/*
 * XREFs of EtwpCovSampProcessCleanup @ 0x1409EFCC8
 * Callers:
 *     EtwExitProcess @ 0x1407049EC (EtwExitProcess.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1408A4FD0 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampContextCleanup @ 0x1409EE264 (EtwpCovSampContextCleanup.c)
 *     EtwpCoverageSamplerStop @ 0x1409F08E4 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     EtwpCovSampModuleDereference @ 0x1408A4F50 (EtwpCovSampModuleDereference.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampProcessCleanup(__int64 a1, char a2)
{
  unsigned int i; // r8d
  int v5; // r8d
  __int64 v6; // rdx

  if ( *(_QWORD *)(a1 + 24) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 32); i = v5 + 1 )
      EtwpCovSampModuleDereference(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * i + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0x56777445u);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
  }
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 )
  {
    EtwpCovSampModuleDereference(*(_QWORD *)a1, v6);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( a2 )
      ObfDereferenceObject(**(PVOID **)a1);
    *(_QWORD *)a1 = 0LL;
  }
}
