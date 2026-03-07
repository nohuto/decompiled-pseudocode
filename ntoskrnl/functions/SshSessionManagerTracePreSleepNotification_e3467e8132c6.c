signed __int32 __fastcall SshSessionManagerTracePreSleepNotification(int a1, int a2, int a3, int a4, char a5)
{
  _QWORD v6[10]; // [rsp+20h] [rbp-60h] BYREF
  int v7; // [rsp+90h] [rbp+10h] BYREF
  int v8; // [rsp+98h] [rbp+18h] BYREF
  int v9; // [rsp+A0h] [rbp+20h] BYREF
  int v10; // [rsp+A8h] [rbp+28h] BYREF

  v10 = a4;
  v9 = a3;
  v8 = a2;
  v7 = a1;
  v6[1] = 4LL;
  v6[0] = &v7;
  v6[3] = 4LL;
  v6[2] = &v8;
  v6[5] = 4LL;
  v6[4] = &v9;
  v6[7] = 4LL;
  v6[6] = &v10;
  v6[8] = &a5;
  v6[9] = 4LL;
  return SshpSessionManagerSendControlEvent(
           (__int64)SLEEPSTUDY_EVT_PRE_SLEEP_NOTIFICATION_CONTROL_EVENT,
           5u,
           (__int64)v6);
}
