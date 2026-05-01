/*
 * XREFs of wil::details::lambda_call__lambda_83a37ce19c61df11147dc746175e45d2___::_lambda_call__lambda_83a37ce19c61df11147dc746175e45d2___ @ 0x1801D7250
 * Callers:
 *     _MoveTryPositionPropertiesToPropertySet_::_1_::dtor$0 @ 0x180172478 (_MoveTryPositionPropertiesToPropertySet_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_83a37ce19c61df11147dc746175e45d2_::operator() @ 0x1801D7A1C (_lambda_83a37ce19c61df11147dc746175e45d2_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_83a37ce19c61df11147dc746175e45d2___::_lambda_call__lambda_83a37ce19c61df11147dc746175e45d2___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_83a37ce19c61df11147dc746175e45d2_::operator()(a1);
  }
  return result;
}
