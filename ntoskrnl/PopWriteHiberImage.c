/*
 * XREFs of PopWriteHiberImage @ 0x140AA272C
 * Callers:
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopGetNextTable @ 0x14058C744 (PopGetNextTable.c)
 *     PopAddPagesToCompressedPageSet @ 0x140A9E7C4 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x140A9EFB4 (PopCountDataAsProduced.c)
 *     PopHiberCheckForDebugBreak @ 0x140A9FCE4 (PopHiberCheckForDebugBreak.c)
 *     PopRequestWrite @ 0x140AA0E40 (PopRequestWrite.c)
 */

char __fastcall PopWriteHiberImage(ULONG_PTR BugCheckParameter3, char a2)
{
  void *v4; // r13
  __int64 v5; // rbp
  int v6; // esi
  void *v7; // rdi
  char v8; // r15
  __int64 NextTable; // rax
  unsigned int v11[4]; // [rsp+40h] [rbp-178h] BYREF
  const void *v12[22]; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v13[128]; // [rsp+100h] [rbp-B8h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = qword_140C3CAF8;
  v5 = *(_QWORD *)(BugCheckParameter3 + 264);
  v6 = 0;
  v11[0] = 0;
  v7 = 0LL;
  do
  {
    PopHiberCheckForDebugBreak();
    v8 = PopRequestWrite(BugCheckParameter3, (__int64)v4, 1);
    if ( !v7 )
    {
      NextTable = PopGetNextTable(BugCheckParameter3, v11, (__int64)v13, (__int64)v12, a2, *(_QWORD *)(v5 + 8));
      v6 = NextTable;
      if ( !NextTable )
        continue;
      *(_QWORD *)(v5 + 56) += NextTable;
      v7 = (void *)PopAddPagesToCompressedPageSet(
                     BugCheckParameter3,
                     v5,
                     v11,
                     v12[3],
                     a2,
                     NextTable,
                     (__int64)PopCompressCallback);
    }
    LOBYTE(NextTable) = PopCountDataAsProduced(v5, v7, v11, v13, v6, 1u);
    if ( (_BYTE)NextTable )
      v7 = 0LL;
  }
  while ( !v8 );
  return NextTable;
}
