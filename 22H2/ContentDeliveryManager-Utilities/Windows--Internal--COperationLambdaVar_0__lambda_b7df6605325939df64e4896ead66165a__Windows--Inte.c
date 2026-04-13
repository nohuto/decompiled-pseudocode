/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_b7df6605325939df64e4896ead66165a__Windows::Internal::CNoResult_::Run @ 0x180056C80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x180053F3C (_lambda_b7df6605325939df64e4896ead66165a_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_b7df6605325939df64e4896ead66165a__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_b7df6605325939df64e4896ead66165a_::operator()((__int64 *)(a1 + 8));
  return (unsigned int)a3;
}
