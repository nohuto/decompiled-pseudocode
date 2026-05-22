/*
 * XREFs of wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::operator() @ 0x18016A6DC
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::_ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___ @ 0x180169E2C (wil--details--ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___--_ScopeExitFn__lambda_f890.c)
 *     ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x18016EEB0 (-SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEA.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D05B0 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D45BC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ?SetHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKGEG@Z @ 0x18016F0E8 (-SetHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKGEG@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::operator()(__int64 a1)
{
  unsigned __int16 *v1; // rdi
  char *v2; // rsi
  unsigned __int16 *v3; // r14
  __int64 v4; // rbx
  int *v5; // r15
  __int64 v6; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v7; // rcx

  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_BYTE *)(a1 + 40) = 0;
    v1 = *(unsigned __int16 **)(a1 + 32);
    v2 = *(char **)(a1 + 24);
    v3 = *(unsigned __int16 **)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(int **)a1;
    if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled(a1) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
        v6,
        _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTraceContinuous::SetHapticsFeedback_(
        v7,
        *v5,
        *(_DWORD *)(v4 + 8),
        *(_DWORD *)(v4 + 12),
        *v3,
        *v2,
        *v1);
    }
  }
}
