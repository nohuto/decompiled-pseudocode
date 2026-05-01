/*
 * XREFs of CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____ @ 0x180431278
 * Callers:
 *     ?PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@AEBUCRect@Geometry@@PEA_N@Z @ 0x180432530 (-PositionChanged@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z @ 0x1804314F0 (--0PositionChangedInfo@ItemAnimationCoordinatorBase@@QEAA@AEBU01@@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray_ItemAnimationCoordinatorBase::PositionChangedInfo_CSimpleArrayStandardCompareHelper_ItemAnimationCoordinatorBase::PositionChangedInfo___::FindEx_CLambdaCompareHelper__lambda_11c9f49c61b385fc004e087a93718bb8_____(
        _QWORD *a1,
        __int64 a2,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  const struct ItemAnimationCoordinatorBase::PositionChangedInfo *v5; // rax
  __int64 i; // rdi
  __int64 *v10; // r13
  __int64 v11; // rax
  __int64 *v12; // rbp
  bool v13; // si
  _BYTE v16[48]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v17[128]; // [rsp+58h] [rbp-80h] BYREF

  *a4 = 0LL;
  v4 = 0LL;
  v5 = a3;
  if ( !a1[1] )
    return 2147647531LL;
  for ( i = 0LL; ; i += 48LL )
  {
    v10 = (__int64 *)ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
                       (ItemAnimationCoordinatorBase::PositionChangedInfo *)v16,
                       v5);
    v11 = ItemAnimationCoordinatorBase::PositionChangedInfo::PositionChangedInfo(
            (ItemAnimationCoordinatorBase::PositionChangedInfo *)v17,
            (const struct ItemAnimationCoordinatorBase::PositionChangedInfo *)(i + *a1));
    v12 = (__int64 *)v11;
    v13 = **(_DWORD **)a2 == *(_DWORD *)(v11 + 8)
       && (unsigned int)SHIsSameObject(**(struct IUnknown ***)(a2 + 8), *(struct IUnknown **)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
    if ( v13 )
      break;
    v5 = a3;
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
