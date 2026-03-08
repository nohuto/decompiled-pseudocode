/*
 * XREFs of ?THREAD_CODEPAGE@@YAGXZ @ 0x1C0207F9C
 * Callers:
 *     SfnIMECONTROL @ 0x1C0209610 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C024EA38 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C024EB88 (RtlWCSMessageWParamCharToMB.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 THREAD_CODEPAGE(void)
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 152LL);
}
