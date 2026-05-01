/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_81e3c8451e228d4fd60ffb73bc18bf42___::Run @ 0x18034B5A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_81e3c8451e228d4fd60ffb73bc18bf42_::operator() @ 0x18034B258 (_lambda_81e3c8451e228d4fd60ffb73bc18bf42_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_81e3c8451e228d4fd60ffb73bc18bf42___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_81e3c8451e228d4fd60ffb73bc18bf42_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
