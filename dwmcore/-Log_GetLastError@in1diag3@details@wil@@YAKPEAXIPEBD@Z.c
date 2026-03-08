/*
 * XREFs of ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x1802005F4
 * Callers:
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801FF518 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x1801FEDBC (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_GetLastError(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastError<2>(this, a2, a3, a4, v5, retaddr);
}
