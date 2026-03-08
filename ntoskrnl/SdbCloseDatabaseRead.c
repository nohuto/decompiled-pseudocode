/*
 * XREFs of SdbCloseDatabaseRead @ 0x14079CA28
 * Callers:
 *     SdbReleaseDatabase @ 0x14079C878 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x14079CFC8 (SdbInitDatabaseInMemory.c)
 *     SdbpCloseLocalDatabaseEx @ 0x140A4F7D4 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A505A8 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     AslFileMappingDelete @ 0x1407A1D38 (AslFileMappingDelete.c)
 *     AslHashFree @ 0x140A5400C (AslHashFree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SdbCloseDatabaseRead(_QWORD *P)
{
  __int64 v1; // rax
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v1 = P[330];
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v4 = *(void **)(v1 + 8);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x74705041u);
    v5 = (void *)P[330];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x74705041u);
    P[330] = 0LL;
    v6 = (void *)P[331];
    if ( v6 )
    {
      AslHashFree(v6);
      P[331] = 0LL;
    }
  }
  v3 = *((_DWORD *)P + 6);
  if ( (v3 & 8) != 0 && (v3 & 1) != 0 )
  {
    v7 = (void *)P[1];
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x74705041u);
      P[1] = 0LL;
      *((_DWORD *)P + 5) = 0;
    }
  }
  AslFileMappingDelete((PVOID)*P);
  ExFreePoolWithTag(P, 0x74705041u);
}
