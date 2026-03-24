/*
 * XREFs of CmCheckNoTxContext @ 0x1406E83F0
 * Callers:
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 *     NtSaveKeyEx @ 0x140729810 (NtSaveKeyEx.c)
 *     NtCompactKeys @ 0x140868050 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140868330 (NtCompressKey.c)
 *     NtReplaceKey @ 0x140869190 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140869520 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1408697F0 (NtSaveMergedKeys.c)
 * Callees:
 *     <none>
 */

__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  result = TmCurrentTransaction(&v1);
  if ( (_DWORD)result != -1073741637 )
  {
    if ( (int)result < 0 )
      return result;
    if ( v1 )
      return 3222863873LL;
  }
  return 0LL;
}
