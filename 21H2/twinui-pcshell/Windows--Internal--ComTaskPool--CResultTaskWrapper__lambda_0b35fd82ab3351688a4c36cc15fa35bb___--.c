/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0b35fd82ab3351688a4c36cc15fa35bb___::Run @ 0x18006D220
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0b35fd82ab3351688a4c36cc15fa35bb_::operator() @ 0x18006D248 (_lambda_0b35fd82ab3351688a4c36cc15fa35bb_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0b35fd82ab3351688a4c36cc15fa35bb___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_0b35fd82ab3351688a4c36cc15fa35bb_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
