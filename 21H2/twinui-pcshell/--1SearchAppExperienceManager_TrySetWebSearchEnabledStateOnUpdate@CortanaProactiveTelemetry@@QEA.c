/*
 * XREFs of ??1SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800A1544
 * Callers:
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::__lambda_050fa47c6e91e469e941dbfe29c54c93_ @ 0x1800A12A8 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--__lambda_050fa47c6e91e469e941dbfe29c54c93_.c)
 *     _lambda_050fa47c6e91e469e941dbfe29c54c93_::operator() @ 0x1800A1A04 (_lambda_050fa47c6e91e469e941dbfe29c54c93_--operator().c)
 *     __lambda_050fa47c6e91e469e941dbfe29c54c93_::operator()_::_1_::dtor$0 @ 0x1800A1CD1 (__lambda_050fa47c6e91e469e941dbfe29c54c93_--operator()_--_1_--dtor$0.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___::_scalar_deleting_destructor_ @ 0x1800A1D70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_050fa47c6e91e469e941dbfe29c54c93___--_scala.c)
 *     ?TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManager@@AEAAXXZ @ 0x1800AAAF4 (-TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManager@@AEAAXXZ.c)
 *     _SearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate_::_1_::dtor$0 @ 0x1800AAC4C (_SearchAppExperienceManager--TrySetWebSearchEnabledStateOnUpdate_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180075138 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate(
        CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
