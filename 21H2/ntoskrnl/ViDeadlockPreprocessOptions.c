/*
 * XREFs of ViDeadlockPreprocessOptions @ 0x140A99A38
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x140A98ACC (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140A98E28 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140A99C74 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140A99E14 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x1405FDF9C (VfUtilDbgPrint.c)
 */

__int64 ViDeadlockPreprocessOptions(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 result; // rax
  unsigned __int64 v9; // rax

  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    v9 = a3 & 0xFFF;
    if ( v9 >= 0xC )
    {
      *a1 = 4;
      goto LABEL_7;
    }
    result = *(unsigned int *)&ViDeadlockDefaultActions[2 * v9];
    *a1 = result;
  }
  if ( !(_DWORD)result )
    return result;
  if ( (result & 0x10) != 0 )
    *a1 = 0;
LABEL_7:
  ViDeadlockIssue = a3;
  qword_140C1A948 = a4;
  qword_140C1A950 = a5;
  qword_140C1A958 = a6;
  VfUtilDbgPrint("************ Verifier Detected a Potential Deadlock *************\n");
  VfUtilDbgPrint("**\n");
  VfUtilDbgPrint("** ");
  if ( a2 )
    DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
  VfUtilDbgPrint("\n");
  VfUtilDbgPrint("**\n");
  return VfUtilDbgPrint("*****************************************************************\n");
}
