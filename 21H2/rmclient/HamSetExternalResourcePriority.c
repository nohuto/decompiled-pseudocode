/*
 * XREFs of HamSetExternalResourcePriority @ 0x1800117A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamSetExternalResourcePriority(_QWORD *a1, __int64 a2, __int64 a3)
{
  CLIENT_CALL_RETURN result; // rax

  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158E0, 9u, 0LL, *a1, a2, a3).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
