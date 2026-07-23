/*
 * XREFs of PopWriteHiberImage @ 0x140994C74
 * Callers:
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 * Callees:
 *     PopGetNextTable @ 0x140383810 (PopGetNextTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopRequestWrite @ 0x140994DB4 (PopRequestWrite.c)
 *     PopAddPagesToCompressedPageSet @ 0x1409953F4 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x14099551C (PopCountDataAsProduced.c)
 *     PopHiberCheckForDebugBreak @ 0x14099581C (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall PopWriteHiberImage(ULONG_PTR BugCheckParameter3, char a2)
{
  __int64 v4; // rbp
  int v5; // esi
  __int64 v6; // rdi
  char v7; // r15
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-198h]
  _DWORD v10[4]; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v11[22]; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v12[128]; // [rsp+100h] [rbp-B8h] BYREF

  memset(v11, 0, sizeof(v11));
  v4 = *(_QWORD *)(BugCheckParameter3 + 264);
  v5 = 0;
  v10[0] = 0;
  v6 = 0LL;
  do
  {
    PopHiberCheckForDebugBreak();
    v7 = PopRequestWrite(BugCheckParameter3);
    if ( !v6 )
    {
      result = PopGetNextTable(
                 BugCheckParameter3,
                 (unsigned __int64)v10,
                 (__int64)v12,
                 (__int64)v11,
                 a2,
                 *(_QWORD *)(v4 + 8));
      v5 = result;
      if ( !result )
        continue;
      *(_QWORD *)(v4 + 56) += result;
      LOBYTE(v9) = a2;
      v6 = PopAddPagesToCompressedPageSet(BugCheckParameter3, v4, v10, v11[3], v9, result, PopCompressCallback);
    }
    result = PopCountDataAsProduced(v4, v6, v10, v12, v5, 1);
    if ( (_BYTE)result )
      v6 = 0LL;
  }
  while ( !v7 );
  return result;
}
