/*
 * XREFs of DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x18041F928
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___ @ 0x18041F6BC (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_4c5a7e91a713f1717e0d1c2ef333a.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@@WRL@Microsoft@@QEAA@XZ @ 0x18041F020 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUIAnimationStoryboardEventHandler2@@.c)
 */

_QWORD *__fastcall DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___::CAnimationCallbackHandler__lambda_66e9bc9c72e516e99e5f8bbfe027d9d4___lambda_4c5a7e91a713f1717e0d1c2ef333ae9e___(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUIAnimationStoryboardEventHandler2>(a1);
  *a1 = off_180533278;
  a1[3] = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 3);
  a1[4] = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  return a1;
}
