/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5a7d4befb2b433e9160200ce3b80eee0___::Run @ 0x180357960
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5a7d4befb2b433e9160200ce3b80eee0_::operator() @ 0x180356144 (_lambda_5a7d4befb2b433e9160200ce3b80eee0_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5a7d4befb2b433e9160200ce3b80eee0___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_5a7d4befb2b433e9160200ce3b80eee0_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
