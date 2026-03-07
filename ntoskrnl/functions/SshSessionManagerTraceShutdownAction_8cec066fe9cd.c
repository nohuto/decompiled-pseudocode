signed __int32 __fastcall SshSessionManagerTraceShutdownAction(int a1, int a2, int a3)
{
  _QWORD v4[6]; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+70h] [rbp+10h] BYREF
  int v6; // [rsp+78h] [rbp+18h] BYREF
  int v7; // [rsp+80h] [rbp+20h] BYREF

  v7 = a3;
  v6 = a2;
  v5 = a1;
  v4[1] = 4LL;
  v4[0] = &v5;
  v4[3] = 4LL;
  v4[2] = &v6;
  v4[5] = 4LL;
  v4[4] = &v7;
  return SshpSessionManagerSendControlEvent((__int64)SLEEPSTUDY_EVT_SHUTDOWN_ACTION_CONTROL_EVENT, 3u, (__int64)v4);
}
