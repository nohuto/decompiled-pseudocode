/*
 * XREFs of CmpSearchKeyControlBlockTree @ 0x14086F204
 * Callers:
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406852C0 (CmKeyBodyReplicateToVirtual.c)
 *     CmpRefreshHive @ 0x14087D448 (CmpRefreshHive.c)
 * Callees:
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F224 (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpSearchKeyControlBlockTree(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 1;
  return CmpSearchKeyControlBlockTreeEx(a1, a2, a3, 0LL, v4);
}
