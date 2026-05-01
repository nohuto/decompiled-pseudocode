/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803BE440
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___ @ 0x1800CE404 (wil--ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_dec51abe3857ae1fe2422bd3bb2739bf___ @ 0x1800CE4C0 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_KBV.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028ECB4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x1803B43F8 (--$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803B84E4 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x1803BE070 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@QEAAXI@Z @ 0x1803D8B34 (-OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnViewEvent(
        TouchKeyboardExperienceManager *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // eax
  struct EventRegistrationToken v6; // r8
  unsigned int v7; // edi
  int v9; // eax
  std::_Ref_count_base *v10; // rdi
  int v11; // eax
  RTL_SRWLOCK *v12; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v13[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v14[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v16; // [rsp+80h] [rbp+30h] BYREF
  struct IUnknown ***v17; // [rsp+88h] [rbp+38h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( v16 )
    {
      if ( v16 == 4 )
      {
        *(_OWORD *)v13 = 0LL;
        Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v12, (RTL_SRWLOCK *)this + 52);
        std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_dec51abe3857ae1fe2422bd3bb2739bf___(
          &v17,
          *((struct IUnknown ****)this + 53),
          *((struct IUnknown ****)this + 54),
          a2);
        if ( v17 != *((struct IUnknown ****)this + 54) )
        {
          std::shared_ptr<PeoplePaneViewInfo>::operator=(v13, v17);
          v14[0] = (__int64)this;
          v14[1] = (__int64)&v17;
          v9 = wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___(v14);
          if ( v9 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x9AB,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v9);
        }
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v12);
        v10 = v13[0];
        if ( v13[0] )
        {
          v11 = TouchKeyboardExperienceManager::DestroyView(this, v13[0]);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x9B2,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v11);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
            (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
            1u,
            3u);
          KeyboardHosting::TabTipAdapterPolicy::OnViewDestroyed(
            *(KeyboardHosting::TabTipAdapterPolicy **)(*((_QWORD *)this + 86) + 104LL),
            *((_DWORD *)v10 + 26));
        }
        if ( v13[1] )
          std::_Ref_count_base::_Decref(v13[1]);
      }
    }
    else
    {
      LODWORD(v17) = TouchKeyboardExperienceManager::OnViewCreated(
                       this,
                       (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
                       v6);
      if ( (int)v17 < 0 )
        TouchKeyboardExperienceTelemetryLogger::OnViewCreatedFailed<long &>((int *)&v17);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x987,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
