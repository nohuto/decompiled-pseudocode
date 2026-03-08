/*
 * XREFs of ViThunkFindAllSpecialTables @ 0x140AD8890
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140AD8160 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140AD8EC8 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ViThunkFindNextSpecialTable @ 0x140AD8A68 (ViThunkFindNextSpecialTable.c)
 */

_QWORD *__fastcall ViThunkFindAllSpecialTables(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 NextSpecialTable; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rsi

  v2 = a2;
  NextSpecialTable = ViThunkFindNextSpecialTable(a1, a2);
  if ( !NextSpecialTable )
    return 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * (unsigned int)(ViVerifierSpecialThunkTables + 1), 0x74566D4Du);
  v6 = Pool2;
  if ( !Pool2 )
    return 0LL;
  memset(Pool2, 0, 8LL * (unsigned int)(ViVerifierSpecialThunkTables + 1));
  v7 = 0LL;
  do
  {
    v6[v7] = NextSpecialTable;
    v7 = (unsigned int)(v7 + 1);
    NextSpecialTable = ViThunkFindNextSpecialTable(a1, v2);
  }
  while ( NextSpecialTable );
  return v6;
}
