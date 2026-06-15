/*
 * XREFs of wil::details::lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___::_lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___ @ 0x1400464CC
 * Callers:
 *     _CPipeInstance::ActivateAPOs_::_1_::dtor$0 @ 0x14002C6E0 (_CPipeInstance--ActivateAPOs_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_d6c91c141caa9023ad6869a8fc78e301_::operator() @ 0x1400464EC (_lambda_d6c91c141caa9023ad6869a8fc78e301_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___::_lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_d6c91c141caa9023ad6869a8fc78e301_::operator()();
  }
  return result;
}
