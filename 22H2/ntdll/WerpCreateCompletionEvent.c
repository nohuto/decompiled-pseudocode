/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800DD8B0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCA00 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCED0 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009DDE0 (ZwCreateEvent.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  return ZwCreateEvent();
}
