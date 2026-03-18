/*
 * XREFs of ?THREAD_CODEPAGE@@YAGXZ @ 0x1C02053CC
 * Callers:
 *     SfnIMECONTROL @ 0x1C0206A40 (SfnIMECONTROL.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C024BD78 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C024BEC8 (RtlWCSMessageWParamCharToMB.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

__int64 THREAD_CODEPAGE(void)
{
  return *(unsigned __int16 *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 152LL);
}
