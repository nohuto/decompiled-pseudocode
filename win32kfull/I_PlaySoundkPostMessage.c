/*
 * XREFs of I_PlaySoundkPostMessage @ 0x1C00D3EFC
 * Callers:
 *     PlaySoundPostMessage @ 0x1C039C3D0 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall I_PlaySoundkPostMessage(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7; // [rsp+38h] [rbp-20h]

  v7 = 0;
  return Ndr64AsyncClientCall((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, a1, a2, a3, a4, v7, &unk_1C0362438);
}
