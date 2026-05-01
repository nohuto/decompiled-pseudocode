/*
 * XREFs of ??0ComponentInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x18043146C
 * Callers:
 *     CTSimpleFixedArray_ItemAnimationCoordinatorBase::ComponentInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::ComponentInfo___::FindEx_CLambdaCompareHelper__lambda_02b9daef8f100c523177686569a95163_____ @ 0x1804311C0 (CTSimpleFixedArray_ItemAnimationCoordinatorBase--ComponentInfo_CSimpleArrayStandardCompareHelper.c)
 *     ?BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ @ 0x180431610 (-BeginAnimation@ItemAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

ItemAnimationCoordinatorBase::ComponentInfo *__fastcall ItemAnimationCoordinatorBase::ComponentInfo::ComponentInfo(
        ItemAnimationCoordinatorBase::ComponentInfo *this,
        const struct ItemAnimationCoordinatorBase::ComponentInfo *a2)
{
  __int64 *v4; // rcx
  ItemAnimationCoordinatorBase::ComponentInfo *result; // rax

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (__int64 *)((char *)this + 8);
  *v4 = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v4);
  result = this;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  return result;
}
