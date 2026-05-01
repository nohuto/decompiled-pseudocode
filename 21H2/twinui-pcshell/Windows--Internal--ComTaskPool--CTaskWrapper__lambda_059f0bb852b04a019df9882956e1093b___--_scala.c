/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___::_scalar_deleting_destructor_ @ 0x180392180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180258060 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180392000 (_lambda_beeaa99da247ec9f188a411312d86a25_--__lambda_beeaa99da247ec9f188a411312d86a25_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_059f0bb852b04a019df9882956e1093b___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 5);
  lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
