/*
 * XREFs of SdbInitDatabaseInMemory @ 0x140755900
 * Callers:
 *     KsepSdbMapToMemory @ 0x140755244 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x14077E864 (PiInitializeDDB.c)
 *     PpBootDDBHelper @ 0x1407A4350 (PpBootDDBHelper.c)
 *     KsepSdbBootInitialize @ 0x1407D1DF8 (KsepSdbBootInitialize.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpInitializeMatchers @ 0x140755988 (SdbpInitializeMatchers.c)
 *     SdbCloseDatabaseRead @ 0x1407559FC (SdbCloseDatabaseRead.c)
 *     SdbpOpenDatabaseInMemory @ 0x140755A44 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x14075A888 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  void *v7; // rcx

  v4 = AslAlloc(a1, 1776LL);
  if ( v4 )
  {
    v5 = SdbpOpenDatabaseInMemory(a1, a2);
    *(_QWORD *)(v4 + 8) = v5;
    if ( v5 )
    {
      *(_DWORD *)(v4 + 24) = 1;
      *(_DWORD *)(v4 + 28) = 1;
      *(_DWORD *)(v4 + 56) = 2;
      *(_QWORD *)(v4 + 48) = v5;
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1LL);
    v7 = *(void **)(v4 + 8);
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    ExFreePoolWithTag((PVOID)v4, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
