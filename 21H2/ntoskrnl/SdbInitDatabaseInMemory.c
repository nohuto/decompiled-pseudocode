/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1407ECFCC
 * Callers:
 *     PiInitializeDDB @ 0x1407EC34C (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x1407ECCD0 (KsepSdbMapToMemory.c)
 *     KsepSdbBootInitialize @ 0x1408277FC (KsepSdbBootInitialize.c)
 *     PpBootDDBHelper @ 0x14086172C (PpBootDDBHelper.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x1406E0BB8 (SdbCloseDatabaseRead.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     SdbpInitializeMatchers @ 0x1407ED054 (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x1407ED0C8 (SdbpOpenDatabaseInMemory.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v7; // rcx

  v4 = AslAlloc(a1, 0x5F0uLL);
  if ( v4 )
  {
    v5 = SdbpOpenDatabaseInMemory(a1, a2, 0LL);
    v4[1] = v5;
    if ( v5 )
    {
      *((_DWORD *)v4 + 6) = 1;
      *((_DWORD *)v4 + 7) = 1;
      *((_DWORD *)v4 + 14) = 2;
      v4[6] = v5;
      *((_OWORD *)v4 + 2) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1LL);
    v7 = (_QWORD *)v4[1];
    if ( v7 )
      SdbCloseDatabaseRead(v7);
    ExFreePoolWithTag(v4, 0x74705041u);
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
