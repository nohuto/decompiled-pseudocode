/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f52240dad271c0812b624b082a346308___::Run @ 0x180348560
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f52240dad271c0812b624b082a346308_::operator() @ 0x18034739C (_lambda_f52240dad271c0812b624b082a346308_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f52240dad271c0812b624b082a346308___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f52240dad271c0812b624b082a346308_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
