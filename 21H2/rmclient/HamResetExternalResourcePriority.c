/*
 * XREFs of HamResetExternalResourcePriority @ 0x180011500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamResetExternalResourcePriority(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  CLIENT_CALL_RETURN result; // rax
  int v4; // [rsp+28h] [rbp-20h]

  v4 = a3;
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158E0, 0xAu, 0LL, *a1, a2, v4).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
