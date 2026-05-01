/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef0987d51b5229fc4d6deb91eeeb244___::Run @ 0x1803486F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8ef0987d51b5229fc4d6deb91eeeb244_::operator() @ 0x180346900 (_lambda_8ef0987d51b5229fc4d6deb91eeeb244_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef0987d51b5229fc4d6deb91eeeb244___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8ef0987d51b5229fc4d6deb91eeeb244_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
