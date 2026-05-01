/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a59ec4bf685348192e83918abe4353ce___::Run @ 0x1800810E0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a59ec4bf685348192e83918abe4353ce_::operator() @ 0x180081108 (_lambda_a59ec4bf685348192e83918abe4353ce_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a59ec4bf685348192e83918abe4353ce___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a59ec4bf685348192e83918abe4353ce_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
