/*
 * XREFs of _lambda_853903f4a8935f92af3ddbe6242dc426_::_lambda_invoker_cdecl_ @ 0x1C017D5A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMEndAllActiveContacts @ 0x1C0191610 (RIMEndAllActiveContacts.c)
 */

__int64 __fastcall lambda_853903f4a8935f92af3ddbe6242dc426_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rbx

  result = *(unsigned int *)(a1 + 84);
  if ( (result & 0x14) != 0 )
  {
    for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      result = *(unsigned int *)(i + 200);
      if ( (result & 0x80u) != 0LL && (*(_DWORD *)(i + 184) & 0x2000) != 0 )
        result = RIMEndAllActiveContacts(a1, *(_QWORD *)(i + 472), 0LL);
    }
  }
  return result;
}
