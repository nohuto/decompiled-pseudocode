/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dfc07bd0e0e493ac674bd395c585ee89___::Run @ 0x18034F760
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_dfc07bd0e0e493ac674bd395c585ee89_::operator() @ 0x18034E49C (_lambda_dfc07bd0e0e493ac674bd395c585ee89_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dfc07bd0e0e493ac674bd395c585ee89___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_dfc07bd0e0e493ac674bd395c585ee89_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
