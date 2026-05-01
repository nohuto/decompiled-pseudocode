/*
 * XREFs of ??$DoInvoke@V_lambda_e76785eefaca58383fb180da28b78939_@@@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_e76785eefaca58383fb180da28b78939_@@@Z @ 0x180050930
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18004FC6C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$InvokeDelegates@V_lambda_e76785eefaca58383fb180da28b78939_@@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_e76785eefaca58383fb180da28b78939_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1800509E8 (--$InvokeDelegates@V_lambda_e76785eefaca58383fb180da28b78939_@@U-$ITypedEventHandler@PEAUIBaseEx.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180051C94 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095340 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_e76785eefaca58383fb180da28b78939_>(
        __int64 a1,
        __int128 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  volatile int *v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v10, a1 + 8);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v10);
  v5 = v9;
  if ( v9 )
  {
    v8 = *a2;
    v4 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_e76785eefaca58383fb180da28b78939_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>(
           &v8,
           v9,
           a1);
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v5 + 12), v6) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
