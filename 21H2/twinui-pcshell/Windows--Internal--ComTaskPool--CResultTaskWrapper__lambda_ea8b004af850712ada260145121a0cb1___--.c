/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ea8b004af850712ada260145121a0cb1___::Run @ 0x180348800
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ea8b004af850712ada260145121a0cb1_::operator() @ 0x180346C90 (_lambda_ea8b004af850712ada260145121a0cb1_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ea8b004af850712ada260145121a0cb1___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ea8b004af850712ada260145121a0cb1_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
