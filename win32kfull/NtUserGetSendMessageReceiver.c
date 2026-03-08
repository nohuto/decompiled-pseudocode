/*
 * XREFs of NtUserGetSendMessageReceiver @ 0x1C01D4E10
 * Callers:
 *     <none>
 * Callees:
 *     _GetSendMessageReceiver @ 0x1C01FE844 (_GetSendMessageReceiver.c)
 */

__int64 __fastcall NtUserGetSendMessageReceiver(unsigned int a1)
{
  __int64 *SendMessageReceiver; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  EnterCrit(0LL, 0LL);
  SendMessageReceiver = (__int64 *)GetSendMessageReceiver(a1);
  v4 = 0LL;
  if ( SendMessageReceiver )
    v4 = *SendMessageReceiver;
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
