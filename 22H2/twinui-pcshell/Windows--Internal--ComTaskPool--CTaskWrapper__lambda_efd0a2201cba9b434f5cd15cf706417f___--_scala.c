/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_scalar_deleting_destructor_ @ 0x1804816E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F0A48 (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 */

volatile int **__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efd0a2201cba9b434f5cd15cf706417f___::_scalar_deleting_destructor_(
        volatile int **a1,
        char a2)
{
  Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
