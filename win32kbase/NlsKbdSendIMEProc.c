void __fastcall NlsKbdSendIMEProc(unsigned int a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 v5; // r9

  if ( gpqForeground && *(_QWORD *)(gpqForeground + 104) && (ApiSetEditionGetAppImeCompatFlags() & 0x800000) == 0 )
    NlsKbdSendIMENotification(a1, a2, v4, v5);
}
