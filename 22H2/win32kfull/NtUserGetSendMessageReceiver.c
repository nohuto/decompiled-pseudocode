/*
 * XREFs of NtUserGetSendMessageReceiver @ 0x1C01D3DE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetSendMessageReceiver @ 0x1C01FBCC4 (_GetSendMessageReceiver.c)
 */

__int64 __fastcall NtUserGetSendMessageReceiver(unsigned int a1)
{
  __int64 *SendMessageReceiver; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx

  EnterCrit(0LL, 0LL);
  SendMessageReceiver = (__int64 *)GetSendMessageReceiver(a1);
  v7 = 0LL;
  if ( SendMessageReceiver )
    v7 = *SendMessageReceiver;
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
