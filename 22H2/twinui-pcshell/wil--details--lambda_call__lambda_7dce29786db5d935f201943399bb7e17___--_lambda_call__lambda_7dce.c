/*
 * XREFs of wil::details::lambda_call__lambda_7dce29786db5d935f201943399bb7e17___::_lambda_call__lambda_7dce29786db5d935f201943399bb7e17___ @ 0x18009C2D4
 * Callers:
 *     __lambda_841554dac235e76a966632a629acea57_::operator()_::_1_::dtor$0 @ 0x18009C639 (__lambda_841554dac235e76a966632a629acea57_--operator()_--_1_--dtor$0.c)
 *     __lambda_9b5424b1010544f2b98d3b56c8ee7c3a_::operator()_::_1_::dtor$0 @ 0x18009C6F1 (__lambda_9b5424b1010544f2b98d3b56c8ee7c3a_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_7dce29786db5d935f201943399bb7e17___::_lambda_call__lambda_7dce29786db5d935f201943399bb7e17___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 340) = 0;
  }
  return result;
}
