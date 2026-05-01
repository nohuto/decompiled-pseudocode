/*
 * XREFs of ?GetAnimationCoordinator@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIAnimationCoordinator@@@WRL@Microsoft@@XZ @ 0x1804123B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::GetAnimationCoordinator(__int64 a1, __int64 *a2)
{
  void **v2; // rax
  __int64 v4; // rcx

  v2 = *(void ***)(a1 + 200);
  if ( v2 )
    goto LABEL_5;
  v4 = *(_QWORD *)(a1 + 80);
  if ( !v4 )
  {
    v2 = CMultitaskingViewElementBase::s_nullAnimationCoordinator;
LABEL_5:
    *a2 = (__int64)v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
    return a2;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 384LL))(v4);
  return a2;
}
