/*
 * XREFs of SdbInitDatabaseInMemory @ 0x14079CFC8
 * Callers:
 *     PiInitializeDDB @ 0x14079CD80 (PiInitializeDDB.c)
 *     KsepSdbMapToMemory @ 0x14079D24C (KsepSdbMapToMemory.c)
 *     PpBootDDBHelper @ 0x14081D504 (PpBootDDBHelper.c)
 *     KsepSdbBootInitialize @ 0x14085E0A8 (KsepSdbBootInitialize.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbCloseDatabaseRead @ 0x14079CA28 (SdbCloseDatabaseRead.c)
 *     SdbpInitializeMatchers @ 0x14079CF54 (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x14079D050 (SdbpOpenDatabaseInMemory.c)
 *     AslAlloc @ 0x1407A32E8 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v7; // rcx

  v4 = AslAlloc(a1, 1784LL);
  if ( v4 )
  {
    v5 = SdbpOpenDatabaseInMemory(a1, a2, 0LL);
    *(_QWORD *)(v4 + 8) = v5;
    if ( v5 )
    {
      *(_DWORD *)(v4 + 32) = 1;
      *(_DWORD *)(v4 + 36) = 1;
      *(_DWORD *)(v4 + 64) = 2;
      *(_QWORD *)(v4 + 56) = v5;
      *(_OWORD *)(v4 + 40) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1LL);
    v7 = *(_QWORD **)(v4 + 8);
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
