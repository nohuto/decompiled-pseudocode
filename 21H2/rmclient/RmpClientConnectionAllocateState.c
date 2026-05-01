/*
 * XREFs of RmpClientConnectionAllocateState @ 0x18000950C
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x1800095B8 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     HamIpcChannelAllocateState @ 0x180009910 (HamIpcChannelAllocateState.c)
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientConnectionAllocateState(__int64 a1, __int64 a2)
{
  CLIENT_CALL_RETURN result; // rax
  _BYTE v4[8]; // [rsp+48h] [rbp-20h] BYREF

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158B0, 0, 0LL, a1, a2 + 16, v4).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Simple = HamIpcChannelAllocateState(a2 + 24, v4);
    if ( SLODWORD(result.Simple) >= 0 )
      return 0LL;
  }
  return result;
}
