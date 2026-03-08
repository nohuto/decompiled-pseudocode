/*
 * XREFs of _vsnwprintf @ 0x1C0009B74
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x1C00179A8 (RtlStringVPrintfWorkerW.c)
 *     RtlWideCharArrayVPrintfWorker @ 0x1C0017B24 (RtlWideCharArrayVPrintfWorker.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C0009B94 (_vsnwprintf_l.c)
 */

int __fastcall vsnwprintf(wchar_t *string, unsigned __int64 count, const wchar_t *format, char *ap)
{
  return vsnwprintf_l(string, count, format, 0LL, ap);
}
