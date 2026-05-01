/*
 * XREFs of CAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___::_scalar_deleting_destructor_ @ 0x180391E60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180391D30 (_lambda_beeaa99da247ec9f188a411312d86a25_--__lambda_beeaa99da247ec9f188a411312d86a25_.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_beeaa99da247ec9f188a411312d86a25_::__lambda_beeaa99da247ec9f188a411312d86a25_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
