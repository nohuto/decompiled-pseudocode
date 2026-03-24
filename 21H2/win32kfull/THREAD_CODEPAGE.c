/*
 * XREFs of THREAD_CODEPAGE @ 0x1C0230DD0
 * Callers:
 *     RtlWCSMessageWParamCharToMB @ 0x1C012DA10 (RtlWCSMessageWParamCharToMB.c)
 *     SfnIMECONTROL @ 0x1C02295E0 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025DA60 (RtlMBMessageWParamCharToWCS.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 THREAD_CODEPAGE()
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 152LL);
}
