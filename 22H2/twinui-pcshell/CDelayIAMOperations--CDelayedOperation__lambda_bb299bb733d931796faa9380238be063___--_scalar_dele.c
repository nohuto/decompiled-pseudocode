/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::_scalar_deleting_destructor_ @ 0x1801B8030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 5);
  *a1 = (__int64)&CDelayIAMOperations::COperation::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
