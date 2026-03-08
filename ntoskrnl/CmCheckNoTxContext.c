/*
 * XREFs of CmCheckNoTxContext @ 0x1406BD098
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x140A0A710 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140A0A9E0 (NtCompressKey.c)
 *     NtReplaceKey @ 0x140A0B850 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140A0BBB0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140A0BF70 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x140A0C200 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  result = TmCurrentTransaction(&v1);
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  if ( (int)result >= 0 )
    return v1 != 0 ? 0xC0190001 : 0;
  return result;
}
