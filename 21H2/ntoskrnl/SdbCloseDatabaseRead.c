/*
 * XREFs of SdbCloseDatabaseRead @ 0x1407563CC
 * Callers:
 *     SdbReleaseDatabase @ 0x140756188 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseInMemory @ 0x1407562D0 (SdbInitDatabaseInMemory.c)
 *     SdbpCloseLocalDatabaseEx @ 0x140966958 (SdbpCloseLocalDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1409676E8 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     AslFileMappingDelete @ 0x140756528 (AslFileMappingDelete.c)
 *     AslHashFree @ 0x140968658 (AslHashFree.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SdbCloseDatabaseRead(_QWORD *P)
{
  __int64 v2; // rcx
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx

  v2 = P[330];
  if ( v2 && *(_DWORD *)(v2 + 16) == 1 )
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      ExFreePoolWithTag(*(PVOID *)(v2 + 8), 0x74705041u);
      v2 = P[330];
    }
    if ( v2 )
      ExFreePoolWithTag((PVOID)v2, 0x74705041u);
    P[330] = 0LL;
    v4 = (void *)P[331];
    if ( v4 )
    {
      AslHashFree(v4);
      P[331] = 0LL;
    }
  }
  v3 = *((_DWORD *)P + 6);
  if ( (v3 & 8) != 0 && (v3 & 1) != 0 )
  {
    v5 = (void *)P[1];
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x74705041u);
      P[1] = 0LL;
      *((_DWORD *)P + 5) = 0;
    }
  }
  AslFileMappingDelete((PVOID)*P);
  ExFreePoolWithTag(P, 0x74705041u);
}
