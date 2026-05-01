/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e510b34b5f630f9aeb424769ab376110___::Run @ 0x18034F4C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e510b34b5f630f9aeb424769ab376110_::operator() @ 0x18034E280 (_lambda_e510b34b5f630f9aeb424769ab376110_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e510b34b5f630f9aeb424769ab376110___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e510b34b5f630f9aeb424769ab376110_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
