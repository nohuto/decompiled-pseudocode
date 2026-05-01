/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::_scalar_deleting_destructor_ @ 0x180026720
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 5);
  v4 = (std::_Ref_count_base *)a1[4];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
