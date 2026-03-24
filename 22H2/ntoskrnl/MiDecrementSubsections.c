/*
 * XREFs of MiDecrementSubsections @ 0x140295740
 * Callers:
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MmPurgeSection @ 0x140238510 (MmPurgeSection.c)
 *     MiDeletePartialVad @ 0x14027DF5C (MiDeletePartialVad.c)
 *     MiFlushRelease @ 0x140295690 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x140295C70 (MiAddViewsForSection.c)
 *     MiReleaseFaultCharges @ 0x14032243C (MiReleaseFaultCharges.c)
 *     MiDecrementSubsection @ 0x140325E50 (MiDecrementSubsection.c)
 *     MiUpControlAreaRefs @ 0x14052AAB0 (MiUpControlAreaRefs.c)
 *     MiUpdateActiveSubsection @ 0x14053CE20 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1402957F0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x1402F5120 (MiInsertUnusedSubsection.c)
 */

__int64 __fastcall MiDecrementSubsections(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // ecx

  v5 = BugCheckParameter2;
  v6 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)BugCheckParameter2 + 64LL);
  do
  {
    if ( *(_QWORD *)(v5 + 8) )
    {
      v6 += MiDecrementSubsectionViewCount(v5);
      if ( v7 )
      {
        if ( !*(_QWORD *)(v5 + 96) && (*(_BYTE *)(v5 + 34) & 1) == 0 )
          v6 += MiInsertUnusedSubsection(v5);
      }
    }
    if ( v5 == a2 )
      break;
    v5 = *(_QWORD *)(v5 + 16);
    v8 = a3 & 0xFFFFFFF7;
    if ( v7 )
      v8 = a3;
    a3 = v8;
  }
  while ( v5 );
  return v6;
}
