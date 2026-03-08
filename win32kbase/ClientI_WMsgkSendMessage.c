/*
 * XREFs of ClientI_WMsgkSendMessage @ 0x1C0090DFC
 * Callers:
 *     WmsgpPostMessage @ 0x1C0301404 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ClientI_WMsgkSendMessage(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7; // [rsp+38h] [rbp-10h]

  v7 = 0;
  return Ndr64AsyncClientCall((MIDL_STUBLESS_PROXY_INFO *)&stru_1C0278FD0, 0, 0LL, a1, a2, a3, a4, v7);
}
