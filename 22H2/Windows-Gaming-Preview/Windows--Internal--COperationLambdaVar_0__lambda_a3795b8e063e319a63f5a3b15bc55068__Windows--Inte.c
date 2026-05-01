/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_a3795b8e063e319a63f5a3b15bc55068__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x1800316C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a3795b8e063e319a63f5a3b15bc55068_::operator() @ 0x18002A1A8 (_lambda_a3795b8e063e319a63f5a3b15bc55068_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_a3795b8e063e319a63f5a3b15bc55068__Windows::Internal::CBasicResult_unsigned_char_0___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_a3795b8e063e319a63f5a3b15bc55068_::operator()((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
