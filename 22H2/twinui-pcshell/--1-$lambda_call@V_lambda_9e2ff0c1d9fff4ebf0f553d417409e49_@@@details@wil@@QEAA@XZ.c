/*
 * XREFs of ??1?$lambda_call@V_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@@details@wil@@QEAA@XZ @ 0x180135BF4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2 @ 0x18013C760 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$2_::_1_::dtor$2 @ 0x18013D897 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimA_ea_18013D897.c)
 * Callees:
 *     ??R_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@QEBAXXZ @ 0x180136CBC (--R_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_@@QEBAXXZ.c)
 */

__int64 __fastcall wil::details::lambda_call<_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_>::~lambda_call<_lambda_9e2ff0c1d9fff4ebf0f553d417409e49_>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    _lambda_9e2ff0c1d9fff4ebf0f553d417409e49_::operator()();
  }
  return std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 8));
}
