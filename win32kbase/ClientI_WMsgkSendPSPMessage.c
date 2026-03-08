/*
 * XREFs of ClientI_WMsgkSendPSPMessage @ 0x1C00D6600
 * Callers:
 *     WmsgpSendPSPMessage @ 0x1C0301E34 (WmsgpSendPSPMessage.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ClientI_WMsgkSendPSPMessage(__int64 a1, __int64 a2, int a3, __int128 *a4)
{
  int v6; // [rsp+38h] [rbp-20h]
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0;
  v7 = *a4;
  return Ndr64AsyncClientCall((MIDL_STUBLESS_PROXY_INFO *)&stru_1C0278FD0, 1u, 0LL, a1, a2, a3, &v7, v6);
}
