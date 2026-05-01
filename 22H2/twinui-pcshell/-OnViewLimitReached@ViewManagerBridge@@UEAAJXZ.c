/*
 * XREFs of ?OnViewLimitReached@ViewManagerBridge@@UEAAJXZ @ 0x180330D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ @ 0x180337B44 (-ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ.c)
 */

__int64 __fastcall ViewManagerBridge::OnViewLimitReached(ViewManagerBridge *this)
{
  ViewManagerInteropTelemetry::ViewManagerViewLimitReached();
  return 0LL;
}
