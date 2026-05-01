/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_a569043095cd2854b0f9a8a791add160__Windows::Internal::CNoResult_::Run @ 0x18003C360
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a569043095cd2854b0f9a8a791add160_::operator() @ 0x18003BAE0 (_lambda_a569043095cd2854b0f9a8a791add160_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_a569043095cd2854b0f9a8a791add160__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_a569043095cd2854b0f9a8a791add160_::operator()((__int64 *)(a1 + 8));
  return (unsigned int)a3;
}
