/*
 * XREFs of KsepSdbUnmapFromMemory @ 0x14079D1D4
 * Callers:
 *     KseShimDatabaseClose @ 0x14079E25C (KseShimDatabaseClose.c)
 *     KseShimDatabaseOpen @ 0x14079EFB4 (KseShimDatabaseOpen.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     SdbReleaseDatabase @ 0x14079C878 (SdbReleaseDatabase.c)
 */

void __fastcall KsepSdbUnmapFromMemory(__int64 a1)
{
  _QWORD *v2; // rcx
  ULONG_PTR v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    SdbReleaseDatabase(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    MiRemoveFromSystemSpace(v3, 1);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v4 = *(void **)(a1 + 32);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v5 = *(void **)(a1 + 24);
  if ( v5 )
  {
    ZwClose(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v6 = *(void **)(a1 + 16);
  if ( v6 )
  {
    ZwClose(v6);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
