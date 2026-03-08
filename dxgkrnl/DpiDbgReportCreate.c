/*
 * XREFs of DpiDbgReportCreate @ 0x1C03A2D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiDbgReportCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // [rsp+30h] [rbp-18h]

  v7 = 0;
  return WdDbgReportCreate(a1, a2, a3, a4, a5, a6, v7);
}
