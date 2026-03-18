/*
 * XREFs of SdbReleaseDatabase @ 0x1406E0A70
 * Callers:
 *     PiReleaseDDB @ 0x1406E09A4 (PiReleaseDDB.c)
 *     KsepSdbUnmapFromMemory @ 0x1406E09F8 (KsepSdbUnmapFromMemory.c)
 *     KsepSdbBootRelease @ 0x14084DC30 (KsepSdbBootRelease.c)
 *     PpReleaseBootDDB @ 0x14084DC6C (PpReleaseBootDDB.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x1406E0BB8 (SdbCloseDatabaseRead.c)
 *     SdbpCleanupLocalDatabaseSupport @ 0x1406E0C00 (SdbpCleanupLocalDatabaseSupport.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SdbReleaseDatabase(PVOID P)
{
  void *v2; // rcx
  _QWORD **v3; // r8

  AslLogCallPrintf(3, (unsigned int)"SdbReleaseDatabase", 83, (unsigned int)"Enter.");
  if ( *((_DWORD *)P + 376) )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)P + 189) + 1512LL)) < 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)P + 189) + 1512LL));
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbReleaseDatabase",
        100,
        (unsigned int)"SDB Handle count was decremented after zero.");
    }
    goto LABEL_8;
  }
  if ( *((int *)P + 378) <= 0 )
  {
    SdbpCleanupLocalDatabaseSupport(P);
    if ( (*((_DWORD *)P + 30) & 2) != 0 )
      SdbCloseDatabaseRead(*((PVOID *)P + 14));
    v2 = (void *)*((_QWORD *)P + 1);
    if ( v2 )
      SdbCloseDatabaseRead(v2);
    while ( 1 )
    {
      v3 = (_QWORD **)*((_QWORD *)P + 71);
      if ( !v3 )
        break;
      if ( v3[1] == v3 )
      {
        *((_QWORD *)P + 71) = 0LL;
      }
      else
      {
        *((_QWORD *)P + 71) = *v3;
        *v3[1] = *v3;
        (*v3)[1] = v3[1];
      }
      ExFreePoolWithTag(v3, 0x74705041u);
    }
LABEL_8:
    ExFreePoolWithTag(P, 0x74705041u);
    return;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbReleaseDatabase",
    114,
    (unsigned int)"Attempt to release SDB handle that still has unreleased duplicates.");
}
