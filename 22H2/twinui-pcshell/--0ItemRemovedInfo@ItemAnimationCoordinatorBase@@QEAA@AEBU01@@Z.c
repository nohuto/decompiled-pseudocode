/*
 * XREFs of ??0ItemRemovedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x180431120
 * Callers:
 *     _lambda_88032d98673c75c82401aed8ec27639f_::operator() @ 0x1804311A8 (_lambda_88032d98673c75c82401aed8ec27639f_--operator().c)
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x180431280 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

ItemAnimationCoordinatorBase::ItemRemovedInfo *__fastcall ItemAnimationCoordinatorBase::ItemRemovedInfo::ItemRemovedInfo(
        ItemAnimationCoordinatorBase::ItemRemovedInfo *this,
        const struct ItemAnimationCoordinatorBase::ItemRemovedInfo *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 1);
  return this;
}
