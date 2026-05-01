/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6f7d8edcc79332d2588e530a2e25d22f___::Run @ 0x18034F590
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6f7d8edcc79332d2588e530a2e25d22f_::operator() @ 0x18034D75C (_lambda_6f7d8edcc79332d2588e530a2e25d22f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6f7d8edcc79332d2588e530a2e25d22f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6f7d8edcc79332d2588e530a2e25d22f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
