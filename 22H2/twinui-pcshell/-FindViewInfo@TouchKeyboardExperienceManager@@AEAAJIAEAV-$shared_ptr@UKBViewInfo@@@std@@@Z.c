/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1803B8A3C
 * Callers:
 *     _lambda_13e7c7d1bbe76ddb28a4a415717d5504_::operator() @ 0x1800CEBA4 (_lambda_13e7c7d1bbe76ddb28a4a415717d5504_--operator().c)
 *     _lambda_4d10a89d0d66f2982df1f6a73309b1fb_::operator() @ 0x1800CEF88 (_lambda_4d10a89d0d66f2982df1f6a73309b1fb_--operator().c)
 *     _lambda_51d6f8f9b06e99048dd25aff80a12ac0_::operator() @ 0x1800CF2C8 (_lambda_51d6f8f9b06e99048dd25aff80a12ac0_--operator().c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803B86B4 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x1803BA350 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x1803BD394 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028ECB4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_7cc81168d6c0e2361bee2f6882a4617c___ @ 0x1803B5EA0 (std--find_if_std--_Vector_const_iterator_std--_Vector_val_std--_Simple_types_std--s_ea_1803B5EA0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(__int64 a1, int a2, _QWORD *a3)
{
  RTL_SRWLOCK *v6; // rsi
  unsigned int v7; // ebx
  KBViewInfo **v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+58h] [rbp+20h]

  v6 = (RTL_SRWLOCK *)(a1 + 416);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 416));
  v10 = v6;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_KBViewInfo_________lambda_7cc81168d6c0e2361bee2f6882a4617c___(
    &v9,
    *(KBViewInfo ***)(a1 + 424),
    *(KBViewInfo ***)(a1 + 432),
    a2);
  if ( v9 == *(KBViewInfo ***)(a1 + 432) )
  {
    v7 = -2147023728;
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v9);
    v7 = 0;
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7;
}
