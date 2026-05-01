/*
 * XREFs of _lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180391B10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b_____lambda_059f0bb852b04a019df9882956e1093b___ @ 0x18039184C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___--CTaskW.c)
 *     CreateAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___ @ 0x1803918B4 (CreateAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x180391938 (CreationThreadDispatcher--RunAsync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 *     CreationThreadDispatcher::RunSync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x180391A18 (CreationThreadDispatcher--RunSync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = __abi_winrt_ptr_ctor(*a2);
  a1[1] = __abi_winrt_ptr_ctor(a2[1]);
  a1[2] = __abi_winrt_ptr_ctor(a2[2]);
  return a1;
}
