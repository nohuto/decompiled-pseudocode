/*
 * XREFs of ViCiPreprocessOptions @ 0x140AC09DC
 * Callers:
 *     VfCheckImageCompliance @ 0x140AC049C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140AC07A0 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140AC0848 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140AC08F0 (VfCheckPoolType.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x1405CBEB4 (VfUtilDbgPrint.c)
 */

__int64 ViCiPreprocessOptions(_DWORD *a1, const char *a2, char a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  __int64 result; // rax
  unsigned __int64 v9; // r8

  result = (unsigned int)*a1;
  if ( (_DWORD)result == -1 )
  {
    v9 = a3 & 0xF;
    if ( v9 >= 6 )
    {
      *a1 = 4;
      goto LABEL_7;
    }
    result = *((unsigned int *)&ViCiDefaultActions + v9);
    *a1 = result;
  }
  if ( !(_DWORD)result )
    return result;
  if ( (result & 0x10) != 0 )
    *a1 = 0;
LABEL_7:
  VfUtilDbgPrint("*********** Verifier Detected a Code Integrity Issue ************\n");
  VfUtilDbgPrint("**\n");
  VfUtilDbgPrint("** ");
  if ( a2 )
    DbgPrintEx(0x65u, 0, a2, a4, a5, a6);
  VfUtilDbgPrint("\n");
  VfUtilDbgPrint("**\n");
  return VfUtilDbgPrint("*****************************************************************\n");
}
