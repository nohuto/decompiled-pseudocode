/*
 * XREFs of THREAD_CODEPAGE @ 0x1C022AA7C
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C014FA38 (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C0223470 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025A63C (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 THREAD_CODEPAGE()
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 152LL);
}
