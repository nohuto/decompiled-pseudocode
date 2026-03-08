/*
 * XREFs of SmcProcessStoreDeleteRequest @ 0x1409D5818
 * Callers:
 *     SmSetStoreInformation @ 0x1407990D4 (SmSetStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x14029622C (SmpGetProcessPartition.c)
 *     SmcStoreDelete @ 0x1409D86C8 (SmcStoreDelete.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessStoreDeleteRequest(__int128 *a1, int a2, char a3)
{
  __int64 ProcessPartition; // rax
  __int128 v5; // [rsp+20h] [rbp-18h]

  if ( a2 != 16 )
    return 3221225990LL;
  if ( a3 && ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *a1;
  if ( (unsigned __int8)*a1 != 1 || (v5 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  if ( SDWORD2(v5) >= 2 )
    return 3221225474LL;
  ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  return SmcStoreDelete(ProcessPartition + 2128, DWORD1(v5), HIDWORD(v5), DWORD2(v5));
}
