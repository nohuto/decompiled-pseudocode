__int64 __fastcall NtUserNlsKbdSendIMENotification(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (unsigned __int8)NlsKbdSendIMENotification(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
