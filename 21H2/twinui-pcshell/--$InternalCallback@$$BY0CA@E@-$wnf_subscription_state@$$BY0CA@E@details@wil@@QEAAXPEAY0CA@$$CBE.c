/*
 * XREFs of ??$InternalCallback@$$BY0CA@E@?$wnf_subscription_state@$$BY0CA@E@details@wil@@QEAAXPEAY0CA@$$CBEK@Z @ 0x1800CDDC4
 * Callers:
 *     _lambda_024856d2eaa26e7e4864a7fffc39e281_::_lambda_invoker_cdecl_ @ 0x1800CD8B0 (_lambda_024856d2eaa26e7e4864a7fffc39e281_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801AD214 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1801B07DC (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::details::wnf_subscription_state<unsigned char [32]>::InternalCallback<unsigned char [32]>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // rcx
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 32 )
    return wil::details::in1diag3::Log_HrMsg(
             retaddr,
             (void *)0x391,
             (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
             (const char *)0x8000FFFFLL,
             (int)"Inconsistent state data size in WNF callback",
             v5);
  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
}
