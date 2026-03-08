/*
 * XREFs of DpiDbgReportSecondaryData @ 0x1C03A2D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DpiDbgReportSecondaryData(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)a3 <= 0xFC00 )
    return WdDbgReportSecondaryData(a1, a2, a3);
  else
    return 0;
}
