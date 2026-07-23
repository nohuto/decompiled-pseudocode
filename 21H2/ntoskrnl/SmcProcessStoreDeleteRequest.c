/*
 * XREFs of SmcProcessStoreDeleteRequest @ 0x14092B024
 * Callers:
 *     SmSetStoreInformation @ 0x14061D784 (SmSetStoreInformation.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SmcStoreDelete @ 0x14092DF10 (SmcStoreDelete.c)
 */

__int64 __fastcall SmcProcessStoreDeleteRequest(__int64 a1, __int128 *a2, int a3, char a4)
{
  __int128 v5; // [rsp+20h] [rbp-18h]

  if ( a3 != 16 )
    return 3221225990LL;
  if ( a4 && ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *a2;
  if ( (unsigned __int8)*a2 != 1 || (*(_QWORD *)a2 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  if ( SDWORD2(v5) < 2 )
    return SmcStoreDelete(a1, DWORD1(v5), HIDWORD(*((_QWORD *)&v5 + 1)), DWORD2(v5));
  return 3221225474LL;
}
