/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cd118f93320a96821cef0c11a5fb91e6___::Run @ 0x180068CC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_cd118f93320a96821cef0c11a5fb91e6_::operator() @ 0x180068CE8 (_lambda_cd118f93320a96821cef0c11a5fb91e6_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cd118f93320a96821cef0c11a5fb91e6___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_cd118f93320a96821cef0c11a5fb91e6_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
