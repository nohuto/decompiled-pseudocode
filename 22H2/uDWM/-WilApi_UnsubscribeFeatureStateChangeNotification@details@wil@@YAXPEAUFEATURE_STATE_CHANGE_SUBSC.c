/*
 * XREFs of ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18007FCF8
 * Callers:
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18007DE80 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  void (__fastcall *v2)(wil::details *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *); // rax

  v2 = (void (__fastcall *)(wil::details *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *))g_wil_details_internalUnsubscribeFeatureStateChangeNotification;
  if ( g_wil_details_internalUnsubscribeFeatureStateChangeNotification
    || (v2 = (void (__fastcall *)(wil::details *, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *))g_wil_details_apiUnsubscribeFeatureStateChangeNotification) != 0LL )
  {
    v2(this, a2);
  }
}
