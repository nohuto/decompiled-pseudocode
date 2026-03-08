/*
 * XREFs of KsepSdbBootRelease @ 0x140842AC4
 * Callers:
 *     KseShimDatabaseBootRelease @ 0x140842A14 (KseShimDatabaseBootRelease.c)
 *     KseShimDatabaseBootInitialize @ 0x140B6FF30 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140303C7C (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x14079C878 (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbBootRelease(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    SdbReleaseDatabase(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    KsepPoolFreePaged(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
