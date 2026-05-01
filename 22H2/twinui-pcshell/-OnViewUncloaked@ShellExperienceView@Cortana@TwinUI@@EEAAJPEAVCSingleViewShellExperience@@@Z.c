/*
 * XREFs of ?OnViewUncloaked@ShellExperienceView@Cortana@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BA330
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@@@details@wil@@QEAA_NXZ @ 0x1800AB6E0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_BackPortSearchFullActivationTest@.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::OnViewUncloaked(
        RTL_SRWLOCK *this,
        struct CSingleViewShellExperience *a2)
{
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_BackPortSearchFullActivationTest>::GetImpl'::`2'::impl) )
    return TwinUI::Cortana::ShellExperienceView::_FireViewChanged(this - 5, 11, 0);
  else
    return 0LL;
}
