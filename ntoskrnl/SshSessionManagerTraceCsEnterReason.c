/*
 * XREFs of SshSessionManagerTraceCsEnterReason @ 0x140879D58
 * Callers:
 *     PopSleepstudyCaptureSessionStatistics @ 0x140879704 (PopSleepstudyCaptureSessionStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408717B8 (SshpSessionManagerSendControlEvent.c)
 */

signed __int32 __fastcall SshSessionManagerTraceCsEnterReason(__int64 a1)
{
  _QWORD v2[10]; // [rsp+20h] [rbp-60h] BYREF

  v2[1] = 4LL;
  v2[0] = a1 + 32;
  v2[3] = 4LL;
  v2[2] = a1 + 40;
  v2[5] = 4LL;
  v2[4] = a1 + 48;
  v2[6] = a1 + 8;
  v2[7] = 8LL;
  v2[8] = 0xFFFFF780000002C4uLL;
  v2[9] = 4LL;
  return SshpSessionManagerSendControlEvent((__int64)SLEEPSTUDY_EVT_CS_ENTER_REASON_CONTROL_EVENT, 5u, (__int64)v2);
}
