/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_195f040505ee80ab9bd0c27fbd97ae40___::Run @ 0x180025680
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_195f040505ee80ab9bd0c27fbd97ae40_::operator() @ 0x1800256A8 (_lambda_195f040505ee80ab9bd0c27fbd97ae40_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_195f040505ee80ab9bd0c27fbd97ae40___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_195f040505ee80ab9bd0c27fbd97ae40_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
