/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a593a494a4aebc1c108e45eda2022239___::Run @ 0x18034F5F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a593a494a4aebc1c108e45eda2022239_::operator() @ 0x18034D9BC (_lambda_a593a494a4aebc1c108e45eda2022239_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a593a494a4aebc1c108e45eda2022239___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a593a494a4aebc1c108e45eda2022239_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
