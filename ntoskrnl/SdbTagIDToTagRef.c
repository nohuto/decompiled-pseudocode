/*
 * XREFs of SdbTagIDToTagRef @ 0x1408003AC
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14079E090 (SdbGetDatabaseMatch.c)
 *     SdbGetDatabaseMatchEx @ 0x1407A1A40 (SdbGetDatabaseMatchEx.c)
 *     SdbGetKShimTagRef @ 0x14080030C (SdbGetKShimTagRef.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpFindLocalDatabaseByPDB @ 0x140800400 (SdbpFindLocalDatabaseByPDB.c)
 */

__int64 __fastcall SdbTagIDToTagRef(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // esi
  int v6; // ebx
  __int64 result; // rax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = -1;
  v5 = a3;
  v6 = 0;
  if ( (unsigned int)SdbpFindLocalDatabaseByPDB(a1, a2, a3, v8) )
  {
    result = 1LL;
    v6 = v5 | (v8[0] << 28);
  }
  else
  {
    AslLogCallPrintf(1LL);
    result = 0LL;
  }
  *a4 = v6;
  return result;
}
