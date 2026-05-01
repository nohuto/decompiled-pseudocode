/*
 * XREFs of SetLastError_0 @ 0x180044ECC
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x180087CF8 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SetLastError_0(DWORD dwErrCode)
{
  SetLastError(dwErrCode);
}
